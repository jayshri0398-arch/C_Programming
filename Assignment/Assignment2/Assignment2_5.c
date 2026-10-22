#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Check Even
// Description   : This program checks whether a given number is even or not.
// Input         : Integer
// Output        : Bool
// Author        : Jayashri Ramchandra Thorat
// Date          : 18/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }


}

int main()
{
    int iValue = 0;
    BOOL bRet= FALSE;
    
    printf("Enter number \n");
    scanf("%d",&iValue);
    
    bRet=CheckEven(iValue);

    if(bRet==TRUE)
    {
        printf("Even no");
    }
    else
    {
        printf("ODD No");
    }


    return 0;
}