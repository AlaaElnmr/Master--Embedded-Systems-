/*
 ======================================================================================================================
 Name        : EX3_C_Program_Reverse_String_Without_Using_Library_Function.
 Author      : Alaa Jamal Mahmoud.
 Created on	 : March 10, 2024.
 Description : Unit_2 C_Progtamming >> Assignment_3 String.
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,lenght=0,j;
	char str[1000],temp;


	printf("Enter the string :");
	fflush(stdin);fflush(stdout);
	scanf("%s",str);

	for(i=0 ; str[i]!=0 ; i++)
	{
		lenght++;
	}

	char last=lenght-1;

	for(i=0 ; i<lenght ; i++)
	{
		for(j=0 ; i<lenght/2;i++)
		{
			temp=str[last];
			str[last]=str[i];
			str[i]=temp;
			last--;
		}

	}

	printf("Reverse string is : %s",str);
	return EXIT_SUCCESS;
}