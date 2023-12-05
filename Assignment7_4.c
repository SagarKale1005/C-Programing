// Write a program which accept number from user and display its table.

#include<stdio.h>
void Table(int iNo)
{
    int iCnt=1;
    for(iCnt=1;iCnt<=10;iCnt++)
    {
       printf("%d * %d =%d\n",iNo,iCnt,iNo * iCnt);
    }

}
int main()
{
    int iValue=0;
    printf("enter number");
    scanf("%d",&iValue);
    Table(iValue);
    return 0;
    
}