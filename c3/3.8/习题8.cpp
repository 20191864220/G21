#include<stdio.h>
#include<stdlib.h>
int main()
{
    char c1,c2;
//    int c1,c2;
    c1=getchar();
    c2=getchar();
    putchar(c1);
    putchar(c2);
    printf("\n%c%c\n",c1,c2);
    printf("ASCII�룺%d %d\n",c1,c2);
//    system("pause");
    return 0;
}
//���⣺
//��1�� ���߽Կɡ� 
//��2�� printf  
//��3�� ���ǡ�int��char�ķ�Χ��ͬ��ֻ�й�����Χ�ڿ����滻�� 
