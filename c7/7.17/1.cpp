#include<stdio.h>
int change(int n,char s[100]);
int main()
{
	int n,l;
	char sn[100];
	scanf("%d",&n);
	l=change(n,sn);
	for(int i=1;i<l;i++)
		printf("%c",sn[i]);
	printf("\n");
	return 0;
}
int change(int n,char s[100])
{
	if(n==0)
		return 1;
	else
	{
		int t=change(n/10,s);
		s[t]=n%10+'0';
		return t+1;
	}
}