//////////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckDivisible
// Description   : It is used to check whether a number is divisible by 5 or not
// Input         : 25
// Output        : Divisible by 5
// Author        : Namrata Balasaheb Kokale
// Date          : 20/10/2026
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int Check( int iNO)
{
if((iNO % 5) == 0)
{
    return TRUE;
}
else
{
    return FALSE;
}
}

int main()
{
    int ivalue = 0;
    BOOL bRet = FALSE;

    printf("Enter number :\n");
    scanf("%d\n" , &ivalue);

    bRet = Check(ivalue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }
    return 0;
}

