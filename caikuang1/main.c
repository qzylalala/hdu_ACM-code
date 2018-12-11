#include<stdio.h>
#include<algorithm>
using namespace std;
double a[1000001],b[1000001];
int k;
int main()
{
    while(scanf("%d",&k)&&k)
        {
            for(int i=0;i<k;i++)
            		scanf("%lf%lf",&a[i],&b[i]);
                    sort(a,a+k);
                    sort(b,b+k);
                    printf("%.2lf %.2lf\n",a[k/2],b[k/2]);
        }
        return 0;
}
