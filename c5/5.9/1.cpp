#include<stdio.h>

#include<math.h>

int main()

{

	int i,j,k,sum;

	for(i=1;i<=1000;i++)

	{

		int sum=0;

		for(j=1;j<i;j++)

		{

			if(i%j==0)

			{

				sum=sum+j;

			}

		}

		if(i==sum)

		{

			printf("%d its factors are ",sum);

			for(k=1;k<i;k++)

			{

				if(i%k==0)

				{

					printf("%d ",k);

				}

			}

			printf("\n");

		}

	}

	return 0;

}

