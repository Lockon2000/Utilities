#include <stdio.h>
#include <string.h>

int main(int argc , char * argv[])
{
    const char * cflags = "--cflags" , * lflags = "--lflags" ;
    int c = 0 , l = 0 ;

    for (int i = 0 ; i < argc ; ++i)
    {
        if (strcmp(cflags , argv[i]) == 0)
            c = 1 ;
        if (strcmp(lflags , argv[i]) == 0)
            l = 1 ;
    }

    if (c == 1)
        printf("-Wall -Wextra -std=gnu11 -I\"C:\\Users\\Mohamed\\SkyDrive\\Arbeit\\OS Applications\\Library\"");

    return 0;
}
