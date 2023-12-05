// Write a program which accept range from user and display all numbers in between that range.

#include<stdio.h>
void RangeDisplay(int iStart,int iEnd)
{
    int i=0;
    if (iStart > iEnd)
     {
        printf("Invalid range: starting point is greater than ending point\n");
        return;
    }

    for (i = iStart; i <= iEnd; i++)
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

    RangeDisplay(iValue1,iValue2);
    return 0;
}