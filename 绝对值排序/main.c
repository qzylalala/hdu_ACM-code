#include<stdio.h>
#include<math.h>
int L[100];
int main()
{
    int n,i,j,x;
    while(scanf("%d",&n)&&n)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&L[i]);
        }
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-1-i;j++)
            {
                if(fabs(L[j])<fabs(L[j+1]))
                {
                    x=L[j];
                    L[j]=L[j+1];
                    L[j+1]=x;
                }
            }
        }
        for(i=0;i<(n-1);i++)
        {
            printf("%d ",L[i]);
        }
        printf("%d\n",L[i]);
    }
    return 0;

}
