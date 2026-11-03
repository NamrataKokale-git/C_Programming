//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program to find difference between Even and odd factorial of given number.

// Description  : It is used to find a difference between  Even and odd factorial of given number.
// Input        : 
// Output       : 8     (4 * 2)
// Author       : Namrata Balasaheb Kokale
// Date         : 3/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNO)
{
    int iCnt = 0;
    int iEvenfact= 1;
     int ioddfact = 1;

    if(iNO < 0)
    {
        iNO = -iNO;
    }
   
    for(iCnt = 1; iCnt <= iNO; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEvenfact = iEvenfact * iCnt;
        }
        else
        {
            ioddfact = ioddfact * iCnt;
        }
    }
    return (iEvenfact - ioddfact);
   
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);
    return EXIT_SUCCESS;
}