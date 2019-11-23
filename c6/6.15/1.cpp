#include<stdio.h>
#include<string.h>
int main()
{    
	int i;
	char s1[100],s2[100];
	printf("«Î ‰»Îs2:");
	scanf("%s",s2);
	for(i=0;i<=strlen(s2);i++)
	{
		s1[i]=s2[i];
	}
		printf("s1:%s\n",s1);
	return 0;
}
