#include<stdio.h>
struct ISR_BITS {
    unsigned int bit0: 1;
    unsigned int bit1: 1;
    unsigned int bit2: 1;
    unsigned int bit3: 1;
    unsigned int bit4: 1;
    unsigned int bit5: 1;
    unsigned int bit6: 1;
    unsigned int bit7: 1;
    unsigned int rsv : 8;
};
union ISR_REG {
    unsigned int all;
    struct ISR_BITS bit;
}m;
void isr0(void)
{
    printf("The Interrupt Service Routine isr0 is called!\n");
}
void isr1(void)
{
    printf("The Interrupt Service Routine isr1 is called!\n");
}
void isr2(void)
{
    printf("The Interrupt Service Routine isr2 is called!\n");
}
void isr3(void)
{
    printf("The Interrupt Service Routine isr3 is called!\n");
}
void isr4(void)
{
    printf("The Interrupt Service Routine isr4 is called!\n");
}
void isr5(void)
{
    printf("The Interrupt Service Routine isr5 is called!\n");
}
void isr6(void)
{
    printf("The Interrupt Service Routine isr6 is called!\n");
}
void isr7(void)
{
    printf("The Interrupt Service Routine isr7 is called!\n");
}
int main()
{
    void (*p[8])(void);
    p[0] = isr0;
    p[1] = isr1;
    p[2] = isr2;
    p[3] = isr3;
    p[4] = isr4;
    p[5] = isr5;
    p[6] = isr6;
    p[7] = isr7;
    int N,i;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%ud",&m.all);
        printf("%d:\n",m.all);
        if(m.bit.bit0) p[0]();
        if(m.bit.bit1) p[1]();
        if(m.bit.bit2) p[2]();
        if(m.bit.bit3) p[3]();
        if(m.bit.bit4) p[4]();
        if(m.bit.bit5) p[5]();
        if(m.bit.bit6) p[6]();
        if(m.bit.bit7) p[7]();
        printf("\n");
    }
    return 0;
}
