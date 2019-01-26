#include<stdio.h>
int main()
{
    char c;
    int L[26],i;
    for(i=0;i<26;i++)
    {
        L[i]=0;
    }
    while((c=getchar())!=EOF)
    {
        if(c>='a'&&c<='z')
        {
            i=c-'a';
            L[i]++;
        }
        if(c=='\n')
        {
            for(c='a';c<='z';c++)
            {
                    printf("%c:%d\n",c,L[c-'a']);
            }
            printf("\n");
            for(i=0;i<26;i++)
            {
                L[i]=0;
            }
        }
    }
    return 0;
}
