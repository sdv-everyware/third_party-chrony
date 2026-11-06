#!/system/bin/sh
# chrony_refresh.sh <interface>: makes chronyd resolve its time servers again, now that the
# interface has a DHCP lease. Run by init on the lease (the property vendor.net.<if>.dns1
# that dhcpclient sets), see device/rb3/sdv_media_db845c/init.sdv_db845c.rc.
#
# chronyd starts at boot, before any network, and its first name resolution fails; it then
# retries with a growing interval (minutes), so the clock would stay at 1970 long after the
# network is up and every TLS connection fails ("certificate not yet valid"). The lease
# arrives microseconds before dhcpclient sets the default route: wait for the route, then
# refresh, and refresh again until chronyd has sources (DNS can still miss the first time).

iface=${1:?interface}
chronyc=/product/bin/chronyc

# the default route of the interface: destination 00000000 in /proc/net/route
i=0
while ! grep -q "^$iface[[:space:]]00000000" /proc/net/route; do
    i=$((i + 1))
    [ $i -ge 10 ] && break
    sleep 0.2
done

i=0
while [ $i -lt 10 ]; do
    $chronyc refresh > /dev/null 2>&1
    sleep 1
    case "$($chronyc activity 2>/dev/null)" in
        *"0 sources online"*) i=$((i + 1)) ;;
        *) exit 0 ;;
    esac
done
log -t chrony_refresh "no time sources after the lease on $iface"
