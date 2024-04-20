/*
 ======================================================================================================================
 Name        : EX5_C_Program_Search_An_Element_In_Arrays.
 Author      : Alaa Jamal Mahmoud.
 Created on	 : March 10, 2024.
 Description : Unit_2 C_Progtamming >> Assignment_3 Array.
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int num,arr[10],i,element;
	printf("Enter no of element :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	printf("Enter element of array :\n");
	fflush(stdin);fflush(stdout);
	//scan elements of array
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Enter the elements to be searched :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&element);

	for(i=0;i<num;i++)
	{
		if(element==arr[i])
		{
			printf("Number found at the location = %d\n",i+1);
			break;
		}
		if((element!=arr[i]) && (i==num))
		{
			printf("Number not found");
		}
	}
	return EXIT_SUCCESS;
}