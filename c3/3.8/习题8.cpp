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
    printf("ASCII码：%d %d\n",c1,c2);
//    system("pause");
    return 0;
}
//问题：
//（1） 二者皆可。 
//（2） printf  
//（3） 不是。int与char的范围不同，只有公共范围内可以替换。 
