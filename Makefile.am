SUBDIRS = libltdl
include_HEADERS = hello.h
bin_PROGRAMS = hello
lib_LTLIBRARIES = libshared.la module.la
noinst_LTLIBRARIES = libstatic.la

ACLOCAL_AMFLAGS = -I libltdl/m4

AM_CPPFLAGS = $(LTDLINCL)

hello_SOURCES = hello.c
hello_LDFLAGS = -export-dynamic
hello_LDADD = libshared.la $(LIBLTDL) -dlopen self -dlopen module.la
hello_DEPENDENCIES = $(LTDLDEPS) module.la

libshared_la_SOURCES = shared.c
libshared_la_LDFLAGS = -shared

module_la_SOURCES = module.c
module_la_LDFLAGS = -module
module_la_LIBADD = libstatic.la

libstatic_la_SOURCES = static.c
libstatic_la_LDFLAGS = -static
