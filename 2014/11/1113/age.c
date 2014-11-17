#include <stdio.h>
int main(void)
{
    int age;
    int sec = 3.156e7;

    printf("How old are you?\n");
    scanf("%d",&age);
    printf("%d",age * sec);

    return 0;

}
