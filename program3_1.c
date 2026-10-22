///////////////////////////////////////////////////////////////
//
// Function Name : printEven
// Description   : It is used to display the first
//                 N even numbers on screen.
// Input         : Integer
// Output        : Integer
// Author        : Namrata Balasaheb Kokale
// Date          : 21/10/2026
//
//
///////////////////////////////////////////////////////////////

#include<stdio.h>
 void printEven(int iNO)
{
    if(iNO <= 0)
   {
        return ;
      
   }
    int iCnt = 1;
   {
   while(iCnt<=iNO)
   {
      printf("%d\t",iCnt*2);
      iCnt++;
   }
   }
}

 int main()
   {
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);
    printEven(iValue);
    return 0;
   }