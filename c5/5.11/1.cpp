#include<stdio.h>
int main()
{
	double high=100,sum=0;
	for(int i=1;i<=10;i++)
	{
		sum+=high*2;
		high/=2;
	}
	sum-=100;
	printf("Total distance:%lfm\n",sum);
	printf("The last height:%lfm\n",high);
	return 0;
}