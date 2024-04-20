/*
 ======================================================================================================================
 Name        : EX2_C_Program_Calculate_Average_Using_Arrays.
 Author      : Alaa Jamal Mahmoud.
 Created on	 : March 10, 2024.
 Description : Unit_2 C_Progtamming >> Assignment_3 Array.
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,n;
	float num[20], sum=0,average=0;
	printf("Enter the number of data: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	if(n>100||n<=0)
	{
		printf("Error!!! num should in range 0 to 100.\n");
		printf("Enter the number of data again: %d");
		fflush(stdin);fflush(stdout);
		scanf("%d\n",&n);
	}
	else
	{
		for(i=0;i<n;i++)
		{
			printf("Enter number: ");
			fflush(stdin);fflush(stdout);
			scanf("%f",&num[i]);
			sum+=num[i];
		}
		average=sum/n;
		printf("Average = %.2f",average);
	}

	return EXIT_SUCCESS;
}
