#include <stdio.h>
#include<math.h>
int main()
{

	double sum1=0,sum2=0,sum3=0;
	int    k=1;

	for(k=1;k<=100;k++)
	{	sum1=sum1+k;
	
	}
	for(k=1;k<=50;k++)
	{
		sum2=sum2+pow(k,2);
	
	}
	for(k=1;k<=10;k++)
	{
		sum3=sum3+1.0/k;
	
	}
	printf("sum1=%lf\nsum2=%lf\nsum3=%lf\n",sum1,sum2,sum3);
	printf("sum1+sum2+sum3=%lf",sum1+sum2+sum3);
	return 0;
}
