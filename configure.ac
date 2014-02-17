#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([gnu_build_hello],[0.1],[jlguenego@gmail.com])
AM_INIT_AUTOMAKE([-Wall -Werror foreign])
AC_CONFIG_HEADERS([src/config.h])
AC_CONFIG_MACRO_DIR([m4])



# Checks for programs.
AC_PROG_CC
AM_PROG_AR

# Libtool
LT_PREREQ([2.4])
LT_INIT([dlopen])

# Checks for libraries.
AC_CHECK_LIB([crypto], [SHA1])
AC_CHECK_LIB([ltdl], [lt_dlopen])
#AC_CHECK_LIB([asdfasdfasdf], [lt_dlopen], [], [
#	echo "pas trouve..."
#	exit 1
#])
#AC_CHECK_LIB([ssl], [main])

# Checks for header files.
AC_CHECK_HEADERS([string.h])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.
AC_CONFIG_FILES([
	Makefile
	src/Makefile
	src/foobarmodule/Makefile
	src/plugins/a/Makefile
	src/plugins/b/Makefile
])
AC_OUTPUT
