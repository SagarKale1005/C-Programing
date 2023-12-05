// write a program which accept number from user and return the count of odd digit.

#include<stdio.h>
int  CountOdd(int iNo)
{
  int iCount=0;
  
  while(iNo!=0)
  {
    int digit=iNo%10;
    if(digit%2!=0)
    {
        iCount++;
    }
    iNo/=10;
  }
  return iCount;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter number");
    scanf("%d",&iValue);

    iRet=CountOdd(iValue);
    printf("%d",iRet);
    return 0;
}