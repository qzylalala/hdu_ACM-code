#include<stdio.h>
long long L[50];
int main()
{
    int n,i;
    for(i=0;i<50;i++)
    {
        if(i==0) L[i]=3;
        else if(i==1||i==2) L[i]=6;
        else
        {
            L[i]=L[i-1]+2*L[i-2];
        }
    }
    while(scanf("%d",&n)!=EOF)
    {
        printf("%lld\n",L[n-1]);
    }
    return 0;
}

