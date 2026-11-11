//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which accept total marks and obtained marks from user and calculate percentage .

// Description  : It is used for calculate percentage.
// Input        : 1000   745
// Output       : 74.5%
// Author       : Namrata Balasaheb Kokale
// Date         : 8/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

float Percentage(float fNO1, float fNO2)
{
    float fAns = 0.0;

    fAns = (fNO2 / fNO1) * 100;

    return fAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is : %.2f\n", fRet);

    return EXIT_SUCCESS;

}