#include <stdio.h>
int main(void)
{
    int age;

    printf("Please enter your age:\n");
    scanf("%d",&age);
    printf("seconds:%u",age * 3.156e7);
    return 0;


}
