#include<stdio.h>
#include<string.h>
void antitone(char n[100]);
char m[100];
int main()
{
	scanf("%s",&m);
	antitone(m);
	printf("\n");
	return 0;
}

void antitone(char n[100])
{
	for(int i=strlen(n)-1;i>=0;i--)
	{
		printf("%c",n[i]);
	}
}

