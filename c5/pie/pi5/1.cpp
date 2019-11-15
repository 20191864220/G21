#include<stdio.h>
#include<math.h>
#include<time.h>
int main()
{
	int c1,c2;
	c1=clock();
	double pi=1.0/2.0,t1=1,t2=1,temp;
	int i=1;
	while(i<=14)    //pi=3.1415926536  用时无线接近于0
	{
		t1=t1*(2*i-1);  //分子
		t2=t2*(2*i);    //分母
		temp=t1/t2;     //分子/分母
		pi=pi+temp*1/((2*i+1)*pow(2,2*i+1));
		i++;
	}
	c2=clock();
	printf("pi=%.10lf\n",pi*6.0);
	printf("Time:%lf\n",(c2-c1)/1000.0);
	return 0;
}