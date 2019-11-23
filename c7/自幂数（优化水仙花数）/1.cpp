#include<stdio.h>
#include<math.h>
#include<time.h>
int main()
{
	int c1,c2;
	long left,right,temp,sum,a[10][10];
	int n;
	scanf("%d",&n);        
	c1=clock();
	for(int j=0;j<=9;j++)
		for(int k=1;k<=9;k++)
		{
			a[j][k]=pow(j,k);   //j^k
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
			while(temp!=0)
			{
				int t=temp%10;
				sum=sum+a[t][n];
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