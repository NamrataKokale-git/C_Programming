//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which accept string from user and convert it into lower case.
// Description  : It is used to convert it into lower case.
// Input        : Marvellous Multi OS
// Output       : marvellous multi os    
// Author       : Namrata Balasaheb Kokale
// Date         : 17/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Strlwrx(char * str)
{   

    while(*str != '\0')
    {
        
        if((*str >= 'A') && (*str <= 'Z'))
          
        {
            *str = *str + 32;
            
        }
        str++;
    }

}

int main()
{
    char arr[20];

    printf("Enter string");
    scanf("%[^'\n']s", arr);

     Strlwrx(arr);

    printf("Modified string is %s", arr);
    
   return EXIT_SUCCESS;
}
