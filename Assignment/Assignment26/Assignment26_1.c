//Assignment26_1
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayASCII
// Description   : Display ASCII table.(decimal,Hexadecimal,octal,character)
// Input         : None
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 19/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////

void DisplayASCII()
{
    int i = 0;

    for(i = 0; i<= 255; i++)
        {
            printf("%d\t%X\t%o\t%c\n",i,i,i,(unsigned char)i);
        }
}

int main()
{
    DisplayASCII();
    
    return EXIT_SUCCESS;
}