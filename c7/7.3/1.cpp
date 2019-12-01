#include<stdio.h>

#include<math.h>

void prime(int a);

int main()

{

	int n;

	printf("输入一个整数:");

	scanf("%d",&n);

	prime(n);

	return 0;

}

void prime(int a)

{
	int flag=0;

	for(int i=2;i<sqrt(a);i++)

	{

		if(a%i==0)
		{

			flag=1;

			break;

		}

	}

		if(flag==1)
	
			printf("不是素数\n");

		else

			printf("是素数\n");

	return ;

}