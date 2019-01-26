#include<stdio.h>
int pow(unsigned long a,unsigned long b);
int main()
{
    unsigned long a,b;
    while(scanf("%lu%lu",&a,&b)!=EOF)
    {
        a=a%10;
        if(b%4!=0) b=b%4;
        else b=4;
        printf("%d\n",pow(a,b)%10);
    }
    return 0;

}
int pow(unsigned long  a,unsigned long b)
{
    int x=1,i;
    for(i=0;i<b;i++)
    {
        x=x*a;
    }
    return x;
}
