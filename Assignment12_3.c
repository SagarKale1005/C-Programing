// Write a program which accept number from user and return the count of digit in between 3 and 7.

#include<stdio.h>
int  CountRange(int iNo)
{
  int iCount=0;
  
  while(iNo!=0)
  {
    int digit=iNo%10;
    if(digit>=3 && digit <=7)
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

    iRet=CountRange(iValue);
    printf(" %d\n",iRet);

    return 0;
}