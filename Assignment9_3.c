// Write a program which accept distance in kilometre and convert it into meter.(1 kilometre = 1000 meter)

#include<stdio.h>
int KMtoMeter(int iNo)
{
  return iNo*1000;

}
int main()
{
  int iValue=0;
  int iRet=0;

  printf("enter distance");
  scanf("%d",&iValue);

  iRet=KMtoMeter(iValue);

  printf(" meter is  :%d\n",iRet);

  return 0;

}