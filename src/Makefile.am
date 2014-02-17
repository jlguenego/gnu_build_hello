SUBDIRS = foobarmodule plugins/a plugins/b

bin_PROGRAMS = gnu_build_hello
gnu_build_hello_SOURCES = main.c
noinst_HEADERS = main.h
gnu_build_hello_LDADD = $(top_srcdir)/src/foobarmodule/libfoobar.a
gnu_build_hello_CFLAGS = -std=c99 -Wall
gnu_build_hello_LDLIBS = -lcrypto
