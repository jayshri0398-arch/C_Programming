//
#include<stdio.h>
#include<stdlib.h>

float AverageDigit(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    int iCount = 0;
    float fRet = 0.0f;

        while(iNo!=0)
        {
    
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo/10;
            iCount ++;
        }

        fRet = (iSum / iCount);
        return fRet;

}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    fRet = AverageDigits(iValue);

    printf("Number of digits : %f\n",fRet);

    return EXIT_SUCCESS;
}