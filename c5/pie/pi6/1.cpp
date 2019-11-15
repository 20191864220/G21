
#include<stdio.h>
#include<math.h>
#include<time.h>
int main()
{
	
	double m,pi,a,c1,c0,i;
	c0=clock();
	i=1.0;
	a=3.0;
	m=1.0;
	while(i<=1e10)       //  pi=3.1415926479(精度不够)   用时:84.77秒
	{
		m=1/(a*a)+m;
		a=a+2;
		i++;
	}
	pi=sqrt(m*8);
	printf("pi=%.10f\n",pi);
	
	c1=clock();
	printf("time=%f\n",(c1-c0)/1000);
	return 0;
}
