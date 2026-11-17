//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which accept string from user and accept one character.check whether that character is present in string or not.

// Description  : It is used to check characters in string or not.
// Input        : "Marvellous Multi OS"
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
BOOL ChkChar(char * str, char ch)
{  
    while(*str != '\0')
    {
    if(*str == ch)
    {
        return TRUE;
    }
     str++;
    
    }
         return FALSE;
    }

int main()
{
    char arr[20];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter string");
    scanf("%[^\n]",arr);

    printf("Enter the  Character");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {

        printf("Character Found");
    }
    else
    {
        printf("Character not Found");
    }

    return EXIT_SUCCESS;
}
