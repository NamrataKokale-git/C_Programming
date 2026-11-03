//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : program which accept area in square feet and convert it into square meter.

// Description  : It is used convert square feet into square meter.
// Input        : 5
// Output       : 0.464515
// Author       : Namrata Balasaheb Kokale
// Date         : 3/10/2026
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double SquareMeter(int iValue)
{
    return iValue * 0.0929;
    
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in square feet");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area of square feet = %lf\n",dRet);

    return EXIT_SUCCESS;
}