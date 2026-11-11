//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which accept three numbers and prints its multiplication .

// Description  : It is used for print Multiplicaton.
// Input        : 5  4   7
// Output       : 140
// Author       : Namrata Balasaheb Kokale
// Date         : 8/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Multiply(int iNO1, int iNO2, int iNO3)
{
    int iMULT = 0;

    iMULT = iNO1 * iNO2 * iNO3;
    return iMULT;     

}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please enter three numbers");
    scanf("%d%d%d",&iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is : %d\n", iRet);

    return EXIT_SUCCESS;
}