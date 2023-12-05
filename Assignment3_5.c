// Accept on character from user and check whether that character is vowal (a,e,i,o,u) or not

#include<stdio.h>
typedef int iValue;

#define TRUE 1
#define FALSE 0

int ChkVowel(char iValue)
{
    if(iValue=='a' || iValue=='e' || iValue=='i' || iValue=='o' || iValue=='u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char CValue='\0';
    int bRet=FALSE;

    printf("enter character\n");
    scanf("%c",&CValue);
    bRet= ChkVowel(CValue);
    if(bRet==TRUE)
    {
        printf("it is Vowel");
    }
    else
    {
         printf("it is not Vowel");
    }
    return 0;
}

