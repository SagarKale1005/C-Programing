// Accept one number and check whether is is divisible ny 5 or not

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int check(int iNo)
{
    if((iNo%5)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
    int main()
    {
        int iValue=0;
        BOOL bRet=FALSE;

        printf("enter number");
        scanf("%d",&iValue);

        bRet=check(iValue);
        if(bRet==TRUE)
        {
            printf("Divisible by 5");
        }
        else
        {
            printf("not divisible by 5");
        }
        return 0;

}