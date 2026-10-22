#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display Grade
// Description   : This program displays the grade based on the marks obtained. 
// Input         : Float
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 20/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayGrade(float fMarks)
{
    if((fMarks <= 100) && (fMarks >= 90))
    {
        printf("Grade A \n");
    }
    else if((fMarks >= 75) && (fMarks <= 89))
    {
        printf("Grade B \n");
    }
    else if((fMarks >= 60) && (fMarks <= 74))
    {
        printf("Grade C \n");
    }
    else if((fMarks >=40) && (fMarks <= 59))
    {
       printf("Grade D \n"); 
    }
    else if( fMarks <= 40)
    {
        printf("Fail \n");
    }  
    else
    {
        printf("Invalid Marks \n");
    }
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter marks: ");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);
    
    return EXIT_SUCCESS;
}