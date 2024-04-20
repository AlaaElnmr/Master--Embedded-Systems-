/*
 ======================================================================================================================
 Name        : EX2_C_Program_To_Check_Vowel_Or_Consonant.
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
	printf("Enter an alphabet:");
	fflush(stdin);fflush(stdout);
	scanf("%c\n",&character);

	if(character=='i'||character=='o'||character=='u'||character=='a'||character=='e'
	||character=='I'||character=='O'||character=='U'||character=='A'||character=='E')
	{
		printf("%c ia a vowel",character);
	}
	else
	{
		printf("%c ia a consonant",character);
	}

	return EXIT_SUCCESS;
}
