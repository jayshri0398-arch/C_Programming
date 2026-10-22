#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Check Voting Eligibility
// Description   : This program checks voting eligibility based on age.
// Input         : Integer
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 19/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void checkVotingEligibility(int iAge)
{
    if(iAge < 0)
    {
        printf("Invalid Age\n");
    }
    else if(iAge < 18) 
    {
        printf("Not Eligible for Voting\n");
    }
    else
    {
        printf("Eligible for Voting\n");
    }
}

int main() 
{
    int iAge = 0;

    printf("Enter your age: ");
    scanf("%d",&iAge);

    checkVotingEligibility(iAge);

    return EXIT_SUCCESS;
}