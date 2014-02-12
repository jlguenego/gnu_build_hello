#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([gnu_build_hello], [0.1], [jlguenego@gmail.com])
AM_INIT_AUTOMAKE([-Wall -Werror foreign])
AC_CONFIG_HEADERS([src/foobarmodule/config.h])
AC_PROG_RANLIB

# Checks for programs.
AC_PROG_CC
AM_PROG_AR

# Checks for libraries.
AC_CHECK_LIB([crypto], [SHA1])
#AC_CHECK_LIB([ssl], [main])

# Checks for header files.
AC_CHECK_HEADERS([string.h])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.
AC_CONFIG_FILES([Makefile src/Makefile src/foobarmodule/Makefile])
AC_OUTPUT
