#include<stdio.h>
#include<math.h>
#include<time.h>
int main()
{
	int c1,c2;
	c1=clock();
	double term=2,pi=1,temp=0;
	int i=1;
	while(i<=19)        // pi=3.1415926536    用时无限接近于0
	{
		pi*=term;
		temp=sqrt(temp+2);
		term=2/temp;
		i++;
	}
	printf("pi=%.10lf\n",pi);
	c2=clock();
	printf("Time:%lf\n",(c2-c1)/1000.0);
	return 0;
}
