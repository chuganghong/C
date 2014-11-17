#include <stdio.h>
int main(void)
{
    char name[40];
    float height;

    printf("Please enter your name and height.\n");
    scanf("%s %f",name,&height);
    printf("%s,you are %.3f feet tall.\n",
           name,height);
    return 0;
}
