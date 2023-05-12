#include <stdio.h>
#include "input.h"

int main()
{
    printf("name: ");
    const char *name = input();
    printf("%s\n", name);

    return 0;
}
