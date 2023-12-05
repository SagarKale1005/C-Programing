// write a program which accept range from use and return addition of all numbers in between that range.(range should contains positive numbers only)

#include<stdio.h>
int RangeSum(int iStart,int iEnd)
{
int i=0;
int Sum=0;
    if (iStart > iEnd)
     {
        printf("Invalid range: starting point is greater than ending point\n");
        return 0;
    }

    for (i = iStart; i <= iEnd; i++)
     {
    Sum +=i;
    }
    return Sum;

}
int main()
{
    int iValue1=0;
    int iValue2=0;
    int iRet=0;

    printf("enter starting point");
    scanf("%d",&iValue1);

    printf("enter ending point");
    scanf("%d",&iValue2);

    iRet=RangeSum(iValue1,iValue2);

    printf("Addition is %d",iRet);
    return 0;
}