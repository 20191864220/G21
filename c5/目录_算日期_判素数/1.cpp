#include<stdio.h>          
#include<math.h>

int flag;

void DO1();

void panduan(int ye,int mo,int da);

int Find(int m,int d);

void DO2();

int main()
{
	int x;
	printf("If you want to know a day of the year,please input 1.\n");
	printf("If you want to judge whether a number is a prime,please input 2.\n");
	printf("If you want to quit the program,please any other one.\n");
	scanf("%d",&x);
	while(x==1||x==2)
	{
		switch(x)
		{
			case 1 :DO1();break;
			case 2 :DO2();break;
		}
		scanf("%d",&x);
	}
	return 0;
}

void DO1()
{
	int year,month,day;
	flag=1;
	printf("Please enter the date.\n");
	scanf("%d/%d/%d",&year,&month,&day);
	panduan(year,month,day);
	if(flag)
	{
		day+=Find(month,day);
		if(month>2)
		{
			if(((year%4==0)&&(year%100!=0))||(year%400==0))  //ÈòÄê
				printf("%d\n",day);
			else 
				printf("%d\n",day-1);
		}
		else 
			printf("%d\n",day);
	}
	else
		printf("Please enter the right date.\n");
}

void panduan(int ye,int mo,int da)
{
	if(mo<1||mo>12||da<1||ye<1)
		flag=0;
	switch(mo)
	{
		case 1 :if(da>31)flag=0;break;
		case 2 :if(da>28)flag=0;break;
		case 3 :if(da>31)flag=0;break;
		case 4 :if(da>30)flag=0;break;
		case 5 :if(da>31)flag=0;break;
		case 6 :if(da>30)flag=0;break;
		case 7 :if(da>31)flag=0;break;
		case 8 :if(da>31)flag=0;break;
		case 9 :if(da>30)flag=0;break;
		case 10 :if(da>31)flag=0;break;
		case 11 :if(da>30)flag=0;break;
		case 12 :if(da>31)flag=0;break;
	}
	if(((ye%4==0)&&(ye%100!=0))||(ye%400==0))  //ÈòÄê
		if(mo==2&&da==29)
			flag=1;
}

int Find(int m,int d)
{
	int n;
	switch(m)
	{
		case 1 :n=0;break;
		case 2 :n=31;break;
		case 3 :n=60;break;
		case 4 :n=91;break;
		case 5 :n=121;break;
		case 6 :n=152;break;
		case 7 :n=182;break;
		case 8 :n=213;break;
		case 9 :n=244;break;
		case 10 :n=274;break;
		case 11 :n=305;break;
		case 12 :n=335;break;
	}
	return n;
}


void DO2()
{
	int n,f=0;
	printf("Please enter the number.\n");
	scanf("%d",&n);
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			f=1;
			break;
		}
	}
	if(f==0)
		printf("The number is a prime.\n");
	else
		printf("The number is not a prime.\n");
}