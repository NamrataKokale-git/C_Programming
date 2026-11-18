//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which Accept character from user and check whether it is digit or not.(0-9)
// Description  : It is used to check whether it is digit or not.
// Input        : 7
// Output       : TRUE     
// Author       : Namrata Balasaheb Kokale
// Date         : 17/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL;

BOOL ChkDigit(char ch)
{  
    if((ch >= '0' && ch <= '9'))
    {
        return TRUE;
    }
     return FALSE;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character");
    scanf(" %c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
         printf(" It is Digit");
    }
    else
    {
        printf(" It is not a Digit");
    }

     return EXIT_SUCCESS;
}
