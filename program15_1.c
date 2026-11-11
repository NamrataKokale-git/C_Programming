//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which accept name from user and print that name.

// Description  : It is used for print name and string.
// Input        : Piyush Khairnar
// Output       : Piyush Khairnar
// Author       : Namrata Balasaheb Kokale
// Date         : 8/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    char Name[30];
    printf("Please enter full name");
    scanf("%[^'\n']s",Name);

    printf("Your name is %s",Name);

    return 0;

}