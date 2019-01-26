#include<stdio.h>
int main()
{
    int a,b,max,min;
    unsigned i;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        max=(a>b)?a:b;
        min=(a>b)?b:a;
        for(i=max;;i=i+max)
        {
            if(i%min==0) break;
        }
        printf("%u\n",i);
    }
    return 0;
}
