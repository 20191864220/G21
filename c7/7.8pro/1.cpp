#include<stdio.h>
int i,j,a[10];
int kong(int j,int b[10]);
int main()
{
	printf("输入一个数字:");
	scanf("%d",&i);
	int n=kong(i,a);
	for(int t=n-1;t>=0;t--)
		printf("%d ",a[t]);
	printf("\n");
	return 0;
}

int kong(int j,int b[10])
{
	int temp=0; 
	while(j)
	{
		b[temp++]=j%10;
		j/=10;
	}
	return temp;
}
