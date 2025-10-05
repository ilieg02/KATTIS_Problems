#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char stri[160];
    fgets(stri, 160, stdin);
    int ali = 0;
    int frow = 0;
    int length = strlen(stri);
    for (int i = 0; i < length; i++)
    {
        if (stri[i] == ':' && i != length)
        {
            if (stri[i + 1] == ')')
            {
                ali++;
            }
            else if (stri[i + 1] == '(')
            {
                frow++;
            }
        }
    }
    if (ali >= 1 && frow >= 1)
    {
        printf("%s\n", "double agent");
    }
    else if (ali >= 1 && frow == 0)
    {
        printf("%s\n", "alive");
    }
    else if (ali == 0 && frow >= 1)
    {
        printf("%s\n", "undead");
    }
    else
    {
        printf("%s\n", "machine");
    }
    return 0;
}