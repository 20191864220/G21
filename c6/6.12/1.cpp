#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],c,key[100];
	scanf("%s",&s);
	for(int i=0;i<strlen(s);i++)
	{
		printf("%c",s[i]);
		if(s[i]>='A'&&s[i]<='Z')
			s[i]='Z'-s[i]+'A';
		if(s[i]>='a'&&s[i]<='z')
			s[i]='z'-s[i]+'a';
	}
	printf("\n");
	for(int j=0;j<strlen(s);j++)
	{
		printf("%c",s[j]);
	}
	printf("\n");
	return 0;
}