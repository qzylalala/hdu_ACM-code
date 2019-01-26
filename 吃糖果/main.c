#include <stdio.h>
int a[1000000];
int main()
{
    int i,n,sum,max,t;
    scanf("%d",&t);
    while(t--)
        {
            sum=max=0;
            scanf("%d",&n);
            for(i=0; i<n; i++)
            {
                scanf("%d",&a[i]);
                if(max<a[i])
                    max=a[i];
            }
            for(i=0;i<n;i++)
            {
                if(a[i]!=max)
                   sum+=a[i];
                if(sum>=max-1)
                    break;
            }
            if(i==n) printf("No\n");
            			else printf("Yes\n");
        }
        return 0;
}
