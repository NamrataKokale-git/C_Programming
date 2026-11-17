//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Accept number from rows and number of columns from user and display below pattern.
// Description  : It is used for display pattern.
// Input        : iRow = 3    iCol = 5
// Output       : 5    4    3    2    1  
//                5    4    3    2    1      
//                5    4    3    2    1            
// Author       : Namrata Balasaheb Kokale
// Date         : 15/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void pattern(int iRow, int iCol)
{
    int i = 0 , j = 0;

    for(i = 1 ; i <=iRow; i++)
    {

        for(j = 1; j <= iCol; j++)
        {
            {
            printf("%d\t", iCol - j + 1);
            }
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter number of rows and columns");
    scanf("%d%d",&iValue1, &iValue2);

    pattern(iValue1 , iValue2);

    return EXIT_SUCCESS;
}