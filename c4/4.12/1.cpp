#include<stdio.h>
#include<math.h>

int main()
{
	double x,y;
	int high;
	scanf("%lf%lf",&x,&y);
	if((pow(x-2,2)+pow(y-2,2)<=1)||(pow(x+2,2)+pow(y-2,2)<=1)||(pow(x-2,2)+pow(y+2,2)<=1)||(pow(x+2,2)+pow(y+2,2)<=1))
		high=10;
	else 
		high=0;
	printf("High : %d cm\n",high);
	return 0;
}