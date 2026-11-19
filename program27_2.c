//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which accept string from user and count number of small characters.
// Description  : It is used to count number of small characters.
// Input        : Marvellous 
// Output       : 9    
// Author       : Namrata Balasaheb Kokale
// Date         : 20/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Countsmall(char *str)  
{
    int iCnt = 0, iCountsmall = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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

   iRet = Countsmall(Arr);

   printf("%d",iRet);

    return EXIT_SUCCESS;
}