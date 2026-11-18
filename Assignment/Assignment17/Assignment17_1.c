//Assignment17_1
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : Accept number of rows and columns from user and display the pattern
// Input         : Integer, Integer
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 15/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////

int digit (int iNo)
{
    int Temp = 0,iSum = 0, iRet = 0;
    
    Temp = iNo;
    while(Temp != 0)
    {
        iRet = Temp % 10;
        iSum = iSum +iRet;
        Temp = Temp / 10;
    }
    return iSum;
}
   
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iNum = 0, iAns = 0;

    iNum = 1;
    
    for(i = 1; i <= iRow; i++)
        {

            for(j = 1; j <= iCol; j++, iNum++)
                {
                    iAns = digit(iNum);
                    printf("%d\t",iAns);
                }
            printf("\n");
        }    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns :");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);
    
    return EXIT_SUCCESS;
}