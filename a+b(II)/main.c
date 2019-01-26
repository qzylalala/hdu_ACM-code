#include<stdio.h>
int main()
{
    __int64 L[1000],M[1000],sum[1000];
    int i=0,N;
    scanf("%d",&N);
    while(i<N)
    {
        scanf("%I64d%I64d",&L[i],&M[i]);
        sum[i]=L[i]+M[i];
        i++;
    }
    for(i=0;i<N;i++)
    {
        printf("Case %d:\n",i+1);
        printf("%I64d + %I64d = %I64d\n\n",L[i],M[i],sum[i]);
    }
    return 0;
}
