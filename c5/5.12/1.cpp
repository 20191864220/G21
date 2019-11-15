#include<stdio.h>
int main()
{
	int peach=1;
	for(int i=1;i<10;i++)
	{
		peach=(peach+1)*2;
	}
	printf("The number of peach:%d\n",peach);
	return 0;
}