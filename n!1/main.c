#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
 int n,i,j;
    while(scanf("%d",&n)!=EOF)
    {
  int k=0,a;
        if(n==0)
        {
            printf("1\n");
            continue;
        }
        int s[100000];
        memset(s,0,100000);
  s[0]=1;
        for(i=1;i<=n;i++)
  {
   a=0;
   for(j=0;j<=k;j++)
   {
    s[j]=s[j]*i+a;
    a=s[j]/10000;
    s[j]=s[j]%10000;
   }
   if(a)
    s[++k]=a;
  }
  printf("%d",s[k]);
  for(i=k-1;i>=0;i--)
   printf("%04d",s[i]);
        printf("\n");
    }
    return 0;
}
