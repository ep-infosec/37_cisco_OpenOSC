/*
 * Copyright (c) 2020, Cisco Systems, Inc.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://github.com/cisco/openosc/LICENSE
 */

#ifndef __OPENOSC_FORTIFY_NOMAP_METRIC_H__
#define __OPENOSC_FORTIFY_NOMAP_METRIC_H__


#ifdef OPENOSC_METRIC_FEATURE_ENABLED

#if (RTD_OSC_METRIC_METHOD == RTD_ASM_LOC_METHOD)

#define ASPRINTF_NOMAP_MAGIC		".loc 1 8389040"
#define DPRINTF_NOMAP_MAGIC		".loc 1 8389056"
#define FPRINTF_NOMAP_MAGIC		".loc 1 8389072"
#define FWPRINTF_NOMAP_MAGIC		".loc 1 8389088"
#define PRINTF_NOMAP_MAGIC		".loc 1 8389104"
#define SNPRINTF_NOMAP_MAGIC		".loc 1 8389120"
#define SPRINTF_NOMAP_MAGIC		".loc 1 8389136"
#define SWPRINTF_NOMAP_MAGIC		".loc 1 8389152"
#define WPRINTF_NOMAP_MAGIC		".loc 1 8389168"
#define CONFSTR_NOMAP_MAGIC		".loc 1 8389184"
#define FGETS_NOMAP_MAGIC		".loc 1 8389200"
#define FGETS_UNLOCKED_NOMAP_MAGIC		".loc 1 8389216"
#define FGETWS_NOMAP_MAGIC		".loc 1 8389232"
#define FGETWS_UNLOCKED_NOMAP_MAGIC		".loc 1 8389248"
#define FREAD_NOMAP_MAGIC		".loc 1 8389264"
#define FREAD_UNLOCKED_NOMAP_MAGIC		".loc 1 8389280"
#define GETCWD_NOMAP_MAGIC		".loc 1 8389296"
#define GETDOMAINNAME_NOMAP_MAGIC		".loc 1 8389312"
#define GETGROUPS_NOMAP_MAGIC		".loc 1 8389328"
#define GETHOSTNAME_NOMAP_MAGIC		".loc 1 8389344"
#define GETS_NOMAP_MAGIC		".loc 1 8389360"
#define GETWD_NOMAP_MAGIC		".loc 1 8389376"
#define LONGJMP_NOMAP_MAGIC		".loc 1 8389392"
#define MBSNRTOWCS_NOMAP_MAGIC		".loc 1 8389408"
#define MBSRTOWCS_NOMAP_MAGIC		".loc 1 8389424"
#define MBSTOWCS_NOMAP_MAGIC		".loc 1 8389440"
#define MEMPCPY_NOMAP_MAGIC		".loc 1 8389456"
#define POLL_NOMAP_MAGIC		".loc 1 8389472"
#define PPOLL_NOMAP_MAGIC		".loc 1 8389488"
#define PREAD_NOMAP_MAGIC		".loc 1 8389504"
#define READ_NOMAP_MAGIC		".loc 1 8389520"
#define READLINKAT_NOMAP_MAGIC		".loc 1 8389536"
#define READLINK_NOMAP_MAGIC		".loc 1 8389552"
#define REALPATH_NOMAP_MAGIC		".loc 1 8389568"
#define RECV_NOMAP_MAGIC		".loc 1 8389584"
#define RECVFROM_NOMAP_MAGIC		".loc 1 8389600"
#define STPCPY_NOMAP_MAGIC		".loc 1 8389616"
#define STPNCPY_NOMAP_MAGIC		".loc 1 8389632"
#define TTYNAME_R_NOMAP_MAGIC		".loc 1 8389648"
#define VASPRINTF_NOMAP_MAGIC		".loc 1 8389664"
#define VDPRINTF_NOMAP_MAGIC		".loc 1 8389680"
#define VFPRINTF_NOMAP_MAGIC		".loc 1 8389696"
#define VFWPRINTF_NOMAP_MAGIC		".loc 1 8389712"
#define VPRINTF_NOMAP_MAGIC		".loc 1 8389728"
#define VSPRINTF_NOMAP_MAGIC		".loc 1 8389744"
#define VSWPRINTF_NOMAP_MAGIC		".loc 1 8389760"
#define VWPRINTF_NOMAP_MAGIC		".loc 1 8389776"
#define WCPCPY_NOMAP_MAGIC		".loc 1 8389792"
#define WCPNCPY_NOMAP_MAGIC		".loc 1 8389808"
#define WCRTOMB_NOMAP_MAGIC		".loc 1 8389824"
#define WCSCAT_NOMAP_MAGIC		".loc 1 8389840"
#define WCSCPY_NOMAP_MAGIC		".loc 1 8389856"
#define WCSNCAT_NOMAP_MAGIC		".loc 1 8389872"
#define WCSNCPY_NOMAP_MAGIC		".loc 1 8389888"
#define WCSNRTOMBS_NOMAP_MAGIC		".loc 1 8389904"
#define WCSRTOMBS_NOMAP_MAGIC		".loc 1 8389920"
#define WCSTOMBS_NOMAP_MAGIC		".loc 1 8389936"
#define WCTOMB_NOMAP_MAGIC		".loc 1 8389952"
#define WMEMCPY_NOMAP_MAGIC		".loc 1 8389968"
#define WMEMMOVE_NOMAP_MAGIC		".loc 1 8389984"
#define WMEMPCPY_NOMAP_MAGIC		".loc 1 8390000"
#define WMEMSET_NOMAP_MAGIC		".loc 1 8390016"

