/*
 ======================================================================================================================
 Name        : EX4_C_Program_To_Calculate_The_Power_Of_A_Number_Using_Recursion.
 Author      : Alaa Jamal Mahmoud.
 Created on	 : April 20, 2024.
 Description : Unit_2 C_Progtamming >> Assignment_4 Function.
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int power(int base,int exp)
{
    if(exp!=0)
    {
        return (base*(power(base,exp-1)));

    }
    return 1;

}
int main()
{
    int base,exp;
    printf("Enter base number : ");
    scanf("%d",&base);
    printf("Enter exp number : ");
    scanf("%d",&exp);
    printf("%d ^ %d = %d ",base,exp,power(base,exp));
    return 0;
}