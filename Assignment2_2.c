// Accept one number from user and print that number of * on screen

#include<stdio.h>
void Display(int iNo)
{
    while(iNo)
    {
        printf("*");
        iNo--;
    }
}
int main()
{
    int iValue=0;

    printf("enter number ");
    scanf("%d",&iValue);
    
    Display(iValue);
    return 0;
}