#include<stdio.h>
int main()
{
    unsigned n,sum;
    while(scanf("%u",&n)!=EOF)
    {
        if(n%2==0) sum=n/2*(n+1);
        else sum=(n+1)/2*n;
        printf("%u\n\n",sum);
    }
    return 0;

}
