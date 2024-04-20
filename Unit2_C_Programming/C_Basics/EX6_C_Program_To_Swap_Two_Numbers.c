
/*
 ======================================================================================================================
 Name        : EX6_C_Program_To_Swap_Two_Numbers.
 Author      : Alaa Jamal Mahmoud.
 Created on	 : April 20, 2024.
 Description : Unit_2 C_Progtamming >> Assignment_1 C_Basic.
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a,b,temp;
	printf("Enter value of a:");
	fflush(stdin);fflush(stdout);
	scanf(" %f\n",&a);

	printf("Enter value of b:");
	fflush(stdin);fflush(stdout);
	scanf(" %f\n",&b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping, value of a = %.2f \n",a);
	printf("After swapping, value of b = %.2f \n",b);
	return EXIT_SUCCESS;
}