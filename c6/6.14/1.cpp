#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	gets(a);
	gets(b);
	int l=strlen(a),flag=0;
	if(l<strlen(b))
		l=strlen(b);
	for(int i=0;i<l;i++)
		if(a[i]!=b[i])
		{
			printf("%d\n",a[i]-b[i]);
			flag=1;
			break;
		}
	if(!flag)
		printf("0\n");
	return 0;
}