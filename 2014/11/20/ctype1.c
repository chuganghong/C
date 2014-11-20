#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;

    printf("Enter a character:\n");
    ch = getchar();

    printf("%c\n",ch);
    putchar(ch);

    return 0;
}
