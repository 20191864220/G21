#include<stdio.h>
int i,j;
void kong(int j);
int main()
{
	printf("输入一个四位数:");
	scanf("%d",&i);
	kong(i);
	printf("\n");
	
	return 0;
}



   void kong(int j)
{

	printf("%d %d %d %d",j/1000,j%1000/100,j%100/10,j%10);
	return  ;
}
