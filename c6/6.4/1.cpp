#include<stdio.h>

double a[1001],b;
int n;

void jiangxu();

void shengxu();

int main()
{
	printf("Please enter the length of progression(length<=1000):");
	scanf("%d",&n);
	printf("Please enter the progression.\n");
	for(int i=1;i<=n;i++)
		scanf("%lf",&a[i]);
	printf("Please enter a number.\n");
	scanf("%lf",&b);
	if(a[1]>a[n])
		jiangxu();
	else if(a[1]<a[n])
		shengxu();
	else 
	{
		a[n+1]=b;
	}
	for(int j=1;j<=n;j++)
		printf("%.2lf ",a[j]);
	printf("%.2lf\n",a[n+1]);
	return 0;
}

void jiangxu()
{
	int flag;
	for(int i=1;i<n;i++)
	{
		if(a[i]>=b&&a[i+1]<=b)
		{
			flag=i+1;
			break;              //     flag=4   6 5 4
		}
	}
	for(int j=n+1;j>flag;j--)
		a[j]=a[j-1];
	a[flag]=b;
	return;
}

void shengxu()
{
	int flag;
	for(int i=1;i<n;i++)
	{
		if(a[i]<=b&&a[i+1]>=b)
		{
			flag=i+1;
			break;              // 1 2 3   3    4  5     flag=4
		}
	}
	for(int j=n+1;j>flag;j--)
		a[j]=a[j-1];
	a[flag]=b;
	return;
}