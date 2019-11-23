#include<stdio.h>
int a[11];
void Sort(int b[11]);
int main()
{
	for(int i=1;i<=10;i++)
		scanf("%d",&a[i]);
	Sort(a);
	for(int j=1;j<=10;j++)
		printf("%d ",a[j]);
	printf("\n");
	return 0;
}
void Sort(int b[11])
{
	int temp;
	for(int i=1;i<=10;i++)
		for(int j=1;j<=10-i;j++)
			if(b[j]>b[j+1])
			{
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
	return ;
}