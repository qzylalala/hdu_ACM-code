
# include<stdio.h>

int count(int n)

{

	int cnt=0;



	while(n>1)

	{

		if(n%2==1)

		{

			n=3*n+1;

			cnt++;

		}

		else

		{

			n/=2;

			cnt++;

		}

	}
	if(n==1)
    cnt++;
	return cnt;
}
int main()
{
	int i,j;
	while(scanf("%d%d",&i,&j)!=EOF)
	{
    int a=i<j?i:j;
    int b=i>j?i:j;
    int k=0;
    int max=-1;
    for(k=a;k<=b;k++)
		{
			if(count(k)>max)
			{
				max=count(k);
			}
		}
		printf("%d %d %d\n",i,j,max);
	}
	return 0;
}
