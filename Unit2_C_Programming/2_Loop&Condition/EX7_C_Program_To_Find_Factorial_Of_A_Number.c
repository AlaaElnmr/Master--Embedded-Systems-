/*
 ======================================================================================================================
 Name        : EX7_C_Program_To_Find_Factorial_Of_A_Number.
 Author      : Alaa Jamal Mahmoud.
 Created on	 : March 3, 2024.
 Description : Unit_2 C_Progtamming >> Assignment_2 Loop&Condition.
 ======================================================================================================================
 */
 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned long long int fact=1;
	int i=1,num=0;
	printf("Enter an integer:");
	fflush(stdout);fflush(stdin);
	scanf("%d",&num);
	if(num<0)
	{
		printf("factorial of negative number doesn't exist");
	}

	else
	{
		for(i=1;i<=num;i++)
		{
			fact*=i;
		}
		printf("fact = %lu",fact);
	}

	return EXIT_SUCCESS;
}

