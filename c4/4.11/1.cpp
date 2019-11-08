#include<stdio.h>     // 使用了冒泡排序算法
int main()
{
	int a[4],temp,i,j;
	for(i=0;i<4;i++)
		scanf("%d",&a[i]);
	for(i=0;i<4;i++)
		for(j=i+1;j<4;j++)
			if(a[i]>a[j])     
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
	for(i=0;i<3;i++)
		printf("%d ",a[i]);
	printf("%d\n",a[3]);
	return 0;
}
