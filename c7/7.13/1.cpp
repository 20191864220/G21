#include<stdio.h>

double dp(double x,double n);
int main()
{
	int x,n;
	scanf("%d%d",&x,&n);
	double ans=dp(x,n);
	printf("ans=%lf\n",ans);
	return 0;
}
double dp(double x,double n)
{
	if(n==0)
		return 1;
	else if(n==1)
		return x;
	else
		return (2*n-1)*x-dp(x,n-1)-(n-1)*dp(x,n-2)/n;
}
