// Accept amount in US dollar and return its corresponding value in indian currency. consider 1$ as 70 rupees.

#include<stdio.h>
int DollarToINR(int iNo)
{
  int iCnt=70;
  int Ans= iNo * iCnt;
  return Ans;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter number of USD");
    scanf("%d",&iValue);

    iRet=DollarToINR(iValue);

    printf("value in INR is %d",iRet);
    return 0;
}