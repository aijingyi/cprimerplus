#include <stdio.h>

int main(void)
{
    const int secret_code = 13;
    int code_entered;

    do
    {
        printf("To enter ......\n");
        printf("Please enter the secret code number: ");
        scanf("%d", &code_entered);
        

    } while(code_entered != secret_code);
    printf("Coungratulations!......\n");


    return 0;

}
