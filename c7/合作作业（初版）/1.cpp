#include<stdio.h>

FILE *fp;

struct date{
	char name[100];
	long num;
	double grate[11];
	double sum,ave;
};
date people[101];
double subjectave[11];   //单科平均值
int x;              //学生人数

void WriteDown();
void SingleDog();
void SingleGrate();
void Sort1();
void Average();
void Find();
void Allsort();
void Sort2(int n);
void Sort3();
void Findaverage();
void Save();
void Read();

int main()
{
	printf("Please the number of student:");
	scanf("%d",&x);
	while(x>100)
	{
		printf("Please enter an integer less than or equal to 100.\n");
		printf("Please the number of student:");
		scanf("%d",&x);
	}
	int nb;
	printf("If you want to enter the student information,please enter 1.\n");
	printf("If you want to enter a student's grates,please enter 2.\n");
	printf("If you want to enter the score of a subject,please enter 3.\n");
	printf("If you want to calculate the average score of each department,student\n");
	printf(" total score or student average score of each subject,please enter 4.\n");
	printf("If you want to query single score,please enter 5.\n");
	printf("If you want to sort students' scores,please enter 6.\n");
	printf("If you want to search the average scores of subject,please enter 7.\n");
	printf("If you want to save the date,please enter 8.\n");
	printf("If you want to read the date,please enter 9.\n");
	printf("(If you want to quit the program,please enter 0.)\n");
	do
	{
		printf("Please enter the command number:");
		scanf("%d",&nb);
		if(nb==0)
			break;
		if(nb>=1&&nb<=9)
			switch(nb)
			{
				case 1:WriteDown();break;
				case 2:SingleDog();break;
				case 3:SingleGrate();break;
				case 4:Average();break;
				case 5:Find();break;
				case 6:Allsort();break;
				case 7:Findaverage();break;
				case 8:Save();break;
				case 9:Read();break;
				default:break;
			}
		else
			printf("Error!\n");
	}while(nb);
	return 0;
}

void WriteDown()    // 1 录入学生姓名学号
{
	printf("Please enter all students' names and student ID.\n");
	for(int j=1;j<=x;j++)
		scanf("%s%ld",&people[j].name,&people[j].num);
}

void SingleDog()   // 2 录入单个学生单科
{
	long n; //学号
	int j;   //科目
	char a;
	printf("(If you want to quit the program,please enter 0.)\n");
	do
	{
		printf("Please enter the serial number of the subject:");
		scanf("%d",&j);
		if(j<0||j>10)
			printf("Error!\n");
		else
		{
			if(j==0)
				break;
			printf("Please enter the student's ID number:");
			scanf("%ld",&n);
			for(int i=1;i<=x;i++)
				if(people[i].num==n)
				{
					printf("Is he or she %s?(Y or N)\n",people[i].name);
					a=getchar();
					a=getchar();
					if(a=='Y')
					{
						printf("Please enter his or her subject%d score:",j);
						scanf("%lf",&people[i].grate[j]);
						break;	
					}
					else 
						printf("Error!\n");
				}
		}
	}while(j>=1&&j<=10);
}

void SingleGrate()   // 3 批量录入单科成绩
{
	Sort1();
	int i;
	printf("(If you want to quit the program,please enter 0.)\n");
	do
	{
		printf("Please enter the serial number of the subject:");
		scanf("%d",&i);
		if(i<0||i>10)
			printf("Error!\n");
		else
		{
			if(i==0)
				break;
			printf("Please enter grades in order of student ID.\n");
			for(int j=1;j<=x;j++)
				scanf("%lf",&people[j].grate[i]); 
		}
	}while(i>=1&&i<=10);
}

void Sort1()
{
	date temp;
	for(int i=1;i<=x;i++)
		for(int j=i+1;j<=x;j++)
			if(people[i].num>people[j].num)
			{
				temp=people[i];
				people[i]=people[j];
				people[j]=temp;
			}
}

void Average()   // 4 各科平均分，个人总分、平均分
{
	int i,j;
	for(i=1;i<=10;i++)   //各科平均分
		for(j=1;j<=x;j++)
			subjectave[i]+=people[j].grate[i];
	for(i=1;i<=10;i++)
		subjectave[i]/=(double)x;
	for(i=1;i<=x;i++)    //个人总分平均分
	{
		for(j=1;j<=10;j++)
			people[i].sum+=people[i].grate[j];
		people[i].ave=people[i].sum/10.0;
	}
}

