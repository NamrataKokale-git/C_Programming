//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Write a program from user and Display its table.

// Description  : It is used to print a table.
// Input        : 2
// Output       : 2     4   6   8   10  12  16  18  20
// Author       : Namrata Balasaheb Kokale
// Date         : 1/11/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Table(int iNO)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t",iNO *iCnt);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Table(iValue);

    return EXIT_SUCCESS;
}