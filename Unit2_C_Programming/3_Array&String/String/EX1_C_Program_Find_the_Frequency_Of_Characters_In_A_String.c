/*
 ======================================================================================================================
 Name        : EX1_C_Program_Find_the_Frequency_Of_Characters_In_A_String.
 Author      : Alaa Jamal Mahmoud.
 Created on	 : March 10, 2024.
 Description : Unit_2 C_Progtamming >> Assignment_3 String.
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char* str[1000];
	char ch;
	int i,count=0;
	printf("Enter a string:");
	gets(str);


	printf("Enter a character to find frequency:");
	fflush(stdin);fflush(stdout);
	scanf("%c",&ch);

	for(i=0;str[i]!=0;i++)
	{
		if(ch==str[i])
		{
			count++;
		}
	}

	printf("frequency of %c = %d",ch,count);
	return EXIT_SUCCESS;
}