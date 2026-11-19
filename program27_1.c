//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which accept string from user and count number of capital characters.
// Description  : It is used to count capital characters.
// Input        : Marvellous Multi OS
// Output       : 4    
// Author       : Namrata Balasaheb Kokale
// Date         : 20/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountCapital(char *str)  
{
    int iCnt = 0, iCountCapital = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCnt++;
        }
      str++;
    }

     return iCnt;
}
   
int main()
{
    char Arr[20];
    int iRet = 0;
    
    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

   iRet = CountCapital(Arr);

   printf("%d",iRet);

    return EXIT_SUCCESS;
}