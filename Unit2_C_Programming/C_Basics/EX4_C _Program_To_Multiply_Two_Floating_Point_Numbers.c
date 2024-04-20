
/*
 ======================================================================================================================
 Name        : EX4_C_Program_To_Multiply_Two_Floating_Point_Numbers.
 Author      : Alaa Jamal Mahmoud.
 Created on	 : April 20, 2024.
 Description : Unit_2 C_Progtamming >> Assignment_1 C_Basic.
 ======================================================================================================================
 */
 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float num1,num2,product=0;
	printf("Enter two numbers: ");
	fflush(stdin);fflush(stdout);
	scanf(" %f\n%f\n",&num1,&num2);
	product=num1*num2;
	printf("sum: %f \n",product);
	return EXIT_SUCCESS;
}