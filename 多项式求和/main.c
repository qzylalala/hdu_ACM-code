#include<stdio.h>
int main()
{
    int m,x,i,flag=1,j;
    double sum=0;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&x);
        for(j=1;j<=x;j++)
        {
            sum+=(1.0/j*flag);
            flag=-1*flag;
        }
        printf("%.2lf\n",sum);
        sum=0;
        flag=1;
    }
    return 0;
}
