#include <stdio.h>
#define PERIOD '.'

int main(void)
{
    char ch;
    int charcount = 0;
     
    while((ch = getchar()) != PERIOD)
    {
        if (ch != '"' && ch != '\n')
            charcount++;


    }
    printf("There are %d non-quete characters.\n", charcount);

    return 0;

}
