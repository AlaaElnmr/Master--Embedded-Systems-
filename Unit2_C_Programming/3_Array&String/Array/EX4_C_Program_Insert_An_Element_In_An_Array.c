/*
 ======================================================================================================================
 Name        : EX4_C_Program_Insert_An_Element_In_An_Array.
 Author      : Alaa Jamal Mahmoud.
 Created on	 : March 10, 2024.
 Description : Unit_2 C_Progtamming >> Assignment_3 Array.
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int arr[20],num,i,elements,location;

	printf("Enter no of element :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	for(i=0; i<num ;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("\nEnter the element to be inserted :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&elements);

	printf("\nEnter the location :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&location);

	for(i=num;i<=location;i--)
	{
		arr[i]=arr[i-1];
	}
	num++;
	arr[location-1]=elements;

	for(i=0;i<num;i++)
		{
			printf("%d ",arr[i]);
		}
	return EXIT_SUCCESS;
}