//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which accept string from user and accept one character.Return frequency of that character.

// Description  : It is used return frequency of character in string.
// Input        : "Marvellous Multi OS" (M)
// Output       : 2     
// Author       : Namrata Balasaheb Kokale
// Date         : 16/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

#include<stdio.h>
#include<stdlib.h>

int CountChar(char * str, char ch)
{   
    int iCount = 0;

    while(*str != '\0')
    {
    if(*str == ch)
     iCount++;
     str++;
    
    }
        return iCount;
    }

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string");
    scanf("%[^\n]s",arr);

    printf("Enter the  Character");
    scanf(" %c",&cValue);

    iRet = CountChar(arr, cValue);

    printf("Character frequency is %d", iRet);
    
   return EXIT_SUCCESS;
}
