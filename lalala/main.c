#include<stdio.h>
int saye(int b);
int main(void)
{
    int c,d,i=0,m,a,b,q,p;
    scanf("%d",&m);
    for(i=0; i<m; i++)
    {
        scanf("%d%d",&c,&d);
        q=saye(c);
        p=saye(d);
        if(q+p==7||q+p==11)
            printf("success!\n");
        else if(q+p==2||q+p==3||q+p==12)
            printf("fail!\n");
        else
        {
            a=q+p;
            for(b=2;; b++)
            {
                c=c+1;
                d=d+1;
                p=saye(c);
                q=saye(d);
                if(q+p==a)
                {
                    printf("success!\n");
                    break;
                }
                if(q+p==7)
                {
                    printf("fail!\n");
                    break;
                }

            }

        }
    }
    return 0;
}
int saye(int b)
{
    int s=0;
    while(b>0)
    {
        s+=b%10;
        b=b/10;
    }
    s=s%6+1;
    return s;
}
