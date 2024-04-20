
/*
 ======================================================================================================================
 Name        : EX1_C_Program_to_Add_Two_Integers.
 Author      : Alaa Jamal Mahmoud.
 Created on	 : March 3, 2024.
 Description : Unit_2 C_Progtamming >> Assignment_1 C_Basic. 
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1,num2,sum=0;
	printf("Enter two integers: ");
	fflush(stdin);fflush(stdout);
	scanf(" %d\n%d\n",&num1,&num2);
	sum=num1+num2;
	printf("sum: %d \n",sum);
	return EXIT_SUCCESS;
}