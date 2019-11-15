#include<stdio.h>
int main()
{
	int n;
	double a[1001],b[1001];
	printf("Please enter the length of progression(length<=1000):");
	scanf("%d",&n);
	printf("Please enter the progression.\n");
	for(int i=1;i<=n;i++)
	{
		scanf("%lf",&a[i]);
		b[n-i+1]=a[i];
	}
	for(int j=1;j<n;j++)
	{
		a[j]=b[j];
		printf("%.2lf ",a[j]);
	}
	a[n]=b[n];
	printf("%.2lf\n",a[n]);
	return 0;
}