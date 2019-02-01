#include<stdio.h>
#include<string.h>
#include<ctype.h>
//用strlower()函数将字符串变为小写
void strlower(char *a);
int main()
{
    char word[20], *p, *q;
    char passage[1000001];
    int flag = 0;
    gets(word);
    gets(passage);
    strlower(passage);
    strlower(word);
    int len = strlen(word), ans = 0, ans1 = -1;
    p = passage;
    for(; q = strstr(p, word);)
    {
        if(q !=NULL && (q == passage || *(q - 1) == ' ') && (*(q + len) == '\0' || *(q + len) == ' '))
        {
            ans++;
            if(flag == 0)
            {
                flag = 1;
                ans1 = q - passage;
            }
        }
        p = q + len;
    }
    if(flag == 1)
        printf("%d %d\n", ans, ans1);
    else
        printf("%d\n", ans1);
    return 0;
}
void strlower(char *a)
{
    for(int i = 0; a[i]; i++)
    {
        if(isupper(a[i])) a[i] = tolower(a[i]);
    }
}
