#include <stdio.h>
void one_three(void);
void two(void);

int main(void)
{
    printf("%s","Starting now:\n");
    one_three();
    two();
    printf("three\n");
    printf("done!");
    return 0;
}

void one_three(void)
{
    printf("one\n");
}

void two(void)
{
    printf("three\n");
}
