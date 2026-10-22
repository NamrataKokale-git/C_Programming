///////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : It is used to display '*' on screen
//                 until the given number becomes 5.
// Input         : Integer
// Output        : Character (*)
// Author        : Namrata Balasaheb Kokale
// Date          : 21/10/26
//
//
///////////////////////////////////////////////////////////////
 
#include<stdio.h>
#include<stdlib.h>

void Display(int iNO)
{
    while(iNO > 5)
    {
        printf("*");
        iNO--;
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}