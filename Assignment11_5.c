// write a program which accept number from user and count frequency of such a digit which are less then 6.

#include<stdio.h>
int Count(int iNo)
{
 int count = 0;
    char str[20];
    sprintf(str, "%d", iNo);

    for (int i = 0; str[i] != '\0'; i++)
     {
        if (str[i] < '6' && str[i]>='0')
         {
            count++;
        }
    }

    return count;

}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter number");
    scanf("%d",&iValue);

    iRet=Count(iValue);

    printf("%d",iRet);
    return 0;

}