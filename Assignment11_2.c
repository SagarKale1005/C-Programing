// write a program which accept from user and check whether it contains 0 in it or not

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkZero(int iNo)
{
    char str[20];
    sprintf(str, "%d", iNo);
    
    for (int i = 0; str[i] != '\0'; i++)
     {
        if (str[i] == '0') 
        {
            return TRUE; 
        }
    }

    return FALSE;
  

}
int main()
{
    int iValue=0;
    BOOL bRet=FALSE;

    printf("enter number");
    scanf("%d",&iValue);

    bRet=ChkZero(iValue);

    if(bRet==TRUE)
    {
        printf("it contain zero");
    }
    else
    {
        printf("there is no zero");
    }
    return 0;
}