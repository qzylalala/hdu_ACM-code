#include<stdio.h>
int main()
{
    int k,t,i;
    while(scanf("%d",&k)!=EOF)
    {
        if(k%5==0||k%13==0) printf("no\n");
        else
        {
            for(i=1;;i++)
            {
                t=k*i;
                if(t%5==2&&t%13==8)
                    break;
            }
            printf("%d\n",i);
        }
    }
}
