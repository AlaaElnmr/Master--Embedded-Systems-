/*
 ======================================================================================================================
 Name        : EX4_C_Program_To_Find_Check_Whether_A_Number_Is_Positive_Or_Negative.
 Author      : Alaa Jamal Mahmoud.
 Created on	 : March 3, 2024.
 Description : Unit_2 C_Progtamming >> Assignment_2 Loop&Condition.
 ======================================================================================================================
 */
 
#include <stdio.h>
#include <stdlib.h>

 
 int main(void)
{
	float num;
	printf("Enter a numbers:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&num);
	if(num>0)
	{
		printf("%.2f is Positive",num);
	}
	else if (num<0)
	{
		printf("%.2f is Negative",num);
	}
	else
	{
		printf("you entered zero");
	}
	return EXIT_SUCCESS;
}