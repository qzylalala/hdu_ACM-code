#include<stdio.h>
int sum1(int L[][200],int m,int n);
int sum2(int L[][200],int m,int n);
int L[10][200];
double ke[10];
int main()
{
    int m,n,i,j,t=0,k=0;
    double score;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                scanf("%d",&L[i][j]);
        for(i=0;i<(n-1);i++)
        {
            score=1.0*sum2(L,i,m)/m;
            printf("%.2lf ",score);
        }
        score=1.0*sum2(L,i,n)/m;
        printf("%.2lf\n",score);
        for(j=0;j<(m-1);j++)
        {
            score=1.0*sum1(L,n,j)/n;
            ke[j]=score;
            printf("%.2lf ",score);
        }
        score=1.0*sum1(L,n,j)/n;
        ke[j]=score;
        printf("%.2lf\n",score);
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(L[i][j]>=ke[j])
                    k++;
            }
            if(k==m) t++;
            k=0;
        }
        printf("%d\n\n",t);
        t=0;
    }
    return 0;
}
int sum1(int L[][200],int m,int n)
{
    int i,sum=0;
    for(i=0;i<m;i++)
    {
        sum=sum+L[i][n];
    }
    return sum;
}
int sum2(int L[][200],int m,int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+L[m][i];
    }
    return sum;
}
