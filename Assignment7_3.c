// Write a program to find factorial of given number.

#include<stdio.h>
int factorial(int iNo)
{
    int iCnt=1;
    int iFact=1;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iFact *= iCnt;
    }
    return iFact;



}
int main()
{
    int iValue=0;
     int iRet=0;

    printf("enter number");
    scanf("%d",&iValue);

    iRet=factorial(iValue);
    printf("factorial of number is %d",iRet);
    return 0;
}