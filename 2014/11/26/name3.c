#include <stdio.h>
#define MAX 5
int main(void)
{
    char name[MAX];
    char *ptr;

    printf("Hi,what's your name?\n");
    ptr = fgets(name,MAX,stdin);
    printf("%s?Ah! %s!\n",name,ptr);

    return 0;
}
