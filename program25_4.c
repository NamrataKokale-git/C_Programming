//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which Accept character from user and check whether it is small case or not.(a-z)
// Description  : It is used to check whether it is small case or not.
// Input        : g
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

BOOL ChkSmall(char ch)
{  
    if((ch >= 'a' && ch <= 'z'))
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

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
         printf(" It is Small Case Character");
    }
    else
    {
        printf(" It is not a Small Case Character");
    }

     return EXIT_SUCCESS;
}
