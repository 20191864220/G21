#include<stdio.h>
#include<math.h>

double a,b,c,d;
double fun(double x);
int main()
{
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	printf("x=%.2lf\n",fun(1));
	return 0;
}
double fun(double x)
{
	double mul,temp,x0=x;
	x=0;
	while(fabs(x-x0)>1e-8)
	{
		x=x0;
		mul=a*pow(x,3)+b*pow(x,2)+c*x+d;
		temp=3.0*a*pow(x,2)+2.0*b*x+c;
		x0=x-mul/temp;
	}
	return x0;
}