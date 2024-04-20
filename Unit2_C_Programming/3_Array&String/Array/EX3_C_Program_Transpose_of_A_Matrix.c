/*
 ======================================================================================================================
 Name        : EX3_C_Program_Transpose_of_A_Matrix.
 Author      : Alaa Jamal Mahmoud.
 Created on	 : March 10, 2024.
 Description : Unit_2 C_Progtamming >> Assignment_3 Array.
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int r,c,i,j;
	int matrix[5][5],transpose[5][5];
	printf("Enter rows and columns of matrix: ");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&r,&c);


	printf("Enter elements of matrix:\n");
	//take numbers of matrix
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter elements a%d%d: ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&matrix[i][j]);
		}
	}

	printf("Enter Matrix:\n");
	// display Matrix before
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d  ",matrix[i][j]);
			if(j==c-1)
			{
				printf("\n");
			}
		}
	}

	//transposematrix
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			transpose[j][i]=matrix[i][j];
		}
	}

	printf("Transpose Of Matrix:\n");
	// display Matrix after transpose
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d  ",transpose[i][j]);
			if(j==r-1)
			{
				printf("\n");
			}
		}
	}


	return EXIT_SUCCESS;
}
