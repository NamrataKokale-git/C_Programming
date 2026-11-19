//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Accept character from user.If character is small display its corresponding capital character,and if it small then display its corresponding capital.In other cases display as it is
// Description  : It is used to display corresponding characters viceversa.     
// Author       : Namrata Balasaheb Kokale
// Date         : 19/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
        if(ch >= 'A' && ch <= 'Z')  
        {
            ch = ch + 32;
             printf("%c",ch);
        }
        else if(ch >= 'a' && ch <= 'z')
        {   
            ch = ch - 32;
            printf("%c", ch);
        }
        else
        {
            printf("%c", ch);
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