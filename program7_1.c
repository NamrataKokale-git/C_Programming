//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Accept number from user and print that number of $ & * on screen

// Description  : It is used to linear pattern printing.
// Input        : 5  
// Output       : $    *   $   *   $   *   $   *    $   *
// Author       : Namrata Balasaheb Kokale
// Date         : 1/11/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void pattern(int iNO)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNO; iCnt++)
    {
        printf("$\t*\t",iCnt);
    }
    printf("\n");

}

 int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    pattern(iValue);

    return EXIT_SUCCESS;
}