#elif (RTD_OSC_METRIC_METHOD == RTD_ASM_BYTE_METHOD)

#define ASPRINTF_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x1, 0x1\n" OSC_JUMPLABEL
#define CONFSTR_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x2, 0x1\n" OSC_JUMPLABEL
#define DPRINTF_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x3, 0x1\n" OSC_JUMPLABEL
#define FGETS_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x4, 0x1\n" OSC_JUMPLABEL
#define FGETS_UNLOCKED_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x5, 0x1\n" OSC_JUMPLABEL
#define FGETWS_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x6, 0x1\n" OSC_JUMPLABEL
#define FGETWS_UNLOCKED_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x7, 0x1\n" OSC_JUMPLABEL
#define FPRINTF_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x8, 0x1\n" OSC_JUMPLABEL
#define FREAD_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x9, 0x1\n" OSC_JUMPLABEL
#define FREAD_UNLOCKED_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0xa, 0x1\n" OSC_JUMPLABEL
#define FWPRINTF_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0xb, 0x1\n" OSC_JUMPLABEL
#define GETCWD_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0xc, 0x1\n" OSC_JUMPLABEL
#define GETDOMAINNAME_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0xd, 0x1\n" OSC_JUMPLABEL
#define GETGROUPS_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0xe, 0x1\n" OSC_JUMPLABEL
#define GETHOSTNAME_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0xf, 0x1\n" OSC_JUMPLABEL
#define GETS_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x10, 0x1\n" OSC_JUMPLABEL
#define GETWD_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x11, 0x1\n" OSC_JUMPLABEL
#define LONGJMP_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x12, 0x1\n" OSC_JUMPLABEL
#define MBSNRTOWCS_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x13, 0x1\n" OSC_JUMPLABEL
#define MBSRTOWCS_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x14, 0x1\n" OSC_JUMPLABEL
#define MBSTOWCS_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x15, 0x1\n" OSC_JUMPLABEL
#define MEMPCPY_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x16, 0x1\n" OSC_JUMPLABEL
#define POLL_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x17, 0x1\n" OSC_JUMPLABEL
#define PPOLL_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x18, 0x1\n" OSC_JUMPLABEL
#define PREAD_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x19, 0x1\n" OSC_JUMPLABEL
#define PRINTF_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x1a, 0x1\n" OSC_JUMPLABEL
#define READ_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x1b, 0x1\n" OSC_JUMPLABEL
#define READLINKAT_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x1c, 0x1\n" OSC_JUMPLABEL
#define READLINK_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x1d, 0x1\n" OSC_JUMPLABEL
#define REALPATH_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x1e, 0x1\n" OSC_JUMPLABEL
#define RECV_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x1f, 0x1\n" OSC_JUMPLABEL
#define RECVFROM_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x20, 0x1\n" OSC_JUMPLABEL
#define SNPRINTF_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x21, 0x1\n" OSC_JUMPLABEL
#define SPRINTF_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x22, 0x1\n" OSC_JUMPLABEL
#define STPCPY_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x23, 0x1\n" OSC_JUMPLABEL
#define STPNCPY_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x24, 0x1\n" OSC_JUMPLABEL
#define SWPRINTF_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x25, 0x1\n" OSC_JUMPLABEL
#define TTYNAME_R_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x26, 0x1\n" OSC_JUMPLABEL
#define VASPRINTF_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x27, 0x1\n" OSC_JUMPLABEL
#define VDPRINTF_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x28, 0x1\n" OSC_JUMPLABEL
#define VFPRINTF_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x29, 0x1\n" OSC_JUMPLABEL
#define VFWPRINTF_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x2a, 0x1\n" OSC_JUMPLABEL
#define VPRINTF_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x2b, 0x1\n" OSC_JUMPLABEL
#define VSPRINTF_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x2c, 0x1\n" OSC_JUMPLABEL
#define VSWPRINTF_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x2d, 0x1\n" OSC_JUMPLABEL
#define VWPRINTF_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x2e, 0x1\n" OSC_JUMPLABEL
#define WCPCPY_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x2f, 0x1\n" OSC_JUMPLABEL
#define WCPNCPY_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x30, 0x1\n" OSC_JUMPLABEL
#define WCRTOMB_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x31, 0x1\n" OSC_JUMPLABEL
#define WCSCAT_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x32, 0x1\n" OSC_JUMPLABEL
#define WCSCPY_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x33, 0x1\n" OSC_JUMPLABEL
#define WCSNCAT_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x34, 0x1\n" OSC_JUMPLABEL
#define WCSNCPY_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x35, 0x1\n" OSC_JUMPLABEL
#define WCSNRTOMBS_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x36, 0x1\n" OSC_JUMPLABEL
#define WCSRTOMBS_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x37, 0x1\n" OSC_JUMPLABEL
#define WCSTOMBS_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x38, 0x1\n" OSC_JUMPLABEL
#define WCTOMB_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x39, 0x1\n" OSC_JUMPLABEL
#define WMEMCPY_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x3a, 0x1\n" OSC_JUMPLABEL
#define WMEMMOVE_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x3b, 0x1\n" OSC_JUMPLABEL
#define WMEMPCPY_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x3c, 0x1\n" OSC_JUMPLABEL
#define WMEMSET_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x3d, 0x1\n" OSC_JUMPLABEL
#define WPRINTF_NOMAP_MAGIC		OSC_JUMPOVER ".byte 0x4d, 0x41, 0x47, 0x49, 0x43, 0xd2, 0x3e, 0x1\n" OSC_JUMPLABEL

