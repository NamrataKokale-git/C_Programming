//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Divide two numbers

// Description  : It is used to performed Division
// Input        : 15  5   
// Output       : Division is 3
// Author       : Namrata Balasaheb Kokale
// Date         : 20/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int Divide(int iNO1, int iNO2)
{
    int iAns = 0;

    if(iNO1 % iNO2)
    {
        return -1;
    }

    iAns = iNO1 / iNO2;

    return iAns;
}

int main()
{
    int ivalue1 = 15, ivalue2 = 5;
    int iRet = 0;

    iRet = Divide(ivalue1,ivalue2);
    printf("Divison is %d", iRet);
}