#include<stdio.h>
int main()
{
    int n,i,a,sum=0;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            sum=sum+a;
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}
