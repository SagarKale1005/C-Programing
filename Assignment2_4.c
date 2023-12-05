//  Accept two numbers from user amd display firt number in second number of times

#include<stdio.h>
void Display(int iNo,int iFrequency)
{
    for(int i=0;i<iFrequency;i++)
    {
        printf("%d ", iNo);
    }
}
int main()
{
    int iValue=0;
    int iCount=0;

    printf("enter number");
    scanf("%d",&iValue);

    printf("enter frequency");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}