/*
 ======================================================================================================================
 Name        : EX3_C_Program_To_Find_Largest_Number_Among_Three_Numbers.
 Author      : Alaa Jamal Mahmoud.
 Created on	 : March 3, 2024.
 Description : Unit_2 C_Progtamming >> Assignment_2 Loop&Condition.
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float num1,num2,num3;
	printf("Enter three numbers:");

	scanf("%f%f%f",&num1,&num2,&num3);

	if((num1>num2)&&(num1>num3))
	{
		printf("Largest number = %.2f",num1);
	}
	if((num2>num3)&&(num2>num1))
	{
		printf("Largest number = %.2f",num2);
	}
	if((num3>num2)&&(num3>num1))
	{
		printf("Largest number = %.2f",num3);
	}
	
	return EXIT_SUCCESS;
}