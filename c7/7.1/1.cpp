#include<stdio.h>
int mul,a,b,c,temp;
void zdgys();
void zxgbs();
int main()
{
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	mul=a*b;
	zdgys();
	zxgbs();
	return 0;
}
void zdgys()
{
	c=a%b;
	while(c)
	{
		a=b;
		b=c;
		c=a%b;
	}
	printf("The greatest common divisor is %d.\n",b);
}
void zxgbs()
{
	mul/=b;
	printf("The minimum common multiple is %d.\n",mul);
}