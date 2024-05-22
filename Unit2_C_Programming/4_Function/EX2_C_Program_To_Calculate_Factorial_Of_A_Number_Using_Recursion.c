/*
 ======================================================================================================================
 Name        : EX2_C_Program_To_Calculate_Factorial_Of_A_Number_Using_Recursion.
 Author      : Alaa Jamal Mahmoud.
 Created on	 : April 20, 2024.
 Description : Unit_2 C_Progtamming >> Assignment_4 Function.
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int fact_recursive(int num)
{
	if(num!=1)
	{
		return num*fact_recursive(num-1);
	}
}

int main(void)
{
	int num;
	printf("Enter an positive integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	printf("Factorial of %d = %d",num,fact_recursive(num));
	return EXIT_SUCCESS;
}