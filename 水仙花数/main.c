#include<stdio.h>
int f(int m);
int L[100000];
int main()
{
    int m,n,t,i,j=0,k,ge,shi,bai,sum;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        if(m>n){t=m;m=n;n=t;}
        for(i=m;i<=n;i++)
        {
            bai=i/100;
            shi=(i-bai*100)/10;
            ge=(i-bai*100-shi*10);
            sum=f(ge)+f(shi)+f(bai);
            if(sum==i)
            {
                L[j]=i;
                j++;
            }
        }
        if(j==0) printf("no\n");
        else
        {
            for(k=0;k<j-1;k++)
            {
                printf("%d ",L[k]);
            }
            printf("%d\n",L[j-1]);
        }
        j=0;
}
return 0;
}
int f(int m)
{
    int x;
    x=m*m*m;
    return x;
}
