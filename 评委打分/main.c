#include<stdio.h>
int L[100];
int sum(int L[],int n);
void sort(int L[],int n);
int main()
{
    int i,n;
    double x=0;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&L[i]);
        }
        sort(L,n);
        x=sum(L,n)-L[0]-L[n-1];
        printf("%.2lf\n",x/(n-2));
        x=0;
    }
    return 0;
}
int sum(int L[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum+=L[i];
    }
    return sum;
}
void sort(int L[],int n)
{
    int i,j,t;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(L[j]>L[j+1])
            {
                t=L[j];
                L[j]=L[j+1];
                L[j+1]=t;
            }
        }
    }
}
