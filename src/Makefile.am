SUBDIRS = foobarmodule plugins/a plugins/b

AM_CFLAGS = -g3 -O0
AM_CXXFLAGS = -g3 -O0

bin_PROGRAMS = gnu_build_hello
gnu_build_hello_SOURCES = main.c
noinst_HEADERS = main.h
gnu_build_hello_LDADD = $(top_srcdir)/src/foobarmodule/libfoobar.a -lcrypto -lltdl
gnu_build_hello_CFLAGS = -std=c99 -Wall