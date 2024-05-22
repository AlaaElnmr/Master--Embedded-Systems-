/*
 ======================================================================================================================
 Name        : EX3_C_Program_To_Reverse_A_Sentence_Using_Recursion.
 Author      : Alaa Jamal Mahmoud.
 Created on	 : April 20, 2024.
 Description : Unit_2 C_Progtamming >> Assignment_4 Function.
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void reverse()
{
    char ch;
    scanf("%c",&ch);
    if(ch!='\n')
    {
        reverse();
        printf("%c",ch);
    }

}
int main()
{
    printf("Enter sentence : ");
    reverse();
    return 0;
}