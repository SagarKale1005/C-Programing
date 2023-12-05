// Write a program which accept number from user and return diffrence between summation of even digits and summation od odd digits.

#include<stdio.h>
int  CountDiff(int iNo)
{
   int evenSum = 0;
    int oddSum = 0;

    while (iNo != 0) {
        int digit = iNo % 10;
        if (digit % 2 == 0) {
            evenSum += digit;
        } else {
            oddSum += digit;
        }
        iNo /= 10;
    }

    return evenSum - oddSum;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter number");
    scanf("%d",&iValue);

    iRet=CountDiff(iValue);
    printf(" %d\n",iRet);

    return 0;
}