void Find()        // 5 单人成绩查询
{
	long n;
	char a;
	printf("Please enter your Student ID:\n");
	scanf("%ld",&n);
	for(int i=1;i<=x;i++)
	{
		if(people[i].num==n)
		{
			printf("Is he or she %s?(Y or N)\n",people[i].name);
			a=getchar();
			a=getchar();
			if(a=='Y')
			{
				for(int j=1;j<=10;j++)
					printf("Subject %d:  %.1lf\n",j,people[i].grate[j]);
				printf("Total:  %.1lf\tAverage:   %.1lf\n",people[i].sum,people[i].ave);
			}
			else 
				printf("Error!\n");
		}
	}
}

void Allsort()    // 6 单科或总成绩排序
{
	Sort3();
	char a;
	int n;
	printf("Would you like to check the total ranking or single subject ranking?\nPlease T(total) or S(single):\n");
	a=getchar();
	a=getchar();
	if(a=='S')
	{
		printf("(If you want to quit the program,please enter 0.)\n");
		do
		{
			printf("Please enter the subject:");
			scanf("%d",&n);
			if(n==0)
				break;
			Sort2(n);
		}while(n>=1&&n<=10);
	}
	else if(a=='T')
		for(int t=1;t<=x;t++)
			printf("%d  %ld  %s  %.1lf\n",t,people[t].num,people[t].name,people[t].sum);
	else 
		printf("Error!\n");
}

void Sort2(int n)
{
	date temp;
	for(int i=1;i<=x;i++)
		for(int j=i+1;j<=x;j++)
			if(people[i].grate[n]<people[j].grate[n])
			{
				temp=people[i];
				people[i]=people[j];
				people[j]=temp;
			}
	for(int t=1;t<=x;t++)
		printf("%d  %ld  %s  %.1lf\n",t,people[t].num,people[t].name,people[t].grate[n]);
}

void Sort3()
{
	date temp;
	for(int i=1;i<=x;i++)
		for(int j=i+1;j<=x;j++)
			if(people[i].sum<people[j].sum)
			{
				temp=people[i];
				people[i]=people[j];
				people[j]=temp;
			}
}

void Findaverage()    // 7 单科平均分查询
{
	int n;
	printf("(If you want to quit the program,please enter 0.)\n");
	do
	{
		printf("Please enter the subject:");
		scanf("%d",&n);
		if(n<0||n>10)
			printf("Error!\n");
		else
		{
			if(n==0)
				break;
			printf("Average:%.1lf\n",subjectave[n]);
		}
	}while(n>=1&&n<=10);
}

void Save()     // 8 数据存档
{
	Sort1();
	fp=fopen("date.txt","w");
	for(int i=1;i<=x;i++)
	{
		fprintf(fp,"ID: %ld  %s      Total: %.1lf\t Average: %.1lf\n",people[i].num,people[i].name,people[i].sum,people[i].ave);
		for(int j=1;j<=10;j++)
		{
			if(j%5==0)
				fprintf(fp,"Subject%d: %.1lf\n",j,people[i].grate[j]);
			else
				fprintf(fp,"Subject%d: %.1lf  ",j,people[i].grate[j]);
		}
	}
	fprintf(fp,"Average scores of all students:\n");
	for(int t=1;t<=10;t++)
	{
		if(t%5==0)
			fprintf(fp,"Subject%d: %.1lf\n",t,subjectave[t]);
		else
			fprintf(fp,"Subject%d: %.1lf  ",t,subjectave[t]);
	}
	fclose(fp); 
}

void Read()    // 9 数据读取
{
	fp=fopen("date.txt","r");
	char temp[20];
	for(int i=1;i<=x;i++)
	{
		fscanf(fp,"%s %ld %s %s %lf %s %lf",&temp,&people[i].num,&people[i].name,&temp,&people[i].sum,&temp,&people[i].ave);
		for(int j=1;j<=10;j++)
			fscanf(fp,"%s %lf",&temp,&people[i].grate[j]);
	}
	fscanf(fp,"%s %s %s %s %s",&temp,&temp,&temp,&temp,&temp);
	for(int t=1;t<=10;t++)
		fscanf(fp,"%s %lf",&temp,&subjectave[t]);
	fclose(fp); 
}
