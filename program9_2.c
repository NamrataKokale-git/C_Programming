//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Accept Amount in US dollar and return its corresponding value in indian currency.

// Description  : It is used  for convert.
// Input        : 10 $ 
// Output       : 700 Rs.
// Author       : Namrata Balasaheb Kokale
// Date         : 3/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int DollarTOINR(int iNO)
{
    return iNO * 70;
    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD");
    scanf("%d",&iValue);

    iRet = DollarTOINR(iValue);

    printf("Value in INR is %d",iRet);
    return EXIT_SUCCESS;
}