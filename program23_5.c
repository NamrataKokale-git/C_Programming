//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which accept string from reverse that string in a place.

// Description  : It is used reverse that string in place.
// Input        : abcd
// Output       : dcba    
// Author       : Namrata Balasaheb Kokale
// Date         : 16/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void StrRevX(char * str)
{   
    char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
      temp = *start;
      *start = *end;
      *end = temp;

      start++;
      end--;
    }
    
}

int main()
{
    char arr[20];

    printf("Enter string");
    scanf("%[^'\n']s", arr);

     StrRevX(arr);

    printf("Modifiedstring is %s", arr);
    
   return EXIT_SUCCESS;
}
