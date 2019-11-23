#include<stdio.h>
#include<string.h>
int main()
{
	char c1[80],c2[80];
	int i,j;
	printf("Input string1:");
	gets(c1);
	printf("Input string2:");
	gets(c2);
	int length=strlen(c1)+strlen(c2);	
	for(j=0,i=strlen(c1);j<strlen(c2);i++,j++)
	{		
		c1[i]=c2[j];		
	}			
	for(i=0;i<length;i++)
	{
		printf("%c",c1[i]);
	}
	printf("\n");
	return 0;
}

