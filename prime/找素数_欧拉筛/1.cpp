#include <stdio.h>
#include <math.h>
#include <time.h>

int pd[1000001],ss[1000001];

void Found(int m,int n);

int main()
{
      int p=2,q=1000000;
	  long c1,c2;
	  c1=clock();
	  for(int s=0;s<1000001;s++)        //��ʼ������
	  {
		  pd[s]=ss[s]=0;
	  }
	  Found(p,q);               //ŷ��ɸ��������
	  c2=clock();
	  printf("����ʱ%f��\n",(c2-c1)/1000.0);
	  return 0;
}
void Found(int m,int n)
{
	int sum=0;
	for(int i=m;i<=n;i++)
	{
		if(!pd[i])ss[sum++]=i;      
		for(int j=0;j<sum&&ss[j]*i<=n;j++)   
		{
			pd[ss[j]*i]=1;            
			if(i%ss[j]==0)break;
		}
	}
	printf("����%d������\n",sum);
}