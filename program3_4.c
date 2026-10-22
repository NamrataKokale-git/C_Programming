///////////////////////////////////////////////////////////////
//
// Function Name : CharDisplayConvert
// Description   : It is used to convert the case
//                 of the given character.
//                 Uppercase is converted to
//                 lowercase and lowercase is
//                 converted to uppercase.
// Input         : Character
// Output        : Character
// Author        : Namrata Balasaheb Kokale
// Date          :21/10/2026
//
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

void CharDisplayConvert(char Cvalue)
{
    
    if(Cvalue >= 'A' && Cvalue <= 'Z')
    {
        printf("%c",Cvalue + 32 );
    }
    else if(Cvalue >= 'a' && Cvalue <= 'z')
    {
        printf("%c",Cvalue -32);
    }
}

int main()
{
    char CValue = '\0';

    printf("Enter character\n");
    scanf("%c",&CValue);

    CharDisplayConvert(CValue);

    return 0;
}
