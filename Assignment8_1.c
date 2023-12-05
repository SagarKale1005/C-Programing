// Write a program which accept number from user and display below pattern

#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("* ");
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("# ");
    }
}
int main()
{
    int iValue=0;
    printf("enter number");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}