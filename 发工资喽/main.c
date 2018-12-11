#include<stdio.h>
int L[100];
int f(int m);
int main()
{
    int n,i,sum=0;
    while(scanf("%d",&n)&&n)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&L[i]);
            sum=sum+f(L[i]);
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}
int f(int m)
{
    int bai,wushi,shi,wu,er,yi,sum;
    bai=m/100;
    wushi=(m-bai*100)/50;
    shi=(m-100*bai-50*wushi)/10;
    wu=(m%10)/5;
    er=(m-100*bai-50*wushi-10*shi-5*wu)/2;
    yi=(m-wu*5)%2;
    sum=bai+wushi+shi+wu+er+yi;
    return sum;
}
