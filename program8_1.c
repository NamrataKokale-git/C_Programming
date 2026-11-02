//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Accept number from user and print it is small,medium and large using giving range.

// Description  : It is used to compare numbers and identify it is small or large.
// Input        : 75 
// Output       : Medium
// Author       : Namrata Balasaheb Kokale
// Date         : 1/11/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Number(int iNO)
{
    if(iNO <= 50)
    {
        printf("Small");
    }
    else if(iNO <= 100)
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}