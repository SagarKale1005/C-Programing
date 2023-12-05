// Write a program which Accept range from user and return addition of all even number in between that range.(range should contains positive numbers only)

#include<stdio.h>
int RangeSumEven(int iStart,int iEnd)
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
        if(i%2==0)
    
     {
    Sum +=i;
    }
    }
    return Sum;


}
int main()
{
    int iValue1=0,iValue2=0,iRet=0;

    printf("enter starting point");
    scanf("%d",&iValue1);

    printf("enter ending point");
    scanf("%d",&iValue2);

    iRet=RangeSumEven(iValue1,iValue2);
    printf("Addition is %d",iRet);
    return 0;
}