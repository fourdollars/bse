ACLOCAL_AMFLAGS = -I m4
include_HEADERS = hello.h
bin_PROGRAMS = hello
lib_LTLIBRARIES = libshared1.la libshared2.la
noinst_LTLIBRARIES = libstatic.la

hello_SOURCES = hello.c
hello_LDADD = libshared1.la
hello_LDFLAGS = -ldl

libshared1_la_SOURCES = shared1.c
libshared1_la_LDFLAGS = -shared

libshared2_la_SOURCES = shared2.c
libshared2_la_LIBADD = libstatic.la
libshared2_la_LDFLAGS = -module

libstatic_la_SOURCES = static.c
libstatic_la_LDFLAGS = -static
