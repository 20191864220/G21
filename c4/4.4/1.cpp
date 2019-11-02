#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b&&a>=c){
		printf("The biggest number:%d",a);
	}
	else if(b>=a&&b>=c){
		printf("The biggest number:%d",b);
	}
	else if(c>=a&&c>=b){
		printf("The biggest number:%d",c);
	}
	printf("\n");
	return 0;
}
