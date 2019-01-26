#include<stdio.h>
void two()
{
    printf("\ntwo\n");
}
void one_three()
{
    printf("one\n");
    two();
    printf("\nthree\n");
}
int main()
{
    printf("starting now:\n\n");
    one_three();
    return 0;
}
