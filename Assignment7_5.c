// Write a program which accept number from user and display its table in reverse order.

#include<stdio.h>
void TableRev(int iNo)
{
int iCnt=1;

    for(iCnt=10;iCnt>=1;iCnt--)
    {
       printf("%d * %d =%d\n",iNo,iCnt,iNo * iCnt);
    }

}
int main()
{
    int iValue=0;
    printf("enter number");
    scanf("%d",&iValue);
    TableRev(iValue);
    return 0;
}