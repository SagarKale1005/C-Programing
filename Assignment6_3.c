// Write a program which accept number from user and print its numbers line.

#include<stdio.h>
void Display(int iNo)
{
   int iCnt=0;
    for (iCnt =iNo; iCnt>= 0; iCnt--)
     {
        printf("%d ", -iCnt);
    }
    
    for ( iCnt =1; iCnt <= iNo; iCnt++)
     {
        printf("%d ", iCnt);
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