#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("Uppercase");
    }
    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("Lowercase");
    }
    else if((cValue >= '0' ) && (cValue <= '9'))
    {
        printf("digit");
    }
    else
    {
        printf("Symbol");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf("%c" , &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}