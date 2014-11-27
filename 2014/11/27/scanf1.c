#include <stdio.h>
int main(void)
{
    char a;
    char b;
    int i,j;

    printf("Enter:\n");

    i = scanf("%c",&a);
    getchar();
    j = scanf("%c",&b);
    printf("%c",a);
    printf("%c",b);

    printf("i = %d, j = %d\n",i,j);

    return 0;
}
