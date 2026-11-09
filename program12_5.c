//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which accept number from user and count frequency of less than 6.

// Description  : It is ussed for count frequency.
// Input        : 2395
// Output       : 0
// Author       : Namrata Balasaheb Kokale
// Date         : 6/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountTwo(int iNO)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNO < 0)
    {
        iNO = -iNO;
    }

    while(iNO != 0)
    {
        iDigit = iNO % 10;
        if(iDigit <= 6)
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

    iRet = CountTwo(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;

}