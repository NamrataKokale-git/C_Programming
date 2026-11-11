//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which accept one number from user and check whether that number is greater than 100 or not .

// Description  : It is used for check whether number is greater or smaller.
// Input        : 101
// Output       : Greater
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

BOOL ChkGreater(int iNO)
{
    
    {
        if(iNO >= 100)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }

    }

}

int main()
{
    int iValue = 0;

    BOOL bRet = FALSE;

    printf("please enter number");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);
    if(bRet == TRUE)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }
    return 0;

}
