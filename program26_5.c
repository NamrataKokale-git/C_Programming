//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.
// Description  : It is used to display its  ASCII value in octal,decimal and hexadecimal format
// Input        : A
// Output       : 65
// Author       : Namrata Balasaheb Kokale
// Date         : 19/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    
    printf("ASCII Octal : %o\n",ch);
    printf("ASCII Decimal : %d\n",ch);
    printf("ASCII Hexadecimal : %X\n",ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character");
    scanf(" %c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}