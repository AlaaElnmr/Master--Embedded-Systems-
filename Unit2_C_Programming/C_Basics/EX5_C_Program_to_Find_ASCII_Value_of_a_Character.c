
/*
 ======================================================================================================================
 Name        : EX5_C_Program_to_Find_ASCII_Value_of_a_Character.
 Author      : Alaa Jamal Mahmoud.
 Created on	 : April 20, 2024.
 Description : Unit_2 C_Progtamming >> Assignment_1 C_Basic. 
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char character;
	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c\n",&character);
	printf("ASCII value of %c = %d \n",character,character);
	return EXIT_SUCCESS;
}