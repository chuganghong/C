#include <stdio.h>
int main(void)
{
    const int MAX = 10;
    int d;

    printf("Please enter a number:\n");
    scanf("%d",&d);
    printf("You have entered a number:%d.\n",d);

    while(d<MAX)
    {
        printf("Enter a number:\n");
        scanf("%d",&d);
        printf("You have entered a number:%d.\n",d);
    }

    printf("%s\n","Done!");

    return 0;
}
