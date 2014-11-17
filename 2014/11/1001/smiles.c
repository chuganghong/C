#include <stdio.h>
void smile(void);
int main(void)
{
    const int NUMBER_THREE = 3;
    const int NUMBER_TWO = 2;
    const int NUMBER_ONE = 1;
    int i;
    int j;
    int k;


    for(i=1;i<=NUMBER_THREE;i++)
    {
        smile();
    }

    printf("\n");

    for(j=1;j<=NUMBER_TWO;j++)
    {
        smile();
    }

    printf("\n");

    for(k=1;k<=NUMBER_ONE;k++)
    {
        smile();
    }

    return 0;
}

void smile(void)
{
    printf("%s","Smile!");
}
