/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Copyright by The HDF Group.                                               *
 * All rights reserved.                                                      *
 *                                                                           *
 * This file is part of HDF5.  The full HDF5 copyright notice, including     *
 * terms governing use, modification, and redistribution, is contained in    *
 * the COPYING file, which can be found at the root of the source code       *
 * distribution tree, or in https://www.hdfgroup.org/licenses.               *
 * If you do not have access to either file, you may request a copy from     *
 * help@hdfgroup.org.                                                        *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */


#ifdef _WIN32
   #include "H5pubconf-windows.h"
#else
   #include "H5pubconf-linux.h"
   #ifndef _GNU_SOURCE
      #define _GNU_SOURCE 1
   #endif
   #define __STDC_WANT_LIB_EXT2__ 1
#endif


#define H5_GCC_DIAG_ON(a) ;
#define H5_GCC_DIAG_OFF(a) ;
#define H5_GCC_CLANG_DIAG_ON(a) ;
#define H5_GCC_CLANG_DIAG_OFF(a) ;
#define H5_MULTI_GCC_CLANG_DIAG_ON(a) ;
#define H5_MULTI_GCC_CLANG_DIAG_OFF(a) ;

#define H5_HAVE_FILTER_DEFLATE 1
#define H5_ZLIB_HEADER "../../zlib/zlib.h"

#if !defined(H5_SIZEOF_SSIZE_T)
  #define H5_SIZEOF_SSIZE_T 0
#endif

