/* two_fun.c a file contains two functions.*/
#include <stdio.h>

void butler(void);

int main(void)
{
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes, Bring me some tea and writerable DVDs.\n");

    return 0;

}


void butler(void)
{
    printf("Your rang, sir?\n");
}
