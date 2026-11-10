//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which accept number from user and display its factors in decreasing order.

// Description  : It is used for display its factors in decresing order.
// Input        : 12
// Output       : 6  4   3   2   1
// Author       : Namrata Balasaheb Kokale
// Date         : 7/10/2026
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void FactRev(int iNO)
{
  int iCnt = 0;


  for(iCnt = iNO/2; iCnt >= 1; iCnt --)
  {
    if(iNO % iCnt == 0)
    {
        printf("%d\t", iCnt);
    }
  }

}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    FactRev(iValue);

    return EXIT_SUCCESS;
}