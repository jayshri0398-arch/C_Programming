#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Check Admission Eligiblity
// Description   : This program checks admission eligibility based on the students marks and age. 
// Input         : float, integer
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 21/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void CheckAdmission(float fMarks, int iAge)
{
    if((iAge < 0) || ((fMarks < 0) || (fMarks > 100)))
    {
        printf("Invalid input \n");
    }
    else if((fMarks >= 60) && (iAge >= 17))
    {
        printf("Eligible for Admission \n");
    }
    else
    {
        printf("Not Eligible \n");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age : ");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks,iAge);
    
    return EXIT_SUCCESS;
}