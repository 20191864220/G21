#include<stdio.h>
#include<math.h>
int x=10,y=5,i,j,m[10];
float variance;
void every_subject_grade(int b[10][10]);
void every_student_grade(int b[10][10]);
void top_score(int b[10][10]);
int main()
{
	int a[10][10],aa[10][10];
	for(i=0;i<=x-1;i++)
	{
		printf("Please enter student%d's grates:\n",i+1);
		for(j=0;j<=y-1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	every_student_grade(a);




	for(i=0;i<=x-1;i++)
		for(j=0;j<=y-1;j++)
			aa[j][i]=a[i][j];
/*	for(i=0;i<=y-1;i++)
	{
		printf("Please enter subject%d's grates:\n",i+1);
		for(j=0;j<=x-1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}*/
	every_subject_grade(aa);





	top_score(a);


	int k=pow(m[0],2)*pow(m[1],2)+pow(m[2],2)*pow(m[3],2)*pow(m[4],2)*pow(m[5],2)*pow(m[6],2)*pow(m[7],2)*pow(m[8],2)*pow(m[9],2);
	float q=m[0]+m[1]+m[2]+m[3]+m[4]+m[5]+m[6]+m[7]+m[8]+m[9];
	variance=i/y*k-pow((q/y),2);
	printf("%f",variance);
	printf("\n");
	return 0;
}
void every_student_grade(int b[10][10])
{
	float m[10]={0};
	for(i=0;i<=x-1;i++)
	{
	for(j=0;j<=y-1;j++)
	{
		m[i]=b[i][j]+m[i];
		if(j==y-1)
		{
			m[i]=m[i]/y;
		}
	}
	}
	for(i=0;i<=x-1;i++)
	{
		printf("%f ",m[i]);
	}
	
}
void every_subject_grade(int b[10][10])
{
	float m[10]={0};
	for(int i=0;i<=y-1;i++)
	{
	for(int j=0;j<=x-1;j++)
	{
		m[i]=b[i][j]+m[i];
		if(j==x-1)
		{
			m[i]=m[i]/x;
		}
	}
	}
	for(i=0;i<=y-1;i++)
	{
		printf("%f ",m[i]);
	}
	
}


void top_score(int b[10][10])
{
	int temp=b[0][0];
	for(i=0;i<=x-1;i++)
	{
		for(j=0;j<=y-1;j++)
		{
			if(temp<b[i][j])
			{
				temp=b[i][j];
			}
		}
	}
	printf("最高分:%d 该学生是第%d名学生 第%d门课程",b[i][j],i,j);
}