#include<stdio.h>

int main()
{
	int mul,a,b,c,temp;
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	mul=a*b;
	c=a%b;
	while(c)
	{
		a=b;
		b=c;
		c=a%b;
	}
	printf("The greatest common divisor is %d.\n",b);
	printf("The minimum common multiple is %d.\n",mul/b);
	return 0;
}
