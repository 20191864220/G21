#include<stdio.h>
#include<math.h>
#include<time.h>

int main()
{

	float c0,c1;
	c0=clock();
	double m,i, pi,a,b;
	a=2.0;
	i=1.0;
	b=1.0;
	m=2.0;
	while(i<=1e10)     // pi=3.1415926536    ÓÃÊ±148Ãë
	{
		
		b=b+2;
		m=a/b*m;
		a=a+2;
		m=a/b*m;
		i++;
	}
	pi=m*2;
	printf("pi=%.10lf\n",pi);

	c1=clock();
	printf("time=%f\n",(c1-c0)/1000.0);
	return 0;
	
}
