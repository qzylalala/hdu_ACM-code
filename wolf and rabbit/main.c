#include<stdio.h>
int gcd(int m,int n);
int main()
{
    int N,m,n,i=0;
    scanf("%d",&N);
    while(i<N)
    {
        scanf("%d%d",&m,&n);
        if(gcd(m,n)==1) printf("NO\n");
        else printf("YES\n");
        i++;
    }
    return 0;
}
int  gcd(int n,int m)
{
    int t;
    if(n<m)
    {
        t=n;
        n=m;
        m=t;
    }
    if(m==0)
    {
        return n;
    }
    else return gcd(m,n%m);
}
