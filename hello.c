#include <stdio.h>
#include <ltdl.h>
#include "hello.h"

int main(int argc, char* argv[])
{
    lt_dlhandle handle = NULL;
    lt_dlinit();
    hello();
    handle = lt_dlopenext("module");
    if (handle != NULL) {
        int (*func)(void) = lt_dlsym(handle, "foo");
        if (func != NULL) {
            func();
        }
        lt_dlclose(handle);
    } else {
        printf("Can not load module.\n");
    }
    lt_dlexit();
    return 0;
}
