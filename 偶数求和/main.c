#include<stdio.h>
int L[200];
int sum(int L[],int m);
int main()
{
    int i,k;
    for(i=0;i<100;i++)
    {
        L[i]=2*(i+1);
    }
    int n,m;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        if(n<=m) printf("%d\n",sum(L,n)/n);
        else
        {
            if(n%m==0) k=n/m;
            else k=n/m+1;
        for(i=0;i<k-1;i++)
        {
            printf("%d ",(sum(L,m*(i+1))-sum(L,m*i))/m);
        }
        printf("%d\n",(sum(L,n)-sum(L,m*(k-1)))/(n-m*(k-1)));
    }
    }
    return 0;
}
int sum(int L[],int m)
{
    int i,sum=0;
    for(i=0;i<m;i++)
    {
        sum=sum+L[i];
    }
    return sum;
}
