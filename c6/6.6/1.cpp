#include<stdio.h>
int main()
{
	int a[11][11],i,j,temp;
	for(i=0;i<=10;i++)
		for(j=0;j<=10;j++)
			a[i][j]=0;
	for(i=0;i<=10;i++)
		a[i][1]=1;
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=i;j++)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}