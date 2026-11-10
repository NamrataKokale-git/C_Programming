//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which accept number from user and return the count of odd digits.

// Description  : It is used for count odd digits.
// Input        : 2395
// Output       : 3
// Author       : Namrata Balasaheb Kokale
// Date         : 7/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountOdd(int iNO)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNO !=0)
    {
        iDigit = iNO % 10;

        if(iDigit  % 2 != 0)
        {
            iCount++;
        }

    iNO = iNO / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;

}