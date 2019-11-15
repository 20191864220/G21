#include <stdio.h>

#include<math.h>

#include<time.h>

int main()

{

	double c0,c1;

	c0=clock();

	double pi=0.0,fz=0.0,term=1.0,fm=1.0;

	while(term>=1e-15)        // pi=3.1415926536    用时无限接近于0

	{

		pi=pi+term;

		fz=fz+1;

		fm=fm+2;

		term=term*fz/fm;

	}

	pi=pi*2;

	c1=clock();

	printf("pi=%.10lf\nTime:%lf\n",pi,(c1-c0)/1000);

	return 0;
}