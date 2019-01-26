#include<stdio.h>
unsigned long f(int x);
int main()
{
    unsigned long t,i,j,k,max=0;
    while(scanf("%lu%lu",&i,&j)!=EOF)
    {
        if(i>j) {t=i;i=j;j=t;}
        for(k=i;k<=j;k++)
        {
            if(f(k)>max) max=f(k);
        }
        printf("%lu %lu %lu\n",i,j,max);
    }
    return 0;
}
unsigned long f(int x)
{
    int i;
    for(i=1;;i++)
    {
        if(x==1)  break;
        else if(x%2!=0) x=3*x+1;
        else x=x/2;
    }
    return i;
}
