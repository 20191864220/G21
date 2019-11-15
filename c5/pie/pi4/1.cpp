#include<stdio.h>
#include<math.h>
#include<time.h>
int main()
{
	int c1,c2;
	c1=clock();
	int sign=1;
	double pi=0.0,n=1.0,term=1.0;
	while(fabs(term)>=1e-6)       // pi=3.1415906536(精度不够)   用时0.031秒
	{
		pi=pi+term;
		n=n+2;
		sign=-sign;
		term=sign/n;
	}
	c2=clock();
	printf("pi=%.10lf\n",pi*4);
	printf("Time:%lf\n",(c2-c1)/1000.0);
	return 0;
}