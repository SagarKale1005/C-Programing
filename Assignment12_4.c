// write a program which accept numbers from user and return multiplication of all digit.

#include<stdio.h>
int  MultiDigits(int iNo)
{
  int result=1;
  
  while(iNo!=0)
  {
    int digit=iNo%10;
    result*=digit;
    
    iNo/=10;
  }
  return result;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter number");
    scanf("%d",&iValue);

    iRet=MultiDigits(iValue);
    printf(" %d\n",iRet);

    return 0;
}