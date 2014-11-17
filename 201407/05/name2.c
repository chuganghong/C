#include <stdio.h>
int main(void)
{
    char name[40];
    int l;

    printf("Please enter your name:\n");
    scanf("%s",name);
    l = strlen (name);
    printf("Your name is \"%%ds\".\n",l,name);
    return 0;
}
