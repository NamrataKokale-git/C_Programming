///////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : It is used to print '*' on screen
//                 according to the number entered by user.
// Input         : Integer
// Output        : Character (*)
// Author        : Namrata Balasaheb Kokale
// Date          : 21/10/2026
//
///////////////////////////////////////////////////////////////
 
#include<stdio.h>
#include<stdlib.h>
void Display(int iNO)
{
    int iCnt = 0;

    while(iCnt < iNO)
    {
        printf("*");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}