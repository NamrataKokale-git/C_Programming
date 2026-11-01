/////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Accept  N number from user and print multiples of N

// Description  : It is used to print multiples.
// Input        : 4
// Output       : 4   8   12   16   20      
// Author       : Namrata Balasaheb Kokale
// Date         : 1/11/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void MultipleDisplay(int iNO)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t", iNO * iCnt);
        
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number :\n");
    scanf("%d",&iValue);
    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}