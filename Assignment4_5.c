// Write a program which accept number from user and return difference between summation of all its factors and non factors.

#include<stdio.h>
int SumFactors(int num)
{
int sum=0;
for(sum=1;sum<=num;sum++)
{
  if(num%sum==0)
  {
    sum+=num;
  }
}
return sum;

}
int FactDiff(int iNo)
{
  int iCnt=0;
  for(iCnt=1;iCnt<=iNo;iCnt++)
  {
    if()
  }

int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter number ");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);

      printf("%d",&iRet);

      return 0;
}