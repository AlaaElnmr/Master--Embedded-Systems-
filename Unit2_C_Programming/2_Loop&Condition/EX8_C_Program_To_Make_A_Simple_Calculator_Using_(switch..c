/*
 ======================================================================================================================
 Name        : EX8_C_Program_To_Make_A_Simple_Calculator_Using_(switch..case).
 Author      : Alaa Jamal Mahmoud.
 Created on	 : March 3, 2024.
 Description : Unit_2 C_Progtamming >> Assignment_2 Loop&Condition.
 ======================================================================================================================
 */
 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float num1,num2,ans=0;
	char operator;
	printf("Enter operator + or - or * or / :");
	fflush(stdin);fflush(stdout);
	scanf("%c",&operator);

	printf("Enter two operands:");
	fflush(stdin);fflush(stdout);
	scanf("%f%f",&num1,&num2);

	switch(operator)
	{
	case '+':
		printf("%.1f + %.1f = %.1f",num1,num2,num1+num2);
		break;
	case '-':
		printf("%.1f - %.1f = %.1f",num1,num2,num1-num2);
		break;
	case '*':
		printf("%.1f * %.1f = %.1f",num1,num2,num1*num2);
		break;
	case '/':
		printf("%.1f / %.1f = %.1f",num1,num2,num1/num2);
		break;
	default:
		printf("Erorr!!! operator isn't correct");
		break;
	}
	return EXIT_SUCCESS;
}