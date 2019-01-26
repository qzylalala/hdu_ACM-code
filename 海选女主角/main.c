#include<stdio.h>
#include<math.h>
int L[100][100];
int main()
{
    int m,n,i,j,x,y,k=0,flag=0,t;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&L[i][j]);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            for(y=0;y<m;y++)
            {
                for(x=0;x<n;x++)
                {
                 if(fabs(L[i][j])>=fabs(L[y][x]))
                    k++;
                }
            }
            t=m*n;
            if(k==t)
            {
                flag=1;
                printf("%d %d %d\n",i+1,j+1,L[i][j]);
                break;
            }
            k=0;
        }
        if(flag==1)
        {
            flag=0;
            break;
        }
    }
    }
    return 0;
}
