//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which accept number from user and display all its all non factors..

// Description  : It is used for display its all factors .
// Input        : 12
// Output       : 5  7   8   9  10  11
// Author       : Namrata Balasaheb Kokale
// Date         : 7/10/2026
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void NonFact(int iNO)
{
  int iCnt = 0;


  for(iCnt = 1; iCnt <= iNO; iCnt++)
  {
    if(iNO % iCnt != 0)
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

    NonFact(iValue);

    return EXIT_SUCCESS;
}