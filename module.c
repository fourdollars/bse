#include <stdio.h>
#include "hello.h"
/* aliases for the exported symbols */
#define hello module_LTX_hello

int foo(void)
{
    return hello();
}

int hello(void)
{
    printf("module\n");
    return 0;
}
