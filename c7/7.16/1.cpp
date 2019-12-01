#include<stdio.h>

#include<string.h>

#include<math.h>

char a[100];

void zhuanhuan(char b[100]);

int main()

{

	printf("输入十六进制的数:");

	gets(a);

	zhuanhuan(a);

	return 0;

}

void zhuanhuan(char b[100])

{

	int i,sum=0;

	int n=strlen(a);

	for(i=n-1;i>=0;i--)

	{

		if(b[i]>='0'&&b[i]<='9')

			sum=sum+(b[i]-'0')*pow(16,n-1-i);

		else if(b[i]>='A'&&b[i]<='F')

			sum=sum+(b[i]-'A'+10)*pow(16,n-1-i);

	}

	printf("十进制为:%d\n",sum);

	return ;

}

