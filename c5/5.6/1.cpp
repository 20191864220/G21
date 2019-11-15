#include<stdio.h>
int main()
{
	_int64 sum,i,n,j;
	sum=0;
	for(n=1;n<=20;n++)       //运行结果:2561327494111820313
	{
		j=1;
		for(i=1;i<=n;i++)
		{
			j=i*j;
		}
		sum=sum+j;
	}
	printf("%I64d\n",sum);
	return 0;
}