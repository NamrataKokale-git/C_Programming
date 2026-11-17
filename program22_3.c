//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Accept number from rows and number of columns from user and display below pattern.
// Description  : It is used for display pattern.
// Input        : 5    
// Output       : 1    *   2  *   3   *   4   *   5   *   
// Author       : Namrata Balasaheb Kokale
// Date         : 15/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNO)
{
    int i = 0 ;
    
  for(i = 1; i <= iNO; i++)
    {
         printf("%d\t*\t" , i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0 ;
}