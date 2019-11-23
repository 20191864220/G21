#include<stdio.h>
#include<string.h>
char c1[80],c2[80];
int i,j,length;
void Strcpy(char a[80],char b[80]);
int main()
{
	printf("Input string1:");
	gets(c1);
	printf("Input string2:");
	gets(c2);
	Strcpy(c1,c2);			
	for(i=0;i<length;i++)
	{
		printf("%c",c1[i]);
	}
	printf("\n");
	return 0;
}
void Strcpy(char a[80],char b[80])
{
	length=strlen(c1)+strlen(c2);	
	for(j=0,i=strlen(c1);j<strlen(c2);i++,j++)
	{		
		a[i]=b[j];		
	}
	return ;
}

