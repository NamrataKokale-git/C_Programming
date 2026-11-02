//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Write a program for facrorial of given number.

// Description  : It is used to factors of number..
// Input        : 5
// Output       : 120  (5 * 4 * 3 *2  *1)
// Author       : Namrata Balasaheb Kokale
// Date         : 1/11/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNO)
{
    int iCnt = 0;
    int ifact = 1;

    for(iCnt = 1; iCnt <= iNO; iCnt++)
    {
        ifact = ifact * iCnt;
    }
    return ifact;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d",iRet);

    return EXIT_SUCCESS;
}