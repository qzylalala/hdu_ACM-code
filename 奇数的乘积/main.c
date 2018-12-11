#include<stdio.h>
int main()
{
    int n,i,sum=1,x;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&x);
            if(x%2==1) sum=sum*x;
        }
        printf("%d\n",sum);
        sum=1;
    }
    return 0;
}
