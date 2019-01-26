#include <stdio.h>
#include "stdlib.h"
#include "time.h"
#include<ctype.h>
#include<conio.h>
#define MAN 1
#define COM -1
#define MAN_WIN 100
#define COM_WIN -100
#define DRAW 0 //ƽ��
#define NONE 0
#define POSITION 9
#define STEP 9
#define random(x) (rand()%(x)) //���������
char board_dis[10]={' ','X','X','X',' ',' ',' ','O','O','O'};
int board[10];//���� ��ʼĬ��ֵΪ0
int win_place_sum;
int angle[4] = { 1,3,7,9 };
int edge[4] = { 2,4,6,8 };

//�Ƿ�Ӯ��
int isWin(int player)
{
    if (board[1] == player && board[1] == board[5] && board[5] == board[9])
        return(player);
    if (board[3] == player && board[3] == board[5] && board[5] == board[7])
        return(player);
//û��Ӯ����0
    return NONE;
}
//��4������
int isAngle(int position)
{
    if (position == 1 || position == 3 || position == 7 || position == 9)
        return position;
    return 0;
}
//�ڱ�Ե�ǽ���
int isEdge(int position)
{
    if (position == 2 || position == 4 || position == 6 || position == 8)
        return position;
    return 0;
}

//���ӳ��ߣ�����һ������Ҫ�µ�λ��
//���Բ���ĺ���
int checkWinning(int player)
{
    int i;
    int win_place = 10;
    win_place_sum = 0;
    for (i = 1; i < 10; i++)
    {
        if (board[i] == NONE)
        {
            board[i] = player; //�ȼ���ô����ӽ����ж�
            if (isWin(player) == player)
            {
                board[i] = 0;
                win_place = i;
                win_place_sum++;
            }
            board[i] = 0;
        }
    }
    return win_place;//���������λ��
}


