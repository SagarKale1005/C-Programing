// Write a program which accept range from user and display all even number in between that range.

#include<stdio.h>
void RangeDisplayEven(int iStart,int iEnd)
{
int i=0;
    if (iStart > iEnd)
     {
        printf("Invalid range: starting point is greater than ending point\n");
        return;
    }
     if (iStart % 2 != 0)
    {
        iStart++; 
    }

    for (i = iStart; i <= iEnd; i+=2)
     {
        printf("%d ", i);
    }
    printf("\n");
}
int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("enter staring point\n");
    scanf("%d",&iValue1);

    printf("enter ending point\n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);
    return 0;
}
