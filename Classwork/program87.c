#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if((iNo % 3) == 0)
    {
        if((iNo % 5) == 0)
        {
            printf("It is Divisiable\n");
        }
        else
        {
            printf("it is not divisable\n");
        }
    }
    else
    {
        printf("It is not divisible");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}