#include <stdio.h>
int main(void)
{
    float n;

    printf("Please enter a float number:\n");
    scanf("%f",&n);
    printf("The input is %.1f or %.1e\n",n,n);
    printf("The input is +%.3f or %.3e\n",n,n);
    return 0;
}
