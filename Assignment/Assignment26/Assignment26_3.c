    //Assignment26_3
    #include<stdio.h>
    #include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Accept character from user if capital display all the character till 'Z' .
//                 if input character is small display in reverse order.
// Input         : Character
// Output        : None
// Author        : Jayashri Ramchandra Thorat
// Date          : 19/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////
    
    void Display(char ch)
    {
        int i = 0;
        if(ch >= 'A' && ch <= 'Z')
        {
            while(ch <= 'Z')
            {
                printf("%c\t",ch);
                ch++;
            }
        }
        else if(ch >= 'a' && ch <= 'z')
        {
            while(ch >= 'a')
            {
                printf("%c\t",ch);
                ch--;
            }
        }
        else
        {
            return;
        }
    }
    
    int main()
    {
        char cValue = '\0';
    
        printf("Enter the character : ");
        scanf("%c",&cValue);
    
        Display(cValue);
    
        return EXIT_SUCCESS;
    } 