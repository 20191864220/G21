#include<stdio.h>
int main()
{
	int n,i,j,t;
	scanf("%d",&n);
	for(i=1;i<=(n+1)/2;i++)
	{
		for(j=1;j<=(n+1)/2-i;j++)
			printf(" ");
		for(t=1;t<=2*i-1;t++)
			printf("*");
		printf("\n");
	}
	for(i=n/2;i>=1;i--)
	{
		for(j=(n+1)/2-i;j>=1;j--)
			printf(" ");
		for(t=2*i-1;t>=1;t--)
			printf("*");
		printf("\n");
	}
	return 0;
}