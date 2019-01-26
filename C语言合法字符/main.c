#include<stdio.h>
int main()
{
    int N,flag=0;
    char c;
    scanf("%d",&N);
    getchar();
    while(N--)
    {
        flag=0;
        c=getchar();
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c=='_'))
        {
            flag=1;
        }
        else
        {
            printf("no\n");
            while((c= getchar()) != '\n' && c != EOF)
                ;
            continue;
        }
        while((c=getchar())!='\n')
        {
            if((c=='_')||(c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9'))
                flag=1;
            else
            {
                printf("no\n");
                flag=0;
                break;
            }
        }
        if(flag==1) printf("yes\n");
    }
    return 0;
}
