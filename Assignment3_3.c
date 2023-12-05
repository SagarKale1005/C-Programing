//  Write a program which accept number from user and print even factors that number

#include<stdio.h>
void DisplayEvenFactor(int iNo)
{
    int i=0;
    if(iNo<=0)
    {
        iNo=-iNo;
    }
    for(i=1;i<=(iNo/2);i++)
    {
        if(iNo%i==0 && i%2==0)
        {
            printf("%d ",i);
        }
    }
}
int main()
{
    int iValue=0;
    printf("enter number\n");
    scanf("%d",&iValue);
    DisplayEvenFactor(iValue);
    return 0;
}