#include<stdio.h>
#include<math.h>

double x1,x2;
int flag=0;
void pd(int aa,int bb,int cc);
double do1(int x,int t,int a,int b);
double do2(int a,int b);
void do3();
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	pd(a,b,c);
	if(flag==0)
		printf("x1=%lf  x2=%lf\n",x1,x2);
	else
		printf("No real roots\n");
	return 0;
}
void pd(int aa,int bb,int cc)
{
	int temp=bb*bb-4*aa*cc;
	if(temp==0)
	{
		x1=do1(1,temp,aa,bb);
		x2=do1(-1,temp,aa,bb);
	}
	else if(temp>0)
		x1=x2=do2(aa,bb);
	else
		do3();
}
double do1(int x,int t,int a,int b)
{
	if(x==1)
		return (-b+sqrt(t))/(2*a);
	else
		return (-b-sqrt(t))/(2*a);
}
double do2(int a,int b)
{
	return -b/(2*a);
}
void do3()
{
	flag=1;
}