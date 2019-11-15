#include<stdio.h>
#include<math.h>
#define mul 2*pow(x,3)-4*pow(x,2)+3*x-6
void erfen(double left,double right)
{
	double x,temp;
	do
	{
		x=(left+right)/2;
		if(mul>0)
		{
			right=x;
		}
		else
		{
			left=x;
		}
	}while(fabs(mul)>1e-8);
	printf("x=%lf\n",x);

}
int main()
{
	double l=-10,r=10;
	erfen(l,r);
	return 0;
}

