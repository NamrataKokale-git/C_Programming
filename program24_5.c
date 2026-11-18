//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which accept string from user and count number of white spaces.
// Description  : It is used to count number of white spaces.
// Input        : Marvellous   
// Output       : 0 
// Author       : Namrata Balasaheb Kokale
// Date         : 17/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountWhite(char * str)
{   
      int i = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
          
        {
          i++;  

        }
        str++;
    }
    return i;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string");
    scanf("%[^'\n]s",arr);

    iRet = CountWhite(arr);

    printf("%d",iRet);
    
   return EXIT_SUCCESS;
}
