#include<stdio.h>
#include<math.h>
//#include<stdlib.h>
int main()
{
	float r1=0.015,r2=0.021,r3=0.0275,r5=0.03,rh=0.0035,p;
	int x,n=5;
	printf("��ѡ�񷽰���\n");
	scanf("%d",&x);
	if(x==1)
	{
		p=1000*(1+n*r5);
		printf("��Ϣ��Ϊ�� %f\n",p);
	}
	else if(x==2)
	{
		p=1000*(1+2*r2)*(1+3*r3);
		printf("��Ϣ��Ϊ�� %f\n",p);
	}
	else if(x==3)
	{
		p=1000*(1+3*r3)*(1+2*r2);
		printf("��Ϣ��Ϊ�� %f\n",p);
	}
	else if(x==4)
	{
        p=1000;
        p=p*pow(1+r1,n);
		printf("��Ϣ��Ϊ�� %f\n",p);
	}
	else if(x==5)
	{
        p=1000;
	    p=p*pow(1+rh/4,4*n);
		printf("��Ϣ��Ϊ�� %f\n",p);
	}
	else printf("�޶�Ӧ����\n");
//	system("pause");
	return 0;
}
