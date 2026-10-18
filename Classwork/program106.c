#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0, iSum = 0;

    printf("Factor of %d are : \n",iNo);
    for(iCnt = 1; iCnt <= iNo/2 ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }               
    }

    return (iSum == iNo);
}

int main()
{
    int iValue = 0;
    bool bRet = false;
   
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("it is perfect number \n");
    }
    else{
        printf("it is not perfect number\n");
    }
        
    return EXIT_SUCCESS;
}

// Time complexity : O(N/2)
    
    