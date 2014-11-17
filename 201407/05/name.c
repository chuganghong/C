#include <stdio.h>
int main(void)
{
    char first_name[40];
    char family_name[40];

    printf("What is your first name?\n");
    scanf("%s",first_name);
    printf("Well,%s,what is your family name?\n",
           first_name);
    scanf("%s",family_name);
    printf("%s,%s",first_name,family_name);
    return 0;
}
