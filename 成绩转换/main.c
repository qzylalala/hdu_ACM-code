#include <stdio.h>
int main()
{
    int x;
    while(scanf("%d",&x)!=EOF)
    {
        if(x<0||x>100) printf("Score is error!\n");
        else if(x>=90&&x<=100) printf("A\n");
        else if(x>=80) printf("B\n");
        else if(x>=70) printf("C\n");
        else if(x>=60) printf("D\n");
        else printf("E\n");
    }
    return 0;
}
