#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ(2.61)
AC_INIT([bse],[0.0],[fourdollars@gmail.com])
AC_CONFIG_SRCDIR([hello.c])
AC_CONFIG_HEADERS([config.h])

dnl Enable building of the installable library
dnl and set LIBLTDL accordingly
AC_LIBLTDL_INSTALLABLE
dnl Check for dlopen support
AC_LIBTOOL_DLOPEN
dnl Configure libtool
AC_PROG_LIBTOOL
dnl Configure libltdl
AC_CONFIG_SUBDIRS(libltdl)

AM_INIT_AUTOMAKE([-Wall -Werror foreign])

# Checks for programs.
AC_PROG_CC

# Checks for libraries.

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_SUBST(INCLTDL)
AC_SUBST(LIBLTDL)

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
