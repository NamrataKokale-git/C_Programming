//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Accept character from user.If it is capital then display all the characters from the input characters till Z.if input character is small then print all the characters in reverse order till .In other cases return directly.
// Description  : It is used to display all characters from given input which is capital or small.
// Input        : Q
// Output       :  Q    R   S   T   U   V   W   X   Y   Z   
// Author       : Namrata Balasaheb Kokale
// Date         : 19/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    char c = '\0';

        if(ch >= 'A' && ch <= 'Z')  
        {
            for(c = ch; c <= 'Z'; c++)
            {
               printf("%c\t",c);    
            }
        }
        else if( ch >= 'a' && ch <= 'z')
        {   
            for(c = ch; c >= 'a'; c--)
            {
               printf("%c\t",c);    
            }
        }
        else
        {
            printf("%c\t", c);
        }

}

int main()
{
    char cValue = '\0';

    printf("Enter the character");
    scanf(" %c",&cValue);
    
    Display(cValue);

    return EXIT_SUCCESS;
}