#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define PI 3.1415926
#define r2 pow(r,2)
#define r3 pow(r,3)
int main()
{
    float r,h,l,s,sb,v,vz;
    scanf("%f%f",&r,&h);
    l=2*PI*r;
    s=PI*r2;
    sb=4*PI*r2;
    v=(3.0/4.0)*PI*r3;
    vz=PI*r2*h;
    printf("圆周长 = %.2f  圆面积 = %.2f\n圆球表面积 = %.2f  圆球体积 = %.2f\n圆柱体积 = %.2f\n",l,s,sb,v,vz);
//    system("pause");
    return 0;
}
