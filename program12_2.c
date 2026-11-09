//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which accept number from user and check whether it contains 0 in or not.

// Description  : It is ussed to check 0 in given input.
// Input        : 2395
// Output       : There is no zero.
// Author       : Namrata Balasaheb Kokale
// Date         : 6/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNO)
{
    int iDigit = 0;

    while(iNO != 0)
    
    {
        iDigit = iNO % 10;
    
    if(iDigit == 0)
    {
        return TRUE;
    }
        iNO = iNO / 10;
    }
    return FALSE;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("There is no zero");
    }

    return EXIT_SUCCESS;

}

