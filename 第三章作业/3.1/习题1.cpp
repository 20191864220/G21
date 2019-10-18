#include<stdio.h>
int main()
{
	int n=10;
	float r=0.07,p=1;
	for(int i=1;i<=n;i++)
		p=p*(1+r);
    printf("%f\n",p);
	return 0;
}