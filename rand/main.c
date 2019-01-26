#include <stdio.h>
#include "stdlib.h"
#include "time.h"
#include<ctype.h>
#include<conio.h>
int main()
{
    int i;
    for(i=0;i<100;i++)
    {
        printf("%d ",rand()%5);
        if(i%10==0) printf("\n");
    }
    return 0;
}
