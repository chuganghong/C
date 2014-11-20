#include <stdio.h>
int main(void)
{
    const int SIZE = 5;
    int index;
    int numbers[SIZE];

    printf("Please enter some numbers:\n");

    for(index = 0;index < SIZE; index++)
    {
        scanf("%d",&numbers[index]);
    }

    printf("\n");
    printf("The numbers is:\n");

    for(index = 0;index <SIZE;index++)
    {
        printf("%5d",numbers[index]);
    }

    return 0;

}
