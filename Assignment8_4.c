// Write a program to find odd factorial of given number.


#include<stdio.h>
int OddFactorial(int iNo)
{
  int iCnt=1;
  int  Ans= 1;

    for (iCnt = 1; iCnt<=iNo; iCnt++) 
    {
        if (iCnt % 2 != 0) 
        {
            Ans *= iCnt;
        }
    }

    return Ans;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter number");
    scanf("%d",&iValue);

    iRet=OddFactorial(iValue);
    
    printf("Odd factorial of number is %d",iRet);
    return 0;
}