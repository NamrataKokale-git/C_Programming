//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Write a program from user and Display its table in Reverse.

// Description  : It is used to print a table in Reverse format.
// Input        : 2
// Output       : 20    18  16  14  12  10  8   6   4   2
// Author       : Namrata Balasaheb Kokale
// Date         : 1/11/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void TableRev(int iNO)
{
    int iCnt = 0;

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iNO *iCnt);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    TableRev(iValue);

    return EXIT_SUCCESS;
}