#include <stdio.h>
#include <dlfcn.h>
#include "hello.h"

int main(int argc, char* argv[])
{
    void* handle;
    hello(0);
    handle = dlopen("libshared2.so", RTLD_LAZY);
    if (handle != NULL) {
        int (*func)(int) = dlsym(handle, "hello");
        func(0);
    } else {
        printf("Can not load module.\n");
    }
    if (handle != NULL) {
        dlclose(handle);
    }
    return 0;
}
