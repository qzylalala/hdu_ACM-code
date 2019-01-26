#include<stdio.h>
int power(int n);
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        printf("%d\n",3*power(n-1)-2);
    }
    return 0;
}
int power(int n)
{
    int i,sum=1;
    for(i=0;i<n;i++)
    {
        sum=sum*2;
    }
    return sum;
}
