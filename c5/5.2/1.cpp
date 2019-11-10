#include<stdio.h>
#include<math.h>
int main()
{
 long i=0;
	int sign=1;
	double pi=0.0,n=1,term=1.0;
	while(fabs(term)>=1e-8)//    1e-6 运行次数:500000    1e-8 运行次数:50000000
	{

		pi=pi+term;
		n=n+2;
		sign=-sign;
		term=sign/n;
		i++;
	}
	pi=pi*4;
	printf("pi=%10.8f\n",pi);
	printf("运算次数:%d\n", i); 
	return 0;
}