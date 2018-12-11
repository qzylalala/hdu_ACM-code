#include<stdio.h>
unsigned long ji(unsigned long m,unsigned long n);
unsigned long ou(unsigned long m,unsigned long n);
int main()
{
    unsigned long m,n,t,x,y;
    while(scanf("%lu%lu",&m,&n)!=EOF)
    {
        if(m>n) {t=m;m=n;n=t;}
        x=ou(m,n);
        y=ji(m,n);
        printf("%lu %lu\n",x,y);
    }
    return 0;
}
unsigned long ji(unsigned long m,unsigned long n)
{
    unsigned long i,sum=0;
    if((m%2)==0)
        m=m+1;
    for(i=m;i<=n;i+=2)
    {
        sum+=i*i*i;
    }
    return sum;
}
unsigned long ou(unsigned long m,unsigned long n)
{
    unsigned long i,sum=0;
    if((m%2)==1)
        m=m+1;
        for(i=m;i<=n;i+=2)
    {
        sum+=i*i;
    }
    return sum;
}
