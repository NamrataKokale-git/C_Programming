//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Accept number from rows and number of columns from user and display below pattern.

// Description  : It is used for display pattern.
// Input        : iRow = 4      iCol = 4
// Output       : 1    2    3    4
//                1    *    *    4
//                1    *    *    4
//                1    2    3    4
// Author       : Namrata Balasaheb Kokale
// Date         : 13/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0 , j = 0;

    if(iRow != iCol)
    {
        printf("Invalid input");
        return;
    }

    for(i = 1; i<=iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if( i == 1 || i == iRow)
            {
                printf("%d\t" , j);
            }
            else if(j == 1)
            {
                printf("1\t");
            }
            else if(j == iCol)
            {
                printf("%d\t" , iCol);
            }
            else
            {
                printf("*\t");
            }

        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns");
    scanf("%d%d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0 ;
}