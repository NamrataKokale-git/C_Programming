/////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which accept range from user and display  all even numbers in between that range.

// Description  : It is used to display all even numbers in between that range.
// Input        : 23    25
// Output       : 24    26  28  30  32  34
// Author       : Namrata Balasaheb Kokale
// Date         : 6/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = iStart;
    for(iCnt = iStart; iCnt<=iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
        }

    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point");
    scanf("%d",&iValue1);

    printf("Enter Ending point");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return EXIT_SUCCESS;

}