#endif

#define ASPRINTF_NOMAP_CASE		({__asm__(ASPRINTF_NOMAP_MAGIC);}),
#define CONFSTR_NOMAP_CASE		({__asm__(CONFSTR_NOMAP_MAGIC);}),
#define DPRINTF_NOMAP_CASE		({__asm__(DPRINTF_NOMAP_MAGIC);}),
#define FGETS_NOMAP_CASE		({__asm__(FGETS_NOMAP_MAGIC);}),
#define FGETS_UNLOCKED_NOMAP_CASE		({__asm__(FGETS_UNLOCKED_NOMAP_MAGIC);}),
#define FGETWS_NOMAP_CASE		({__asm__(FGETWS_NOMAP_MAGIC);}),
#define FGETWS_UNLOCKED_NOMAP_CASE		({__asm__(FGETWS_UNLOCKED_NOMAP_MAGIC);}),
#define FPRINTF_NOMAP_CASE		({__asm__(FPRINTF_NOMAP_MAGIC);}),
#define FREAD_NOMAP_CASE		({__asm__(FREAD_NOMAP_MAGIC);}),
#define FREAD_UNLOCKED_NOMAP_CASE		({__asm__(FREAD_UNLOCKED_NOMAP_MAGIC);}),
#define FWPRINTF_NOMAP_CASE		({__asm__(FWPRINTF_NOMAP_MAGIC);}),
#define GETCWD_NOMAP_CASE		({__asm__(GETCWD_NOMAP_MAGIC);}),
#define GETDOMAINNAME_NOMAP_CASE		({__asm__(GETDOMAINNAME_NOMAP_MAGIC);}),
#define GETGROUPS_NOMAP_CASE		({__asm__(GETGROUPS_NOMAP_MAGIC);}),
#define GETHOSTNAME_NOMAP_CASE		({__asm__(GETHOSTNAME_NOMAP_MAGIC);}),
#define GETS_NOMAP_CASE		({__asm__(GETS_NOMAP_MAGIC);}),
#define GETWD_NOMAP_CASE		({__asm__(GETWD_NOMAP_MAGIC);}),
#define LONGJMP_NOMAP_CASE		({__asm__(LONGJMP_NOMAP_MAGIC);}),
#define MBSNRTOWCS_NOMAP_CASE		({__asm__(MBSNRTOWCS_NOMAP_MAGIC);}),
#define MBSRTOWCS_NOMAP_CASE		({__asm__(MBSRTOWCS_NOMAP_MAGIC);}),
#define MBSTOWCS_NOMAP_CASE		({__asm__(MBSTOWCS_NOMAP_MAGIC);}),
#define MEMPCPY_NOMAP_CASE		({__asm__(MEMPCPY_NOMAP_MAGIC);}),
#define POLL_NOMAP_CASE		({__asm__(POLL_NOMAP_MAGIC);}),
#define PPOLL_NOMAP_CASE		({__asm__(PPOLL_NOMAP_MAGIC);}),
#define PREAD_NOMAP_CASE		({__asm__(PREAD_NOMAP_MAGIC);}),
#define PRINTF_NOMAP_CASE		({__asm__(PRINTF_NOMAP_MAGIC);}),
#define READ_NOMAP_CASE		({__asm__(READ_NOMAP_MAGIC);}),
#define READLINKAT_NOMAP_CASE		({__asm__(READLINKAT_NOMAP_MAGIC);}),
#define READLINK_NOMAP_CASE		({__asm__(READLINK_NOMAP_MAGIC);}),
#define REALPATH_NOMAP_CASE		({__asm__(REALPATH_NOMAP_MAGIC);}),
#define RECV_NOMAP_CASE		({__asm__(RECV_NOMAP_MAGIC);}),
#define RECVFROM_NOMAP_CASE		({__asm__(RECVFROM_NOMAP_MAGIC);}),
#define SNPRINTF_NOMAP_CASE		({__asm__(SNPRINTF_NOMAP_MAGIC);}),
#define SPRINTF_NOMAP_CASE		({__asm__(SPRINTF_NOMAP_MAGIC);}),
#define STPCPY_NOMAP_CASE		({__asm__(STPCPY_NOMAP_MAGIC);}),
#define STPNCPY_NOMAP_CASE		({__asm__(STPNCPY_NOMAP_MAGIC);}),
#define SWPRINTF_NOMAP_CASE		({__asm__(SWPRINTF_NOMAP_MAGIC);}),
#define TTYNAME_R_NOMAP_CASE		({__asm__(TTYNAME_R_NOMAP_MAGIC);}),
#define VASPRINTF_NOMAP_CASE		({__asm__(VASPRINTF_NOMAP_MAGIC);}),
#define VDPRINTF_NOMAP_CASE		({__asm__(VDPRINTF_NOMAP_MAGIC);}),
#define VFPRINTF_NOMAP_CASE		({__asm__(VFPRINTF_NOMAP_MAGIC);}),
#define VFWPRINTF_NOMAP_CASE		({__asm__(VFWPRINTF_NOMAP_MAGIC);}),
#define VPRINTF_NOMAP_CASE		({__asm__(VPRINTF_NOMAP_MAGIC);}),
#define VSPRINTF_NOMAP_CASE		({__asm__(VSPRINTF_NOMAP_MAGIC);}),
#define VSWPRINTF_NOMAP_CASE		({__asm__(VSWPRINTF_NOMAP_MAGIC);}),
#define VWPRINTF_NOMAP_CASE		({__asm__(VWPRINTF_NOMAP_MAGIC);}),
#define WCPCPY_NOMAP_CASE		({__asm__(WCPCPY_NOMAP_MAGIC);}),
#define WCPNCPY_NOMAP_CASE		({__asm__(WCPNCPY_NOMAP_MAGIC);}),
#define WCRTOMB_NOMAP_CASE		({__asm__(WCRTOMB_NOMAP_MAGIC);}),
#define WCSCAT_NOMAP_CASE		({__asm__(WCSCAT_NOMAP_MAGIC);}),
#define WCSCPY_NOMAP_CASE		({__asm__(WCSCPY_NOMAP_MAGIC);}),
#define WCSNCAT_NOMAP_CASE		({__asm__(WCSNCAT_NOMAP_MAGIC);}),
#define WCSNCPY_NOMAP_CASE		({__asm__(WCSNCPY_NOMAP_MAGIC);}),
#define WCSNRTOMBS_NOMAP_CASE		({__asm__(WCSNRTOMBS_NOMAP_MAGIC);}),
#define WCSRTOMBS_NOMAP_CASE		({__asm__(WCSRTOMBS_NOMAP_MAGIC);}),
#define WCSTOMBS_NOMAP_CASE		({__asm__(WCSTOMBS_NOMAP_MAGIC);}),
#define WCTOMB_NOMAP_CASE		({__asm__(WCTOMB_NOMAP_MAGIC);}),
#define WMEMCPY_NOMAP_CASE		({__asm__(WMEMCPY_NOMAP_MAGIC);}),
#define WMEMMOVE_NOMAP_CASE		({__asm__(WMEMMOVE_NOMAP_MAGIC);}),
#define WMEMPCPY_NOMAP_CASE		({__asm__(WMEMPCPY_NOMAP_MAGIC);}),
#define WMEMSET_NOMAP_CASE		({__asm__(WMEMSET_NOMAP_MAGIC);}),
#define WPRINTF_NOMAP_CASE		({__asm__(WPRINTF_NOMAP_MAGIC);}),

