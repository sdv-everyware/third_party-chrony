/* What chrony needs from glibc-style headers that bionic does not have. Included first in
 * every chrony source (Android.bp, -include). */

#ifndef CHRONY_ANDROID_BIONIC_COMPAT_H
#define CHRONY_ANDROID_BIONIC_COMPAT_H

#include <linux/ethtool.h>

/* bionic's copy of the kernel UAPI headers (bionic/libc/kernel) keeps structs and constants
 * but drops their static inline functions. As in the kernel's uapi/linux/ethtool.h. */
static inline __u32 ethtool_cmd_speed(const struct ethtool_cmd *ep)
{
  return (ep->speed_hi << 16) | ep->speed;
}

#endif
