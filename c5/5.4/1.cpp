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

//�����ַ�  //�����ж� //������ͼ�����
//ִ��getchar����������õĿ���ʾ�ַ�����Ļ�ϲ�����ʾ�ַ����
//scanf��getchar������ͬ�������������Ϊ����������ͬ������scanf����ĵ�һ���ַ�û�б�����