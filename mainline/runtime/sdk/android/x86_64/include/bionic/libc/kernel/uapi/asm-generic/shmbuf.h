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
#ifndef __ASM_GENERIC_SHMBUF_H
#define __ASM_GENERIC_SHMBUF_H
#include <asm/bitsperlong.h>
struct shmid64_ds {
  struct ipc64_perm shm_perm;
  size_t shm_segsz;
#if __BITS_PER_LONG == 64
  long shm_atime;
  long shm_dtime;
  long shm_ctime;
#else
  unsigned long shm_atime;
  unsigned long shm_atime_high;
  unsigned long shm_dtime;
  unsigned long shm_dtime_high;
  unsigned long shm_ctime;
  unsigned long shm_ctime_high;
#endif
  __kernel_pid_t shm_cpid;
  __kernel_pid_t shm_lpid;
  unsigned long shm_nattch;
  unsigned long __unused4;
  unsigned long __unused5;
};
struct shminfo64 {
  unsigned long shmmax;
  unsigned long shmmin;
  unsigned long shmmni;
  unsigned long shmseg;
  unsigned long shmall;
  unsigned long __unused1;
  unsigned long __unused2;
  unsigned long __unused3;
  unsigned long __unused4;
};
#endif
