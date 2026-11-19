//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which displays ASCII table.Table contains symbol,decimal,hexadecimal and octal representation of every member from 0 to 255.
// Description  : It is used to display ASCII Table.     
// Author       : Namrata Balasaheb Kokale
// Date         : 16/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayASCII()
{
    int i = 0;

    printf("Dec\tHEX\tOct\tChar\n");
    printf("----------------------------------\n");

    for(i = 0; i <= 255; i++)
    {
        printf("%d\t%X\t%o\t%c\n", i,i,i,i);
    }

}

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}