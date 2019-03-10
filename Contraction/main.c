#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char c = getchar();
    bool whitespaceEncountered = true;
    int lineCount = 1;

    if (c == EOF) {
        printf("%s\n", "Empty file!!");

        exit(0)
    }
    
    do {
        switch (c)
        {
            case '\n': ++lineCount;
            case '\t':
            case '\v':
            case ' ' : if (!whitespaceEncountered)
                        {
                            whitespaceEncountered = true;
                            putchar(' ');
                        }
                        break;
            default: putchar(c);
                     whitespaceEncountered = false;
                     break;
        }
    } while ((c = getchar()) != EOF)

    printf("\n\nNumber of lines = %d\n", lineCount);

    return 0;
}
