#include<stdio.h>
#include<stdlib.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    printf("Factor of %d are : \n",iNo);

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }    
    }
}

int main()
{
    int iValue = 0;
   
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);
    
    return EXIT_SUCCESS;
}

// Time complexity : O(N)
    
    