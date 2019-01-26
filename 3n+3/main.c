#include<stdio.h>
int f(int x);
int main()
{
    int t,x,i,j,k,max=0;
    while(scanf("%d%d",&i,&j)!=EOF)
    {
        if(i>j) {t=i;x=j;}
        else {t=j;x=i;}
        for(k=x;k<=t;k++)
        {
            if(f(k)>max) max=f(k);
        }
        printf("%d %d %d\n",i,j,max);
        max=0;
    }
    return 0;
}
int f(int x)
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
