#include<stdio.h>
int main()
{
    int N,i,j,n,a,sum=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a);
            sum=sum+a;
        }
        printf("%d\n\n",sum);
        sum=0;
    }
    return 0;
}
