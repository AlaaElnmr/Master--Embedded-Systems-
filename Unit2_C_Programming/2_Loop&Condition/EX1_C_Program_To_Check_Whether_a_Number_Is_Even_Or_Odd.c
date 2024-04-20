/*
 ======================================================================================================================
 Name        : EX1_C_Program_To_Check_Whether_a_Number_Is_Even_Or_Odd.
 Author      : Alaa Jamal Mahmoud.
 Created on	 : March 3, 2024.
 Description : Unit_2 C_Progtamming >> Assignment_2 Loop&Condition.
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	printf("Enter an integer you want to check:");
	fflush(stdin);fflush(stdout);
	scanf("%d\n",&num);

	if(num%2==0)
	{
		printf("%d is even\n",num);
	}
	else
	{
		printf("%d is odd\n",num);
	}

	return EXIT_SUCCESS;
}