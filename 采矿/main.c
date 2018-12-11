#include<stdio.h>
double sum(double x[],unsigned long n);
int main()
{
    unsigned long n,i=0;
    double x[1000001],y[1000001];
    while(scanf("%lu",&n)&&n)
    {
    while(i<n)
    {
        scanf("%lf",&x[i]);
        scanf("%lf",&y[i]);
        i++;
    }
    i=0;
    printf("%.2lf %.2lf\n",sum(x,n),sum(y,n));
    }
    return 0;
}
double sum(double x[],unsigned long n)
{
    unsigned long i;
    double sum=0;
    for(i=0;i<n;i++)
    {
        sum=x[i];
    }
    return sum/n;
}
