#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int limits[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &limits[i]);
    }
    int score;
    scanf("%d", &score);
    if (score >= limits[0])
    {
        printf("%c\n", 'A');
    }
    else if (score >= limits[1])
    {
        printf("%c\n", 'B');
    }
    else if (score >= limits[2])
    {
        printf("%c\n", 'C');
    }
    else if (score >= limits[3])
    {
        printf("%c\n", 'D');
    }
    else
    {
        printf("%c\n", 'F');
    }
    return 0;
}