/////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Accept number from user and print till that number on screen

// Description  : It is used to linear pattern printing.
// Input        : 8 
// Output       : 1   2    3    4     5     6     7     8
// Author       : Namrata Balasaheb Kokale
// Date         : 1/11/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int iNO)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNO; iCnt++)
    {
        printf("%d\t",iCnt);
        
    }
    printf("\n");

}

 int main()
 {
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
 }