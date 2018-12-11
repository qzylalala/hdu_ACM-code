#include<stdio.h>
int main()
{
    int n,i,time;
    while(scanf("%d",&n)&&n)
    {
        int L[n];
        time=0;
        scanf("%d",&L[0]);
        time=6*L[0]+5;
        for(i=1;i<n;i++)
        {
            scanf("%d",&L[i]);
            if(L[i]>L[i-1]) time=time+6*(L[i]-L[i-1])+5;
            else time=time+4*(L[i-1]-L[i])+5;
        }
        printf("%d\n",time);
    }
    return 0;
}
