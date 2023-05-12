#include <stdio.h>
#include "conio.h"

const char* input()
{
    char buffer[BUFSIZ];
    char text[BUFSIZ];

    for(int i = 0; i < sizeof(buffer); i++)
    {
        buffer[i] = getch();

        if(buffer[i] == 10)
        {
            buffer[i] = 0;
            break;
        }
    }

    *text = *buffer;
    return text;
}

int main()
{
    printf("name: ");
    const char* name = input();
    printf("%s\n", name);

    return 0;
}
