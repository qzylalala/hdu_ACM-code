#include<stdio.h>
int whetherleap(int Y){
	if ((Y%4==0 && Y%100!=0) || (Y%400==0))
	return 1;
	return -1;
}
int main()
{
    int n,Y,N,k=0,j;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        k=0;
    scanf("%d%d",&Y,&N);
    for(j=Y;k<N;j++)
    {
    if(whetherleap(j)==1)
    {
        k++;
    }
    }
    printf("%d\n",j-1);
    }
    return 0;
}
