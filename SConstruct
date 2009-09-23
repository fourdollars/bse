StaticLibrary('static', ['static.c'])
SharedLibrary('shared1', ['shared1.c'])
SharedLibrary('shared2', ['shared2.c'], LIBS=['static'], LIBPATH=['.'])
Program('hello', ['hello.c'], CPPFLAGS='-Wall -g', LIBS=['shared1','dl'], LIBPATH=['.'])
