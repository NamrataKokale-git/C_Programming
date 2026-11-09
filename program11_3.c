/////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which accept range from user and display addition of all numbers in between that range.

// Description  : It is used to display addition of all numbers in between that range.
// Input        : 23   30
// Output       : 212
// Author       : Namrata Balasaheb Kokale
// Date         : 6/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt= 0, iSum = 0;
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt > 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point");
    scanf("%d",&iValue1);

    printf("Enter ending point");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);

    printf("Addition is %d", iRet);

    return EXIT_SUCCESS;

}
