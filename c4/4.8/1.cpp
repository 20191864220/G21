#include<stdio.h>

int main()

{

	int grade;

	scanf("%d",&grade);

	printf("Your grade:");

	if(grade>=90)

		printf("A ");

	else if(grade>=80&&grade<=89)

		printf("B ");

	else if(grade>=70&&grade<=79)

		printf("C");

	else if(grade>=60&&grade<=69)

		printf("D ");

	else if(grade<60)

		printf("E ");

	printf("\n");


	return 0;

}
