///////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : It is used to check whether the
//                 given number is less than 10 or not.
//                 If the number is less than 10,
//                 it displays "Hello"; otherwise
//                 it displays "Demo".
// Input         : Integer
// Output        : String
// Author        : Namrata Balasaheb Kokale
// Date          : 21/10/2026
//
//
///////////////////////////////////////////////////////////////
 
#include<stdio.h>
#include<stdlib.h>

void Display(int iNO)
{
    int iCnt = 0;
    if(iNO < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
    