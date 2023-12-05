// Accept on number from user if number is less than 10 them print "Hello"

#include<stdio.h>
void Display(int iNo )
{
    if(iNo<10)
    {
        printf("Hello");

    }
    else
    {
        printf("Demo");
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