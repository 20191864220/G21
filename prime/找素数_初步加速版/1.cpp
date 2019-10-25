#include <stdio.h>
#include <math.h>
#include <time.h>

void Found(int a,int b);

int main()
{
	int m,n,t;
	long t1,t2;
	t1=clock();
//	scanf("%d%d",&m,&n);
	m=2,n=1000000;
	Found(m,n);
	t2=clock();
	printf("共用时%f秒\n",(t2-t1)/1000.0);  
	return 0;
}

void Found(int a,int b)
{
	int flag,i,j,sum=0;
	for(i=a;i<=b;i++)
	{
		flag=0;
    	for(j=2;j<=sqrt(i);j++)
		{
	    	if(i%j==0&&i!=j)
			{
    			flag++;
	   			break;
			}
		}
    	if(!flag)
		{
//			printf("%d ",i);
			sum++;
		}
	}
    printf("共有%d个素数\n",sum);
}