#else  /* !OPENOSC_METRIC_FEATURE_ENABLED */

#define ASPRINTF_NOMAP_CASE
#define CONFSTR_NOMAP_CASE
#define DPRINTF_NOMAP_CASE
#define FGETS_NOMAP_CASE
#define FGETS_UNLOCKED_NOMAP_CASE
#define FGETWS_NOMAP_CASE
#define FGETWS_UNLOCKED_NOMAP_CASE
#define FPRINTF_NOMAP_CASE
#define FREAD_NOMAP_CASE
#define FREAD_UNLOCKED_NOMAP_CASE
#define FWPRINTF_NOMAP_CASE
#define GETCWD_NOMAP_CASE
#define GETDOMAINNAME_NOMAP_CASE
#define GETGROUPS_NOMAP_CASE
#define GETHOSTNAME_NOMAP_CASE
#define GETS_NOMAP_CASE
#define GETWD_NOMAP_CASE
#define LONGJMP_NOMAP_CASE
#define MBSNRTOWCS_NOMAP_CASE
#define MBSRTOWCS_NOMAP_CASE
#define MBSTOWCS_NOMAP_CASE
#define MEMPCPY_NOMAP_CASE
#define POLL_NOMAP_CASE
#define PPOLL_NOMAP_CASE
#define PREAD_NOMAP_CASE
#define PRINTF_NOMAP_CASE
#define READ_NOMAP_CASE
#define READLINKAT_NOMAP_CASE
#define READLINK_NOMAP_CASE
#define REALPATH_NOMAP_CASE
#define RECV_NOMAP_CASE
#define RECVFROM_NOMAP_CASE
#define SNPRINTF_NOMAP_CASE
#define SPRINTF_NOMAP_CASE
#define STPCPY_NOMAP_CASE
#define STPNCPY_NOMAP_CASE
#define SWPRINTF_NOMAP_CASE
#define TTYNAME_R_NOMAP_CASE
#define VASPRINTF_NOMAP_CASE
#define VDPRINTF_NOMAP_CASE
#define VFPRINTF_NOMAP_CASE
#define VFWPRINTF_NOMAP_CASE
#define VPRINTF_NOMAP_CASE
#define VSPRINTF_NOMAP_CASE
#define VSWPRINTF_NOMAP_CASE
#define VWPRINTF_NOMAP_CASE
#define WCPCPY_NOMAP_CASE
#define WCPNCPY_NOMAP_CASE
#define WCRTOMB_NOMAP_CASE
#define WCSCAT_NOMAP_CASE
#define WCSCPY_NOMAP_CASE
#define WCSNCAT_NOMAP_CASE
#define WCSNCPY_NOMAP_CASE
#define WCSNRTOMBS_NOMAP_CASE
#define WCSRTOMBS_NOMAP_CASE
#define WCSTOMBS_NOMAP_CASE
#define WCTOMB_NOMAP_CASE
#define WMEMCPY_NOMAP_CASE
#define WMEMMOVE_NOMAP_CASE
#define WMEMPCPY_NOMAP_CASE
#define WMEMSET_NOMAP_CASE
#define WPRINTF_NOMAP_CASE

#endif  /* OPENOSC_METRIC_FEATURE_ENABLED */




#endif  /* __OPENOSC_FORTIFY_NOMAP_METRIC_H__ */
