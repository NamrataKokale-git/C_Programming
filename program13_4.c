//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which accept number from user and return multiplication of digits.

// Description  : It is used for return multiplication of digits.
// Input        : 2395
// Output       : 270
// Author       : Namrata Balasaheb Kokale
// Date         : 7/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int MulDigits(int iNO)
{
    int iDigit = 0;
    int iMult =1; 

    while(iNO != 0)
    {
        iDigit = iNO % 10;
        iMult = iMult * iDigit;
        iNO = iNO / 10;
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = MulDigits(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}
