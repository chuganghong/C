#include <stdio.h>
int main(void)
{
    const double RENT = 3852.99;

    printf("*%f*\n",RENT);
    printf("*%e*\n",RENT);
    printf("*%4.2f*\n",RENT);
    printf("*%3.1f\n*",RENT);
    printf("*%10.35f*\n",RENT);
    printf("*%10.1e*\n",RENT);
    printf("*%+4.2f*\n",RENT);
    printf("*%09.1f*\n",RENT);

    return 0;
}
