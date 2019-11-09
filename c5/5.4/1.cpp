#include <stdio.h>

int main()
{
	char c;
	
	int letter=0,space=0,number=0,other=0;
	
	printf("please enter a line of character:"); 
	

	while ((c=getchar())!='\n')
	{
	
	if((c >='A'&& c <='Z')||(c>='a'&&c<='z'))
		letter=letter+1;
	else if (c >='0' && c <='9')
		number=number+1;
	else if (c==' ')
		space=space+1;
	else
		other=other+1;
	}

	                                  
	printf("letter=%d\nnumber=%d\nspace=%d\nother=%d\n",letter,number,space,other);
	return 0;
}

//输入字符  //分类判断 //输出类型及个数
//执行getchar函数，将获得的可显示字符和屏幕上不可显示字符输出
//scanf与getchar作用相同，机器读入和人为输入作用相同，导致scanf输入的第一个字符没有被计入