/* config.h for Android (bionic), in place of the one ./configure writes.
 *
 * Generated on a Linux host with
 *   ./configure --disable-nts --without-nettle --without-gnutls --without-nss
 *     --without-tomcrypt --disable-readline --without-editline --disable-privdrop
 *     --without-libcap --without-seccomp --disable-refclock
 *     --sysconfdir=/product/etc --localstatedir=/data/misc
 *     --chronyrundir=/data/misc/chrony/run
 *     --with-pidfile=/data/misc/chrony/run/chronyd.pid --with-rtcdevice=/dev/rtc0
 * and checked against bionic: every HAVE_ below exists there too.
 *
 * NTP_ERA_SPLIT is the build date of that run minus 50 years: NTP timestamps map to
 * 1976..2112. Regenerate this file when updating chrony.
 */
#define LINUX 1
#define DEBUG 0
#define FEAT_CMDMON 1
#define HAVE_LONG_TIME_T 1
#define NTP_ERA_SPLIT (1793711756LL - 18250 * 24 * 3600)
#define HAVE_IN_PKTINFO 1
#define FEAT_IPV6 1
#define _GNU_SOURCE 1
#define HAVE_IN6_PKTINFO 1
#define USE_PTHREAD_ASYNCDNS 1
#define HAVE_GETRANDOM 1
#define HAVE_RECVMMSG 1
#define HAVE_LINUX_TIMESTAMPING 1
#define HAVE_LINUX_TIMESTAMPING_RXFILTER_NTP 1
#define HAVE_LINUX_TIMESTAMPING_OPT_ID 1
#define HAVE_LINUX_TIMESTAMPING_OPT_PKTINFO 1
#define HAVE_LINUX_TIMESTAMPING_OPT_TX_SWHW 1
#define FEAT_RTC 1
#define HAVE_PTHREAD_SETSCHEDPARAM 1
#define HAVE_MLOCKALL 1
#define HAVE_SETRLIMIT_MEMLOCK 1
#define FORCE_DNSRETRY 1
#define DEFAULT_CONF_FILE "/product/etc/chrony.conf"
#define DEFAULT_HWCLOCK_FILE ""
#define DEFAULT_PID_FILE "/data/misc/chrony/run/chronyd.pid"
#define DEFAULT_RTC_DEVICE "/dev/rtc0"
#define DEFAULT_USER "root"
#define DEFAULT_CHRONYC_USER "root"
#define DEFAULT_COMMAND_SOCKET "/data/misc/chrony/run/chronyd.sock"
#define MAIL_PROGRAM "/usr/lib/sendmail"
#define CHRONYC_FEATURES "-READLINE -SECHASH +IPV6 -DEBUG"
#define CHRONYD_FEATURES "+CMDMON -REFCLOCK +RTC -PRIVDROP -SCFILTER -SIGND -NTS -SECHASH +IPV6 -DEBUG"
#define CHRONY_VERSION "4.9"
