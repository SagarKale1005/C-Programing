// Write a program which accept N and print first 5 multiples of N.

#include<stdio.h>
void multipleDisplay(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=5;iCnt++)

        {
            printf("%d ",iNo * iCnt);
        }



}

int main()
{
    int iValue=0;
    printf("enter number");
    scanf("%d",&iValue);
    multipleDisplay(iValue);
    return 0;
}