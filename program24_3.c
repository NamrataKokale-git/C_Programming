//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which accept string from user and toggle the case.
// Description  : It is used to toogle the case.
// Input        : Marvellous Multi OS  
// Output       : mARVELLOUS mULTI os  
// Author       : Namrata Balasaheb Kokale
// Date         : 17/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Strtogglex(char * str)
{   

    while(*str != '\0')
    {
        
        if((*str >= 'A') && (*str <= 'Z'))
          
        {
            *str = *str + 32;
            
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
             *str = *str - 32;
        }
        str++;
    }

}

int main()
{
    char arr[20];

    printf("Enter string");
    scanf("%[^'\n']s", arr);

     Strtogglex(arr);

    printf("Modified string is %s", arr);
    
   return EXIT_SUCCESS;
}
