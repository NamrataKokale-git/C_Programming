/////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which accept range from user and display all numbers in between that range .

// Description  : It is used to range.
// Input        : 23 25
// Output       : 23    24  25  26  27  28  29  30  31  32  33  34  35
// Author       : Namrata Balasaheb Kokale
// Date         : 6/10/2026
//
/////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = iStart;
    for(iCnt = iStart; iCnt<=iEnd; iCnt++)
    {
        printf("%d\t",iCnt);
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point");
    scanf("%d",&iValue1);

    printf("Enter ending point");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1, iValue2);

    return EXIT_SUCCESS;
}