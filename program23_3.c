//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which accept string from user and accept one character.Return index of first occurence of that character.

// Description  : It is used return index of first occurence of character in string.
// Input        : "Marvellous Multi OS" (M)
// Output       : 0     
// Author       : Namrata Balasaheb Kokale
// Date         : 16/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

#include<stdio.h>
#include<stdlib.h>

int FirstChar(char * str, char ch)
{   
    int iCount = 0;

    while(*str != '\0')
    {
    if(*str == ch)
    {
      return iCount;
    }
     str++;
    }
    return -1;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string");
    scanf("%[^'\n']s", arr);

    printf("Enter the Character");
    scanf(" %c", &cValue);

    iRet = FirstChar(arr, cValue);

    printf("Character location is %d", iRet);
    
   return EXIT_SUCCESS;
}
