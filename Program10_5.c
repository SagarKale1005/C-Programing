// Write a program which accept range from user and display all numbers in between that range in reverse order.

#include<stdio.h>
void RangeDisplayRev(int iStart,int iEnd)
{
    int i=0;
    int iRev=0;

    if (iStart > iEnd)
     {
        printf("Invalid range: starting point is greater than ending point\n");
        return ;
    }

    for (i = iEnd; i >=iStart; i--)   
{
    printf("%d  ",i);
}
printf("\n");
}

int main()
{
    int iValue1=0,iValue2=0;

    printf("enter starting point");
    scanf("%d",&iValue1);

    printf("enter ending point");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);
    return 0;
}