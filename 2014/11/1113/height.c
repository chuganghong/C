#include <stdio.h>
int main(void)
{
    float i = 2.54;
    float h;

    printf("What is your height?\n");
    scanf("%f",&h);
    printf("Your height is %f\n",h);
    printf("%f",h * i);

    return 0;
}
