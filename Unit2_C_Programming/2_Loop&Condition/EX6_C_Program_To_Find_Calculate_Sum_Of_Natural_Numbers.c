/*
 ======================================================================================================================
 Name        : EX6_C_Program_To_Find_Calculate_Sum_Of_Natural_Numbers.
 Author      : Alaa Jamal Mahmoud.
 Created on	 : March 3, 2024.
 Description : Unit_2 C_Progtamming >> Assignment_2 Loop&Condition.
 ======================================================================================================================
 */
 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,num=0,sum=0;
	printf("Enter an integer:");
	fflush(stdout);fflush(stdin);
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		sum+=i;
	}
	printf("sum = %d",sum);
	return EXIT_SUCCESS;
}