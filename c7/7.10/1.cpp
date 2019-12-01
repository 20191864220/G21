#include<stdio.h>

int maxa,sum;
int fun();
int main()
{
	printf("%d\n",fun());
	return 0;
}
int fun()
{
	char a;
	maxa=0;
	sum=0;
	a=getchar();
	while((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a==' '))
	{
		if(a==' ')
		{
			if(sum>maxa)
				maxa=sum;
			sum=0;
		}
		else
			sum++;
		a=getchar();
	}
	return maxa;
}