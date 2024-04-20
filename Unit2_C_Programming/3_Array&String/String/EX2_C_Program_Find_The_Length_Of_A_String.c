/*
 ======================================================================================================================
 Name        : EX2_C_Program_Find_The_Length_Of_A_String.
 Author      : Alaa Jamal Mahmoud.
 Created on	 : March 10, 2024.
 Description : Unit_2 C_Progtamming >> Assignment_3 String.
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,lenght=0;
	char str[1000];
	printf("Enter a string:");
	fflush(stdin);fflush(stdout);
	scanf("%s",str);

	for(i=0;str[i]!=0;i++)
	{
		lenght++;

	}

	printf("Length of string: %d",lenght);
	return EXIT_SUCCESS;
}
