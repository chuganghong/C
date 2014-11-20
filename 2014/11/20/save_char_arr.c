//”–Œ Ã‚
#include <stdio.h>
#include <string.h>
#define SIZE 10
int main(void)
{
    char arr[SIZE];
    int index;

    printf("Enter some leters:\n");

    for(index = 0;index < SIZE;index++)
    {
        printf("%d\n",index);
        scanf("%c",&arr[index]);
    }

    printf("Thoes letters are:\n");

    for(index = 0;index <SIZE;index++)
    {
        printf("%3c----%d\n",arr[index],strlen(arr[index]));
    }

    return 0;
}
