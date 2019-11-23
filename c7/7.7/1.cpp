#include<stdio.h>
#include<string.h>
char a[100],b[100];
int l=0;
void vowel(char c1[100],char c2[100]);
int main()
{
	scanf("%s",&a);
	vowel(a,b);
	printf("Vowel:");
	for(int j=0;j<l;j++)
	{
		printf("%c",b[j]);
	}
	printf("\n");
	return 0;
}
void vowel(char c1[100],char c2[100])
{
	for(int i=0;i<strlen(a);i++)
	{
		if(c1[i]=='A'||c1[i]=='E'||c1[i]=='I'||c1[i]=='O'||c1[i]=='U'||c1[i]=='a'||c1[i]=='e'||c1[i]=='i'||c1[i]=='o'||c1[i]=='u')
		{
			c2[l++]=c1[i];
		}
	}
	return ;
}