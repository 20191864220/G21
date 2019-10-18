#include<stdio.h>
#include<math.h>
//#include<stdlib.h>
float R(float m)
{
      return floor(m*10.0+0.5)/10.0;
}
int main()
{
    float d=300000.0,p=6000.0,r=0.01,m;
    m=log(p/(p-d*r))/log(1+r);
    m=R(m);
    printf("%.1f\n",m);
//    system("pause");
    return 0;
}
