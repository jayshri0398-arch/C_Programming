//Assignment25_5
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplaySchedule
// Description   : Accept division from user and depends on the division display exam timing.
// Input         : Character
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 19/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////

void DisplaySchedule(char ch)
{
    if(ch == 'A' || ch == 'a')
    {
        printf("Your exam at 7.00 AM\n");
    }
    else if(ch == 'B' || ch == 'b')
    {
        printf("Your exam at 8.30 AM\n");
    }
    else if(ch == 'C' || ch == 'c')
    {
        printf("Your exam at 9.20 AM\n");
    }
    else if(ch == 'D' || ch == 'd')
    {
        printf("Your exam at 10.30 AM\n");
    }
    else
    {
        printf("Invalid division\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your devision  : ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}