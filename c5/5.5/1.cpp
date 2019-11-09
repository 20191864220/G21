#include<stdio.h>

int main()

{

	int a,n,Sn=0,i=1,sum=0;

	scanf("%d%d",&a,&n);

	while(i<=n)

	{

		Sn=Sn+a;        

		a=a*10;    

		sum=sum+Sn;     

		i++;

	}

	printf("%d\n",sum);

	return 0;

}
