// Accept one character from user and convert case of that character.

#include<stdio.h>

void DisplayConvert(char CValue)
{
    if(CValue<='A' && CValue<='Z')
    {
        printf("%c",&CValue);
    }
    else if(CValue<='a'&& CValue <='z')
    {
        printf("%c",&CValue);
    }
}
int main()
{
    char CValue='\0';
    printf("enter character\n");
    scanf("%c",&CValue);
    DisplayConvert(CValue);
    return 0;
}