//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which accept string from user and display only digits from that string.
// Description  : It is used to display digits from that string.
// Input        : Marve89llous121   
// Output       : 89121 
// Author       : Namrata Balasaheb Kokale
// Date         : 17/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(char * str)
{   

    while(*str != '\0')
    {
        
        if((*str >= '0') && (*str <= '9'))
          
        {
            printf("%c", *str);
            
        }
        str++;
    }

}

int main()
{
    char arr[20];

    printf("Enter string");
    scanf("%[^'\n']s", arr);

     DisplayDigit(arr);

    printf("Modified string is %s", arr);
    
   return EXIT_SUCCESS;
}
