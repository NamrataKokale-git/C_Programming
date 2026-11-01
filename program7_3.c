/////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Accept number from user and print its number line 

// Description  : It is used to print a number line.
// Input        : 4
// Output       : -4   -3    -2    -1     0     1    2    3   4
// Author       : Namrata Balasaheb Kokale
// Date         : 1/11/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int iNO)
{
    int iCnt = 0;
    for(iCnt = -iNO; iCnt <= iNO; iCnt++)
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