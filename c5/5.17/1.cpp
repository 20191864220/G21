#include<stdio.h>
int main()
{
	
	for(int i = 0;i<3;i++)
	{
		for(int j =0;j<3;j++)
		{
			for(int k = 0;k<3;k++)
			{
				if(i!=j && k!=i && k!=j)
				{
				if(i!=0&&k!=0&&k!=2)
				
					printf("A---%c\nB---%c\nC---%c\n",i+'X',j+'X',k+'X');
				}
		
			}

		}
	
	}




return 0;

}
