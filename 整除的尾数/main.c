#include<stdio.h>
int L[100];
int main()
{
    int a,b,i,j=0,k;
    while(scanf("%d%d",&a,&b)&&(a||b))
    {
        for(i=0;i<100;i++)
        {
            if((a*100+i)%b==0)
            {
                L[j]=i;
                j++;
            }
        }
        for(k=0;k<j-1;k++)
        {
            if(L[k]<10) printf("0%d ",L[k]);
            else printf("%d ",L[k]);
        }
        if(L[j-1]<10) printf("0%d\n",L[j-1]);
        else printf("%d\n",L[j-1]);
        j=0;
    }
}
