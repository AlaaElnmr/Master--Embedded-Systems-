/*
 ======================================================================================================================
 Name        : EX5_C_Program_To_Find_Check_Whether_An_Alphabet_Or_Not.
 Author      : Alaa Jamal Mahmoud.
 Created on	 : March 3, 2024.
 Description : Unit_2 C_Progtamming >> Assignment_2 Loop&Condition.
 ======================================================================================================================
 */
 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char character;
	printf("Enter a character:");
	fflush(stdout);fflush(stdin);
	scanf("%c",&character);
	if((character>='A'&&character<='Z')||(character>='a'&&character<='z'))
	{
		printf("%c is an alphabet",character);
	}
	else
	{
		printf("%c is not an alphabet",character);
	}
	return EXIT_SUCCESS;
}