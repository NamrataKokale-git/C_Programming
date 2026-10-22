///////////////////////////////////////////////////////////////
//
// Function Name : ChkVowel
// Description   : It is used to check whether the
//                 given character is a vowel or not.
// Input         : Character
// Output        : Boolean (TRUE/FALSE)
// Author        : Namrata Balasaheb Kokale
// Date          : 21/10/2026
//
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char ch)
{
    if(ch == 'A' || ch =='E' || ch == 'I' || ch == 'O' || ch =='U' || ch == 'a' || ch =='e' || ch == 'i' || ch == 'o' ||  ch =='u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet =  ChkVowel(cValue);

    if(bRet == 1)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}