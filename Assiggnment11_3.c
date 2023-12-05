// write a program which accept number from user and count frequency of 2 in it.

#include<stdio.h>
int CountTwo(int iNo)
{
 int count = 0;
    char str[20];
    sprintf(str, "%d", iNo);

    for (int i = 0; str[i] != '\0'; i++)
     {
        if (str[i] == '2')
         {
            count++;
        }
    }

    return count;

}
int main()
{
    int iValue=0;
    int bRet=0;

    printf("enter number");
    scanf("%d",&iValue);

    bRet=CountTwo(iValue);

    printf("%d",bRet);
    return 0;

}