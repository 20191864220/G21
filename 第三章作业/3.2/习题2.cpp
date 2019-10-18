#include<stdio.h>
#include<math.h>
int main()
{
    float r1=0.015,r2=0.021,r3=0.0275,r5=0.03,rh=0.0035,p1,p2,p3,p4,p5;
    int x,n1=5,n2=2,n3=3;
    p1=1000*(1+n1*r5);
    p2=1000*(1+n2*r2)*(1+n3*r3);
    p3=1000*(1+n3*r3)*(1+n2*r2);
    p4=1000*pow(1+r1,n1);
    p5=1000*pow(1+rh/4,4*n1);
    printf("方案一：%f\n方案二：%f\n方案三：%f\n方案四：%f\n方案五：%f\n",p1,p2,p3,p4,p5);
	return 0;
}
