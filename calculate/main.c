#include<stdio.h>
#include<ctype.h>
#define N 100
void shift(int *s,int n)
{
    int i = 0;
    for(i = 0;i < n;i++)
    {
        s[N-n+i] = s[i];
        s[i] = 0;
    }
}
int main()
{
    int a[N],b[N],sum[N+1];
    char c;
    int i = 0;
    for(i = 0;i < N;i++)
    {
        a[i] = 0;
        b[i] = 0;
    }
    i = 0;
    while(isdigit(c = getchar()))
    {
        a[i++] = c - '0';
    }
    int j = 0;
    while(isdigit(c = getchar()))
    {
        b[j++] = c - '0';
    }
    shift(a,i);
    shift(b,j);
    int flag = 0;
    for(i = N-1;i >= 0;i--)
    {
        if(a[i] + b[i] + flag > 9)
        {
            sum[i+1] = a[i] + b[i] + flag - 10;
            flag = 1;
        }
        else
        {
            sum[i+1] = a[i] +b[i] + flag;
            flag = 0;
        }
    }
    if(flag == 1) sum[0] = 1;
    else sum[0] = 0;
    flag = 0;
    for(i = 0;i <= N;i++)
    {
        if(flag == 0)
        {
            if(sum[i] == 0) ;
            else flag = 1;
        }
        if(flag == 1) printf("%d", sum[i]);
    }
    printf("\n");
    return 0;
}
