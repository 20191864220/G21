#include<stdio.h>

int n,sz,l=0,temp;        //sz:ÿλ������  l:���ֵĳ���

void nlength();           //�������ֵĳ���

void nnumber();           //���ÿλ����   

void nreverse();          //�������

int main()           
{

	scanf("%d",&n);
	nlength(); 
	nnumber();
	nreverse();
	return 0;
}

void nlength()
{
	temp=n;
	while(temp)
	{
		l++;
		temp/=10;
	}
	printf("Digit(s) : %d\n",l);
	return ;
}

void nnumber()
{
	temp=n;
	int x=1;
	for(int i=1;i<l;i++)
		x*=10;
	while(x)
	{
		sz=temp/x;
		printf("%d ",sz);
		temp-=sz*x;
		x/=10;
	}
	printf("\n");
	return ;
}

void nreverse()
{
	temp=n;
	while(temp)
	{
		sz=temp%10;
		printf("%d",sz);
		temp/=10;
	}
	printf("\n");
	return ;
}

