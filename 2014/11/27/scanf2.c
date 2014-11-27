#include <stdio.h>
int main(void)
{
    float i;
    char c;

    printf("Enter a num:\n");
    scanf("%f",&i);
    c = getchar();
    printf("%f\n",i);
    printf("%c\n",c);
    return 0;
}
