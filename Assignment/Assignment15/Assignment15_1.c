//Assignment15_1
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : main 
// Description   : Accept name from user and display that name.
// Input         : None
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 04/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Name[30];

    printf("Please enter full name : ");
    scanf("%[^'\n']s",Name);

    printf("Your name is : %s\n",Name);

    return EXIT_SUCCESS;    
}