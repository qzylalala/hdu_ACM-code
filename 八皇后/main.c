#include<stdio.h>
#include<math.h>
#define MAX 8//可以扩展至n皇后
int queen[MAX];
int sum = 0;
//打印出现在的八皇后位置
void show()
{
    int i;
    for(i=0;i<MAX;i++)
    {
        printf("(%d,%d)",i,queen[i]);
    }
    printf("\n");
    sum++;
}


int check(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(queen[i]==queen[n]||fabs(queen[n]-queen[i])==(n-i))
            return 0;
    }
    return 1;
}


void put_position(int n)
{
    int i;
    for(i=0;i<MAX;i++)
    {
        queen[n] = i;
        if(check(n))
        {
            if(n == MAX - 1)
                show();
            else
                put_position(n+1);
        }
    }
}


int main()
{
    put_position(0);
    printf("%d", sum);
    return 0;
}

