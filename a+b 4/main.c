#include<stdio.h>
int main()
{
    int N,a,i,sum=0;
    while(scanf("%d",&N)&&N)
    {
        for(i=0;i<N;i++)
        {
            scanf("%d",&a);
            sum=sum+a;
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}
