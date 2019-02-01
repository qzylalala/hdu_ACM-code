#include<stdio.h>
int translate(char *);

int main()
{
    char star[7];
    char team[7];
    scanf("%s", star);
    scanf("%s", team);
    int starnum, teamnum;
    starnum = translate(star);
    teamnum = translate(team);
    if(starnum == teamnum)
        printf("GO\n");
    else
        printf("STAY\n");
    return 0;
}

int translate(char *p)
{
    long sum = 1;
    for(int i = 0;*(p + i);i++)
    {
        sum *= (*(p + i) - 'A' + 1);
    }
    return sum%47;
}
