
// Write a program which accept one number from user and print that number of even numbers on screen

#include<stdio.h>

int printEven(int iNo)
{
    int iCnt=0;
    
    if(iNo<=0)
    {
        return -1;
    }

    for(iCnt=1;iCnt<=(iNo*2);iCnt++)
{
    if(iCnt % 2 == 0)
    {
    
        printf("%d ",iCnt);
    }

}
    
    }
int main()
{
    int iValue=0;
    printf("enter number\n");
    scanf("%d",&iValue);
    printEven(iValue);
    return 0;
}