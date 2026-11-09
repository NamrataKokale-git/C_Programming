//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which accept number from user and display its digits in reverse order.

// Description  : It is ussed to display digits in reverse order.
// Input        : 2395
// Output       : 5923
// Author       : Namrata Balasaheb Kokale
// Date         : 6/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(int iNO)
{
    int iDigit = 0;

    if(iNO < 0)
    {
       iNO = -iNO; 
    }
    while(iNO != 0)
    {
        iDigit = iNO % 10;
        printf("%d",iDigit);
        iNO = iNO / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}