#include <stdio.h>
int main(void)
{
    double i = 3.0e-23;
    int j = 950;
    int n;
    printf("The number of water:\n");
    scanf("%d",&n);
    printf("%d\n",j*n/i);
    printf("%u",i);

    return 0;
}
