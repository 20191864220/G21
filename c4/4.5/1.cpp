#include<stdio.h>
#include<math.h>
int main()
{
	double a;
	int b;
	scanf("%lf",&a);
	while(a>=1000)
	{
		printf("Please enter the correct number.\n");
		scanf("%lf",&a);
	}
	b=sqrt(a);
	printf("%d\n",b);
	return 0;
}