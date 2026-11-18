//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which Accept character from user and check whether it is capital or not.(A-Z)
// Description  : It is used to check whether it is capital or not.
// Input        : F
// Output       : It is capital character.     
// Author       : Namrata Balasaheb Kokale
// Date         : 16/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL;

BOOL ChkCapital(char ch)
{  
    if((ch >= 'A' && ch <= 'Z'))
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
         printf(" It is Capital Character");
    }
    else
    {
        printf(" It is not a Capital Character");
    }

    return EXIT_SUCCESS;
}
