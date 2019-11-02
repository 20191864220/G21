#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	scanf("%d",&a);
	if(a<10)
	{
		printf("Digit: 1\n");
		printf("%d\n",a);
		printf("%d\n",a);
	}
	else if(a>=10&&a<100)
	{
		printf("Digit: 2\n");
		printf("%d %d\n",a/10,a%10);
		printf("%d%d\n",a%10,a/10);
	}
	else if(a>=100&&a<1000)
	{
		b=a/100;
		c=a/10%10;
		d=a%100%10;
		printf("Digit: 3\n");
		printf("%d %d %d\n",b,c,d);
		printf("%d%d%d\n",d,c,b);
	}
	else if(a>=1000&&a<10000)
	{
		b=a/1000;
		c=a/100%10;
		d=a%1000%100/10;
		e=a%1000%100%10;
		printf("Digit: 4\n");
		printf("%d %d %d %d\n",b,c,d,e);
		printf("%d%d%d%d\n",e,d,c,b);
	}
	else if(a>=10000&&a<100000)
	{
		b=a/10000;
		c=a/1000%10;
		d=a%10000%1000/100;
		e=a%10000%1000%100/10;
		f=a%10000%1000%100%10;
		printf("Digit: 5\n");
		printf("%d %d %d %d %d\n",b,c,d,e,f);
		printf("%d%d%d%d%d\n",f,e,d,c,b);
	}
	else 
	{
		printf("Please enter the correct number.");
	}
	return 0;
}