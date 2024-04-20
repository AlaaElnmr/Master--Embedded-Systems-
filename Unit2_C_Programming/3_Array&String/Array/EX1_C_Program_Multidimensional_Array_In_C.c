/*
 ======================================================================================================================
 Name        : EX1_C_Program_Multidimensional_Array_In_C.
 Author      : Alaa Jamal Mahmoud.
 Created on	 : March 10, 2024.
 Description : Unit_2 C_Progtamming >> Assignment_3 Array.
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int r,c;
	float matrix1[2][2],matrix2[2][2],matrix_ans[2][2];

	printf("Enter the elements of 1st matrix\n");

	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("Enter a%d%d: ",r+1,c+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&matrix1[r][c]);
		}

	}

	printf("Enter the elements of 2st matrix\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("Enter b%d%d: ",r+1,c+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&matrix2[r][c]);
		}

	}

	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			matrix_ans[r][c]=matrix1[r][c]+matrix2[r][c];
		}

	}
	printf("Sum Of Matrix:\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("%.1f\t ",matrix_ans[r][c]);
			if(c==1)
			{
				printf("\n");
			}
		}
	}

	return EXIT_SUCCESS;
}