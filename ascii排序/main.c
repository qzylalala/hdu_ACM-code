#include <stdio.h>
int main()
{
       char a,b,c,d,x,y,z;
       while(scanf("%c%c%c%c",&a,&b,&c,&d) != EOF)             //用d接收回车字符
       {
         x=a<b?a:b;    
         x=x<c?x:c;
         z=a>b?a:b;
         z=z>c?z:c;
         y=a+b+c-x-z;
         printf("%c %c %c\n",x,y,z);
       }
        return 0;
}
