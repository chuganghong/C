#include <stdio.h>
int main(void)
{
    int value;

    printf("Please enter a ASCII value:\n");
    scanf("%d",&value);
    printf("You entered %d,ASCII code is %c.\n",value,value);
    return 0;
}
