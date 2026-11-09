/////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which accept range from user and display  all  numbers in between that range in reverse order.

// Description  : It is used to display of all numbers in between that range in reverse order.
// Input        : 23   30
// Output       : 108
// Author       : Namrata Balasaheb Kokale
// Date         : 6/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt= iStart;
    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
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

    RangeDisplayRev(iValue1, iValue2);

    return EXIT_SUCCESS;

}
