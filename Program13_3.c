//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which accept number from user and return the count of digits in between 3 and 7.

// Description  : It is used for count digits in between 3 and 7.
// Input        : 2395
// Output       : 2
// Author       : Namrata Balasaheb Kokale
// Date         : 7/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountRange(int iNO)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNO < 0)
    {
        iNO = -iNO;
    }

    while(iNO !=0)
    {
        iDigit = iNO % 10;

        if(iDigit >= 3 && iDigit <= 7)
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

    iRet = CountRange(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;

}