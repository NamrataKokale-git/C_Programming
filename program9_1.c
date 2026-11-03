//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Accept number from user and display a pattern.

// Description  : It is used to display pattern.
// Input        : 5   
// Output       : *     *   *   *   *   #   #   #   #   #
// Author       : Namrata Balasaheb Kokale
// Date         : 3/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int iNO)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNO; iCnt++)
    {
        printf("*\t",iCnt);
    }

    for(iCnt = 1; iCnt <= iNO; iCnt++)
    {
        printf("#\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}