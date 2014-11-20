#include <stdio.h>
#define SIZE 26
int main(void)
{
    char arr[SIZE];
    int index;

    for(index=0;index < SIZE;index++)
    {
        arr[index] = 'A' + index;
    }

    for(index=0;index < SIZE;index++)
    {
        printf("%-3c",arr[index]);
    }

    return 0;
}