//���Ը��ǽ�������
int com_play(int step, int lastPosition)
{
    int i;

//�����
    int ranNumber;


//�������������
    srand((unsigned int)time(NULL));
//��һ�������ߵ�λ��
    int lastComPosition = 0;
//��Ӯ�ĵط�
    int win_place = 10;
    int max_win_times = 0;
//�����һ������ô������ռ��
    if ( ( step == 1 ) && (lastPosition == 0 ))
    {
        ranNumber = random(4);
        board[angle[ranNumber]] = COM;
        return angle[ranNumber];
    }
    else if (step == 3)
    {
//�ڶ�������߽�
        if (isAngle(lastPosition) > 0)
        {
            for (i = 0; i < 4; i++)
            {
                if (board[angle[i]] == COM)
                {
                    lastComPosition = angle[i];
// printf("��һ�������ߵ���%d", lastComPosition);
                    break;
                }
            }
//����ߵ��ǿ����ߵĽ�,��ռ�Խ�
            if ((lastPosition + lastComPosition) != 10)
            {
                if (board[10 - lastComPosition] == NONE)
                {
                    board[10 - lastComPosition] = COM;
                    return 10 - lastComPosition;
                }
                else
                {
                    printf("\n�����ˡ���1");
                    return 0;
                }
            }
//����ߵ��ǶԽ�,��ô��ռ�����Ľ�
            else
            {
                while (1)
                {
                    ranNumber = random(4);
                    if (board[angle[ranNumber]] == NONE)
                    {
                        board[angle[ranNumber]] = COM;
                        return angle[ranNumber];
                    }
                }
            }
        }
//�ڶ�������ߵ��Ǳ�
        else if( isEdge(lastPosition) > 0 )
        {
            if(board[5] == NONE)
            {
                board[5] = COM;
                return 5;
            }
            else
            {
                printf("\n�м�5��ռ���� ...");
                return 0;
            }
        }
//����ߵ������м� ����ô�����߶Խ�
        else if(lastPosition == 5 )
        {
            for (i = 0; i < 4; i++)
            {
                if (board[angle[i]] == COM)
                {
                    lastComPosition = angle[i];
// printf("��һ�������ߵ���%d", lastComPosition);
                    break;
                }
            }
            if (board[10 - lastComPosition] == NONE)
            {
                board[10 - lastComPosition] = COM;
                return 10 - lastComPosition;
            }
            else
            {
                printf("\n�����ˡ���2");
                return 0;
            }
        }

    }
    else if (step == 5)
    {
        win_place = checkWinning(COM);//�������ӳ���
        if (win_place < 10)
        {
            board[win_place] = COM;
            return win_place;
        }


        win_place = checkWinning(MAN); //��ҵ������ӳ���
        if (win_place < 10)
        {
            board[win_place] = COM;
            return win_place;
        }
//���û����Ӯ�ĵط�,��ռ��
        else
        {
            for (i = 0; i < 4; i++)
            {
                if (board[angle[i]] == NONE)
                {
                    board[angle[i]] = COM;

                    if (checkWinning(COM) < 10 && max_win_times < win_place_sum)
                    {
                        max_win_times = win_place_sum; //��Ӯ�Ĵ���
                        win_place = angle[i];
                    }


                    board[angle[i]] = NONE;
                }
            }
            board[win_place] = COM;
        }
    }
    else if(step == 2 )
    {
        if (board[5] == NONE)
        {
            board[5] = COM;
            return 5;
        }
        else
            while (1)
            {
                ranNumber = random(4);
                if (board[angle[ranNumber]] == NONE )
                {
                    board[angle[ranNumber]] = COM;
                    return angle[ranNumber];
                }
            }
    }
    else
    {
        win_place = checkWinning(COM);//�������ӳ���
        if (win_place < 10)
        {
            board[win_place] = COM;
            return win_place;
        }
        win_place = checkWinning(MAN); //��ҵ������ӳ���
        if (win_place < 10)
        {
            board[win_place] = COM;
            return win_place;
        }
        for (i = 1; i <= 9; i++)
        {
            if (board[i] == NONE)
            {
                board[i] = COM;
                printf("\n���һ������");
                return i;
            }
        }
    }
    printf("COM-error");
    return 10;
}
//��ҽ�������
int person_play()
{
    int row;
    int col;
    int index;
    do
    {
        printf("\nС˧����Ů~�ֵ�����һ����!���к���֮���и��ո񣬷������");
        scanf("%d", &row);
        scanf("%d", &col);
        index = (row - 1) * 3 + col;
        if (board[index] == NONE)
        {
            board[index] = MAN;
            return index;
        }
        printf("\n������±겻�Ϸ� ��Խ����ߴ˴��Ѿ������Ӵ��� !!!! �����������±� ����");
    }
    while (1);
    printf("\nMAN-error");
    return 10;
}
//������
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
void main()
{
    char c;
    int i;
    int step = 1;
    int lastPosition = 0;
    for (i = 0; i<30; i++)
        printf("*");
    printf("\n*hello,welcome to this game!!*\n");
    for (i = 0; i<30; i++)
        printf("*");
    display();
    printf("\nDo you want to play first? y -������  , n-��������");
    for (c = getche(); c != 'Y'&&c != 'y'&&c != 'N'&&c != 'n'; c = getche());
    if (c == 'Y' || c == 'y')
    {
        for (step = 1; step <= STEP; )
        {
            lastPosition = person_play();
            display();
            if (MAN == isWin(MAN))
            {
                printf("��ϲ�� �� ����ʤ�� ");
                break;
            }
            step++;
            if (step == 10)
            {
                break;
            }
            lastPosition = com_play(step,lastPosition);
            display();
            if (COM == isWin(COM))
            {
                printf("���ź� �����Ի�ʤ�� ");
                break;
            }
            step++;
        }
        if (isWin(COM) == NONE && isWin(MAN) == NONE && step == 10)
        {
            printf("ƽ��");
        }
    }
    else if (c == 'N' || c == 'n')
    {
        for (step = 1; step <= STEP; )
        {
            lastPosition = com_play(step, lastPosition);
            if (COM == isWin(COM))
            {
                printf("���ź� �����Ի�ʤ�� ");
                break;
            }
            step++;
            if (step == 10)
            {
                break;
            }
            lastPosition = person_play();
            if (MAN == isWin(MAN))
            {
                printf("��ϲ�� �� ����ʤ�� ");
                break;
            }
            step++;
        }
        if (isWin(COM) == NONE && isWin(MAN) == NONE && step == 10)
        {
            printf("ƽ��");
        }
    }
    getch();
}
