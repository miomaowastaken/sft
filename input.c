#include "input.h"
#include "conio.h"

const char *input()
{
    char buffer[BUFSIZ];

    for(int i = 0; i < sizeof(buffer); i++)
    {
        buffer[i] = getch();

        if(buffer[i] == 10)
        {
            buffer[i] = 0;
            break;
        }
    }

    const char *text = buffer;
    return text;
}
