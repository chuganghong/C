#include <stdio.h>
#include <string.h>
int main(void)
{
    char first_name[30],family_name[30];
    int len_first;
    int len_family;

    printf("What is your first name?\n");
    scanf("%s",first_name);
    printf("What is your family_name?\n");
    scanf("%s",family_name);
    printf("%3s %3s\n",first_name,family_name);
    len_first = strlen(first_name);
    len_family = strlen(family_name);

    printf("%-3d %-4d\n",len_first,len_family);
    return 0;
}
