#include<stdio.h>
#include<math.h>
int main()
{
	double a,x1=1,x0=0;
	scanf("%lf",&a);
	while(fabs(x1-x0)>=1e-5)
	{
		x0=x1;
		x1=(x0+a/x0)/2.0;
	}
	printf("x=%lf\n",x1);
	return 0;
}
