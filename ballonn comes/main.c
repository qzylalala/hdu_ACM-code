#include<stdio.h>
int main(void)
{
    int x,y;
    char a;
    int i=0,N;
    scanf("%d",&N);
    while(i<N)
    {
            getchar();
            scanf("%c%d%d",&a,&x,&y);
            if(a=='+')
                printf("%d\n",x+y);
            else if(a=='-')
                printf("%d\n",x-y);
            else if(a=='*')
                printf("%d\n",x*y);
            else if(a=='/')
                {
                    if(x%y==0) printf("%d\n",x/y);
                    else printf("%.2lf\n",1.0*x/y);
                }
                i++;
    }
return 0;
    }
