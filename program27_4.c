//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which accept string from user and check whether  it contains vowels in it or not.
// Description  : It is used to check whether it contains vowels or not in given input.
// Input        : MarvellouS 
// Output       : TRUE  
// Author       : Namrata Balasaheb Kokale
// Date         : 20/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)  
{
     while(*str != 0)
        {
        if( (*str == 'A'|| *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') || (*str == 'a'|| *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')) 
        {
           return TRUE;
        }
        str++;
       } 
           return FALSE;
}
      
int main()
{
    char Arr[20];
    BOOL bRet = FALSE;
    
    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVowel(Arr);
    if(bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return EXIT_SUCCESS;
}