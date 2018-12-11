#include<stdio.h>
#include<math.h>
int main()
{
    int m,i;
    double sum=0,n;
    while(scanf("%lf%d",&n,&m)!=EOF)
    {
        sum=n;
        for(i=1;i<m;i++)
        {
            n=sqrt(n);
            sum+=n;
        }
        printf("%.2lf\n",sum);
    }
    return 0;
}
