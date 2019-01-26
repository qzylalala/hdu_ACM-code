#include<stdio.h>
void move(int n,int a,int b,int c)
{
    static i = 1;
    if(n == 1) printf("step %d: %c-->%c\n",i++, a, c);
    else
    {
        move(n-1, a, c, b);
        printf("step %d: %c-->%c\n",i++, a, c);
        move(n-1, b, a, c);
    }
}
int main()
{
    int n, a = 'A', b ='B', c = 'C';
    scanf("%d",&n);
    move(n, a, b, c);
    return 0;
}
