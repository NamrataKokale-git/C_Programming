//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Accept number from rows and number of columns from user and display below pattern.
// Description  : It is used for display pattern.
// Input        : 8    
// Output       : 2     4    6    8    10    12    14    16         
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
         printf("%d\t" , i * 2);
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