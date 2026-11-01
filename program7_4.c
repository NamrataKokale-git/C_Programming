/////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Accept  N number from user and print odd numbers  up to N

// Description  : It is used to print  odd numbers.
// Input        : 18
// Output       : 1   3   5   7   9   11   13   
// Author       : Namrata Balasaheb Kokale
// Date         : 1/11/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void OddDisplay(int iNO)
{
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <= iNO ; iCnt = iCnt+=2)
    {
        printf("%d\t",iCnt);
       
    }
    printf("\n");

}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return EXIT_SUCCESS;
}