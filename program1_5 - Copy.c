//////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : It is used to print '*' on screen based on the number entered by user.
// Input         : 5
// Output        : * * * * *
// Author        : Namrata Balasaheb Kokale
// Date          : 20/10/2026
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Accept(int iNO)
{
    int iCnt = 0;

    for(iCnt =1; iCnt <= 5 ; iCnt++)
    {
        printf("*");
    } 
}

int main()
{
    int ivalue = 0;
    ivalue = 5;

    Accept(ivalue);
    return 0;
}