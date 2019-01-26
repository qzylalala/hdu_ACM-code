#include<stdio.h>

int main()
{
    char name[20];
    char c;
    int i = 0, count = 0, sum = 0;
    for(count = 0;count < 13;count++)
    {
        if((c = getchar()) != '-')
            name[i++] = c;
    }
    for(i = 0;i < 9;i++)
    {
        sum = sum + (i + 1) * (name[i] - '0');
    }
    char right;
    if(sum % 11 == 10) right = 'X';
    else right = (sum % 11) + '0';
    if(name[i] == right) printf("Right\n");
    else{
        printf("%d-%d%d%d-%d%d%d%d%d-",name[0]-'0', name[1]-'0', name[2]-'0', name[3]-'0', name[4]-'0', name[5]-'0', name[6]-'0', name[7]-'0', name[8]-'0');
        if(right == 'X') printf("X\n");
        else printf("%d\n", right - '0');
    }
    return 0;
}
