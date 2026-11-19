//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which accept string from user and return difference between frequency of small characters and frequency of capital characters.
// Description  : It is used to difference between frequency of small and capital characters.
// Input        : MarvellouS 
// Output       : 6     (8-2)  
// Author       : Namrata Balasaheb Kokale
// Date         : 20/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Difference(char *str)  
{
    int iSmall = 0, iCapital = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z') 
        {
           iSmall++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCapital++;
        }
      str++;
    }

     return iSmall - iCapital;
}
   
int main()
{
    char Arr[20];
    int iRet = 0;
    
    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}