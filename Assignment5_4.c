// Write a program which accept three numbers and print its multiplication.

#include<stdio.h>
int Multiply( int num1,int num2,int num3)
{

    return num1*num2*num3;

}
int main()
{
    int iValue1=0;
    int iValue2=0;
    int iValue3=0;
    int iRet=0;

    printf("please enter three numbers");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet=Multiply(iValue1,iValue2,iValue3);

    printf("the multiplication of the three numbers is:%d\n",iRet);
    return 0;
}