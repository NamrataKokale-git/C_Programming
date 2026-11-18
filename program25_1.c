//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which Accept character from user and check whether it is alphabet or not.(A-Z a-z)
// Description  : It is used to check whether it is alphabet or not.
// Input        : F
// Output       : TRUE      
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
BOOL ChkAlpha(char ch)
{  

    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        return TRUE;
    }
        return FALSE;
}

int main()
{
    char cValue =  '\0';
    BOOL bRet = FALSE;

    printf("Enter the character");
    scanf(" %c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {

        printf(" It is Character");
    }
    else
    {
        printf(" It is not a Character");
    }

    return EXIT_SUCCESS;
}
