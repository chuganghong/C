#include <stdio.h>
int main(void)
{
    char a,b,c;

    printf("Enter num a:\n");
    scanf("%c",&a);

    getchar();

    printf("Enter num b:\n");
    scanf("%c",&b);

    printf("Enter num c:\n");
    scanf("%c",&c);

    printf("%c %c %c",a,b,c);
    return 0;
}
