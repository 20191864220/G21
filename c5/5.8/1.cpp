#include<stdio.h>
#include<math.h>
#include<time.h>
int main()
{
	int c1,c2;
	long left,right,temp,sum,a[10];
	int n;
	scanf("%d",&n);         //输入想求n位自幂数
	c1=clock();
	a[0]=0;
	for(int j=1;j<=9;j++)
	{
		a[j]=pow(j,n);
	}
	if(n==2||n<=0||n>10)
		printf("Please enter the right number.\n");
	else
	{
		left=pow(10,n-1);
		right=pow(10,n);
		for(int i=left;i<right;i++)
		{
			temp=i;
			sum=0;
			while(temp)
			{
				sum+=a[temp%10];
				temp/=10;
			}
			if(sum==i)
				printf("%d\n",i);
		}
	}
	c2=clock();
	printf("Time:%lf\n",(c2-c1)/1000.0);
	return 0;
}