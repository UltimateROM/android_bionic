/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _UAPI_LINUX_ILA_H
#define _UAPI_LINUX_ILA_H
#define ILA_GENL_NAME "ila"
#define ILA_GENL_VERSION 0x1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
  ILA_ATTR_UNSPEC,
  ILA_ATTR_LOCATOR,
  ILA_ATTR_IDENTIFIER,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ILA_ATTR_LOCATOR_MATCH,
  ILA_ATTR_IFINDEX,
  ILA_ATTR_DIR,
  ILA_ATTR_PAD,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ILA_ATTR_CSUM_MODE,
  __ILA_ATTR_MAX,
};
#define ILA_ATTR_MAX (__ILA_ATTR_MAX - 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
  ILA_CMD_UNSPEC,
  ILA_CMD_ADD,
  ILA_CMD_DEL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ILA_CMD_GET,
  __ILA_CMD_MAX,
};
#define ILA_CMD_MAX (__ILA_CMD_MAX - 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ILA_DIR_IN (1 << 0)
#define ILA_DIR_OUT (1 << 1)
enum {
  ILA_CSUM_ADJUST_TRANSPORT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ILA_CSUM_NEUTRAL_MAP,
  ILA_CSUM_NO_ACTION,
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
