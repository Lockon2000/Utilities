#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char ch ;
    bool whisp_inc = false ;
    int linecount = 1 ;

    while ( (ch = getchar()) != EOF )
    {
        switch (ch)
        {
            case '\n': ++linecount ;
            case '\t':
            case '\v':
            case ' ' : if (!whisp_inc)
                        {
                            whisp_inc = true ;
                            putchar(' ');
                        }
                        break ;
            default: putchar(ch);
                     whisp_inc = false ;
                     break ;
        }
    }

    return 0 ;
}
