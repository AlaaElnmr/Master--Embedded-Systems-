
/*
 ======================================================================================================================
 Name        : EX2_C_Program_To_Print_a_Integer_Entered_by_a_User.
 Author      : Alaa Jamal Mahmoud.
 Created on	 : March 3, 2024.
 Description : Unit_2 C_Progtamming >> Assignment_1 C_Basic. 
 ======================================================================================================================
 */
 
#include <stdio.h>
#include <stdlib.h>

 int main(void)
{
	int num=0;
	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d\n",&num);
	fflush(stdin);fflush(stdout);
	printf("You entered: %d \n",num);
	return EXIT_SUCCESS;
}