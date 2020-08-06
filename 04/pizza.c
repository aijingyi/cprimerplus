#include <stdio.h>

#define PI 3.14159

int main(void)
{
    float area, cirecum, radius;
    
    printf("What is the radius of your pizza?\n");
    scanf("%f", &radius);

    area = PI * radius;
    cirecum = 2.0 * PI * radius;
    printf("Your basic pizza parameters are as follows:\n");
    printf("cirecumference = %1.2f, area = %1.2f\n", cirecum,area);

    return 0;

}

