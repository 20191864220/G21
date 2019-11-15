#include <stdio.h>
#include <math.h>
#include <time.h>

int pd[101],ss[101];

void Found(int m,int n);

int main()
{
      int p=2,q=100;
	  for(int s=0;s<101;s++)
	  {
		  pd[s]=ss[s]=0;
	  }
	  Found(p,q);
	  return 0;
}
void Found(int m,int n)
{
	int sum=0,t=0;
	for(int i=m;i<=n;i++)
	{
		if(!pd[i])
		{
			t++;
			printf("%2d ",i);
			ss[sum++]=i; 
		}
		if(t==5)
		{
			t=0;
			printf("\n");
		}
		for(int j=0;j<sum&&ss[j]*i<=n;j++)   
		{
			pd[ss[j]*i]=1;            
			if(i%ss[j]==0)break;
		}
	}
	printf("The number of prime is %d.\n",sum);
}