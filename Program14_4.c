//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which accept number from user and return summation of all its non factors..

// Description  : It is used for display its all non factors .
// Input        : 12
// Output       : 50
// Author       : Namrata Balasaheb Kokale
// Date         : 7/10/2026
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int SumNonFact(int iNO)
{
    if(iNO < 0)
    {
        iNO = -iNO;
    }
    
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNO; iCnt++)
    {
        if(iNO % iCnt != 0)
        {
            iSum = iCnt + iSum;
            printf("%d\t", iCnt);
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("\n%d",iRet);

    return EXIT_SUCCESS;

}