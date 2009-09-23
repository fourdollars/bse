#include <stdio.h>
#include "hello.h"

int hello(int i)
{
    printf("shared\n");
    return i;
}
