// Write a program which accept one number from user and check whether that numbe is greater than 100 or not.

#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChekGreater(int iNo)
{
  if(iNo>=100)
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
    int iValue=0;
    BOOL bRet=FALSE;
    printf("please enter number");
    scanf("%d",&iValue);
    bRet=ChekGreater(iValue);
    if(bRet==TRUE)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }
    return 0;
}
