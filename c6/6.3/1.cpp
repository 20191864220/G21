#include<stdio.h>

int main()
{
	int a[3][3],sum=0;
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
			if(i!=1&&j!=1)         
				sum+=a[i][j];       
		}                           
	sum+=a[1][1];
	printf("%d\n",sum);
	return 0;	

}