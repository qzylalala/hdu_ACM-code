char board_dis[10] = {' ','X','X','X',' ',' ',' ','O','O','O'};
int board[10] = {0,1,1,1,0,0,0,2,2,2};
#include <stdio.h>
#include "stdlib.h"
#include "time.h"
#include<ctype.h>
#include<conio.h>
#define COM 1//代表'X'
#define MAN 2//代表'O'
#define ZERO 0//代表' '

//判断游戏是否结束,参数为2时,判断人，为1时判断计算机
int isWin(int player)
{
    if (board[1] == player && board[1] == board[5] && board[5] == board[9])
        return(player);
    if (board[3] == player && board[3] == board[5] && board[5] == board[7])
        return(player);
//都没赢返回0
    return ZERO;
}


//玩家回合
void player_move()
{
    printf("\n小帅哥美女~轮到你走一步了,O是你的棋子哟!（行和列之间有个空格，否则错误。例如1 2 2 1代表 (1,2) 移动到 (2,1)\n");
    int row, row_plus;
    int col, col_plus;
    int  index, index_plus;
    scanf("%d %d %d %d", &row, &col, &row_plus, &col_plus);
    index = (row - 1)*3 + col;
    index_plus = (row_plus - 1)*3 + col_plus;
    board[index_plus] = 2;
    board[index] = 0;
}


//Computer 回合
void Computer_move()
{
    int i, j=0, index, next_index, position[3], next_position[4];
    int flag = 0;
    for(i=1; i<10; i++)
    {
        if(board[i] == 1)
        {
            position[j] = i;
            j++;
        }
    }
    while(1)
    {
        index = position[rand()%3];
    if(index == 5)
    {
        i = 0; j = 0;
        next_position[0] = 2;
        next_position[1] = 4;
        next_position[2] = 6;
        next_position[3] = 8;
        while(1)
        {
            i++;
            next_index = next_position[rand()%4];
            if(board[next_index] == 0)
            {
                flag = 1;
                break;
            }
            if (i>100) break;
        }
    }
    if(index == 1 || index == 3 || index == 7 ||index == 9)
    {
        i = 0;j = 0;
        if(index - 1 > 0)
        {
            if(index == 7) ;
            else
            {
                next_position[i] = index - 1;
                i++;
            }
        }
        if(index + 1 <10)
        {
            if(index == 3) ;
            else
            {
                next_position[i] = index + 1;
                i++;
            }
        }
        if(index - 3 > 0)
        {
            next_position[i] = index - 3;
            i++;
        }
        if(index + 3 < 10)
        {
            next_position[i] = index + 3;
            i++;
        }
        while(1)
        {
            j++;
            next_index = next_position[rand()%2];
            if(board[next_index] == 0)
            {
                flag = 1;
                break;
            }
            if (j>100) break;
        }
    }
    if(index == 2 || index == 4 || index == 6 ||index == 8)
    {
        i = 0;j = 0;
        if(index - 1 > 0)
        {
            if(index == 4) ;
            else
            {
                next_position[i] = index - 1;
                i++;
            }
        }
        if(index + 1 <10)
        {
            if(index == 6) ;
            else
            {
                next_position[i] = index + 1;
                i++;
            }
        }
        if(index - 3 > 0)
        {
            next_position[i] = index - 3;
            i++;
        }
        if(index + 3 < 10)
        {
            next_position[i] = index + 3;
            i++;
        }
        while(1)
        {
            j++;
            next_index = next_position[rand()%3];
            if(board[next_index] == 0)
            {
                flag = 1;
                break;
            }
            if (j>100) break;
        }
    }
    if(flag == 1)
    {
        board[next_index] = 1;
        board[index] = 0;
        break;
    }
    }
}

//输出此时的局面
void display()
{
    int i;
    for (i = 1; i < 10; i++)
    {
        if (board[i] == COM)
        {
            board_dis[i] = 'X';
        }
        if (board[i] == MAN)
        {
            board_dis[i] = 'O';
        }
        if (board[i] == ZERO)
        {
            board_dis[i] = ' ';
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("-");
    }
    printf("\n|");
    for (i = 1; i <= 3; i++)
    {
        printf("%c |", board_dis[i]);
    }
    printf("\n");
    for (i = 0; i < 10; i++)
    {
        printf("-");
    }
    printf("\n|");
    for (i = 4; i <= 6; i++)
    {
        printf("%c |", board_dis[i]);
    }
    printf("\n");
    for (i = 0; i < 10; i++)
    {
        printf("-");
    }
    printf("\n|");
    for (i = 7; i <= 9; i++)
    {
        printf("%c |", board_dis[i]);
    }
    printf("\n");
    for (i = 0; i < 10; i++)
    {
        printf("-");
    }
    printf("\n");
}

//主程序
#include<stdio.h>
int main()
{
    char c;
    printf("Welcome to my game!\n");
    display();
    printf("\nPlease input y to play first,or a n to let the computer play first:");
    c = getchar();
    if(c == 'Y'||c == 'y')
    {
        while(1)
        {
            player_move();
            display();
            if(isWin(MAN))
            {
                printf("You WIN!Congratulations!\n");
                break;
            }
            Computer_move();
            display();
            if(isWin(COM))
            {
                printf("The computer WIN! You may try again\n");
                break;
            }
        }
    }
    else
    {
        while(1)
        {
            Computer_move();
            display();
            if(isWin(COM))
            {
                printf("The computer WIN! You may try again\n");
                break;
            }
            player_move();
            display();
            if(isWin(MAN))
            {
                printf("You WIN!Congratulations!\n");
                break;
            }
        }
    }
    return 0;
}
