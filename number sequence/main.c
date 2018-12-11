#include<stdio.h>
int f(int A,int B,int n);
int main()
{
    int A,B,n;
    while(scanf("%d%d%d",&A,&B,&n)!=EOF)
    {
        if(A==0&&B==0&&n==0)
            break;
        else
            printf("%d\n",f(A,B,n));
    }
    return 0;
}
int f(int A,int B,int n)
{
    n=n%49;
    if(n==1||n==2)
        return 1;
    else
        return (A*f(A,B,n-1)+B*f(A,B,n-2))%7;
}
