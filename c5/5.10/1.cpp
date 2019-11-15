#include<stdio.h>

#include<math.h>

int main()

{

	double fz1=2.0,fz2=3.0,fm1=1.0,fm2=2.0;

	double i,sum,fz,fm;

	sum=fz1/fm1+fz2/fm2;

	for(i=1;i<=18;i++)

	{

		fz=fz1+fz2;

		fm=fm1+fm2;

		sum=sum+fz/fm;

		fz1=fz2;

		fz2=fz;

		fm1=fm2;

		fm2=fm;

	}

	printf("%lf\n",sum);

	return 0;

}
