// write a program which accept area in squre feet and convert it into squre meter.

#include<stdio.h>
double SquareMeter(int iValue)
{
return (iValue*0.0929);

}
int main()
{
    int iValue=0;
    double dRet=0.0;

    printf("enter area in squre feet :\n");
    scanf("%d",&iValue);

    dRet=SquareMeter(iValue);
    printf("squre meter is :%f\n",dRet);
    return 0;
}