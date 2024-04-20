/*
 ======================================================================================================================
 Name        : EX7_C_Program_Swap_Two_Numbers_without_temp_variable.
 Author      : Alaa Jamal Mahmoud.
 Created on	 : April 20, 2024.
 Description : Unit_2 C_Progtamming >> Assignment_1 C_Basic.
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b,temp;
	printf("Enter value of a:");
	fflush(stdin);fflush(stdout);
	scanf("%d\n",&a);

	printf("Enter value of b:");
	fflush(stdin);fflush(stdout);
	scanf("%d\n",&b);

	a=a-b;
	b=b+a;
	a=b-a;

	printf("After swapping, value of a = %d\n",a);
	printf("After swapping, value of b = %d\n",b);
	return EXIT_SUCCESS;
}