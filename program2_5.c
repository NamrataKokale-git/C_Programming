
///////////////////////////////////////////////////////////////
//
// Function Name : ChkEven
// Description   : It is used to check whether the
//                 given number is even or odd.
// Input         : Integer
// Output        : Boolean (TRUE/FALSE)
// Author        : Namrata Balasaheb Kokale
// Date          : 21/10/2026
//
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNO)
{
    if(iNO % 2 == 0)
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
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == TRUE)
    {
    printf("Number is Even\n");
    }
    else
    {
    printf("Number is Odd\n");
    }

     return 0;

}


