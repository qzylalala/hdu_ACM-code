#include<stdio.h>
int main()
{
    int n,s=0,ch=0;
    char c;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        while((c=getchar())!=EOF)
              {
                  if(c=='\n') break;
                  else if(c>='0'&&c<='9') s++;
                    else ch++;
              }
        printf("%d\n",s);
        s=0;
        ch=0;
    }
    return 0;
}
