#include<stdio.h>
#include<math.h>
int main()
{
	double x0,x1=1.5,mul1,mul2;
	do
	{
		x0=x1;
		mul1=2*pow(x0,3)-4*pow(x0,2)+3*x0-6;
		mul2=6*pow(x0,2)-8*x0+3;
		x1=x0-mul1/mul2;
	}while(fabs(x0-x1)>=1e-5);
	printf("x=%lf\n",x1);
	return 0;
}