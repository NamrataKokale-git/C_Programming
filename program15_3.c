//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which accept two numbers and check whether that number are equal or not .

// Description  : It is used for check whether number is equal or not.
// Input        : 10    10
// Output       : Equal
// Author       : Namrata Balasaheb Kokale
// Date         : 8/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNO1, int iNO2)


{
    if(iNO1 == iNO2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    BOOL bRet = FALSE;

    printf("please enter two numbers");
    scanf("%d%d",&iValue1,&iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet == TRUE)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return EXIT_SUCCESS;
}