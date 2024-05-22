/*
 ======================================================================================================================
 Name        : EX1_C_Program_Find_Prime_Number_Between_Two_Intervals.
 Author      : Alaa Jamal Mahmoud.
 Created on	 : April 20, 2024.
 Description : Unit_2 C_Progtamming >> Assignment_4 Function.
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int prime(int num)
{
	int i,flag=0;
	for(i=2;i<num/2;++i)
	{
		if(num%i==0)
		{
			flag=1;
			break;
		}
	}
	return flag;
}

int main(void)
{
	int num1,num2,i,flag=0;

	printf("Enter two numbers(intervals): ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&num1,&num2);

	printf("Prime numbers between %d and %d are: ",num1,num2);
	for(i=num1+1;i<num2;++i)
	{
		flag=prime(i);
		if (flag==0)
		{
			printf("%d ",i);
		}
	}
	return EXIT_SUCCESS;
}