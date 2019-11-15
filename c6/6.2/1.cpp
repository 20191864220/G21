#include<stdio.h>
int main()
{
	int a[10],k,temp,i,j;
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=9;i++)
	{
		k=i;
		for(j=i+1;j<=9;j++)
		{
			if(a[j]<a[k])
			{
				k=j;
			}
		}
		if(k!=i)
		{
			temp=a[i];
			a[i]=a[k];
			a[k]=temp;
		}
	}
	for(i=0;i<=8;i++)
		printf("%d ",a[i]);
	printf("%d\n",a[9]);
	return 0;
}