// Write a program which accept number from user and display all its non factors.

#include<stdio.h>
void NonFact(int iNo)
{
    int iCnt=1;
    printf(" Non-Factors of %d are :\n",iNo);

 for(iCnt=1;iCnt<=iNo;iCnt++)
 {
    if((iNo %iCnt)!=0)   
    {
        printf("%d\n",iCnt);
    }
 }


}
int main()
{
    int iValue=0;

    printf("enter number");
    scanf("%d",&iValue);

    NonFact(iValue);
    return 0;
}