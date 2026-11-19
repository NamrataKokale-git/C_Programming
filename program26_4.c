//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Accept character from user and check whether it is special symbol or not.
// Description  : It is used to display all characters from given input which is capital or small.
// Input        : @
// Output       : TRUE
// Author       : Namrata Balasaheb Kokale
// Date         : 19/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
 
typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }    
    
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is special Character");
    }
    else
    {
        printf("It is not special Character");
    }

    return EXIT_SUCCESS;
}