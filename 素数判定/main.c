#include<stdio.h>
int isprime(int m);
int main()
{
    int x,y,i,f;
    while(scanf("%d%d",&x,&y)&&(x||y))
    {
        for (i=x;i<=y;i++)
        {
            f=i*i+i+41;
            if(isprime(f)) ;
            else break;
        }
        if(i==(y+1)) printf("OK\n");
        else printf("Sorry\n");
    }
    return 0;
}
int isprime(int m)
{
    int j;
    if(m==2) return 1;
    for(j=2;j<m;j++)
        if(!(m%j)) return 0;
    return 1;
}
