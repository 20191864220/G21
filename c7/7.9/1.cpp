#include<stdio.h>
#include<string.h>

int daxie=0,xiaoxie=0,space=0,number=0,other=0;
int main()
{
	void  counter(char []);
	char text[1000];
	printf("plaese input string:\n");
	gets(text);
	printf("string:");
	puts(text);
	counter(text);
	printf("\ndaxie=%d\nxiaoxie=%d\nnumber=%d\nspace=%d\nother=%d\n",daxie,xiaoxie,number,space,other);
	return 0;

}
void counter(char str[])
{
	int j;
	for(j=0;j<strlen(str);j++)
	{
		if((str[j]>='A')&&(str[j]<='Z'))
			daxie = daxie + 1;
		else if((str[j]>='a')&&(str[j]<='z'))
			xiaoxie = xiaoxie + 1;
		else if((str[j]>='0')&&(str[j]<='9'))
			number = number + 1;
		else if(str[j]==' ')
			space = space + 1;
		else
			other = other + 1;
	}
			printf("daxie=%d\nxiaoxie=%d\nnumber=%d\nspace=%d\nother=%d\n",daxie,xiaoxie,number,space,other);
	
}
