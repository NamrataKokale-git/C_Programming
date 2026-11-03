//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program to find odd factorial of given number.

// Description  : It is used to find a odd factorial of given number.
// Input        : 5
// Output       : 8     (4 * 2)
// Author       : Namrata Balasaheb Kokale
// Date         : 3/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int OddFactorial(int iNO)
{
    int iCnt = 0;
    int ifact= 1;

    if(iNO < 0)
    {
        iNO = -iNO;
    }
   
    for(iCnt = 1; iCnt <= iNO; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            ifact = ifact * iCnt;
        }
    }
    return ifact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Even Factorial of number is %d",iRet);
    return EXIT_SUCCESS;
}