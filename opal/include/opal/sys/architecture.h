/*
 * Copyright (c) 2004-2007 The Trustees of Indiana University and Indiana
 *                         University Research and Technology
 *                         Corporation.  All rights reserved.
 * Copyright (c) 2004-2005 The University of Tennessee and The University
 *                         of Tennessee Research Foundation.  All rights
 *                         reserved.
 * Copyright (c) 2004-2005 High Performance Computing Center Stuttgart,
 *                         University of Stuttgart.  All rights reserved.
 * Copyright (c) 2004-2005 The Regents of the University of California.
 *                         All rights reserved.
 * Copyright (c) 2011      Sandia National Laboratories. All rights reserved.
 * Copyright (c) 2014      Intel, Inc. All rights reserved
 * Copyright (c) 2016      Los Alamos National Security, LLC. All rights
 *                         reserved.
 * Copyright (c) 2017      Research Organization for Information Science
 *                         and Technology (RIST). All rights reserved.
 * Copyright (c) 2020      Google, LLC. All rights reserved.
 * $COPYRIGHT$
 *
 * Additional copyrights may follow
 *
 * $HEADER$
 */

/*
 * List of supported architectures
 */

#ifndef OPAL_SYS_ARCHITECTURE_H
#define OPAL_SYS_ARCHITECTURE_H

/* Architectures */
#define OPAL_UNSUPPORTED 0000
#define OPAL_IA32        0010
#define OPAL_X86_64      0030
#define OPAL_POWERPC32   0050
#define OPAL_POWERPC64   0051
#define OPAL_ARM         0100
#define OPAL_ARM64       0101
#define OPAL_BUILTIN_GCC 0202
#define OPAL_BUILTIN_NO  0203
#define OPAL_BUILTIN_C11 0204

/* Formats */
#define OPAL_DEFAULT 1000 /* standard for given architecture */

#endif /* #ifndef OPAL_SYS_ARCHITECTURE_H */
