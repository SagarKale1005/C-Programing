// write a program which accept temperature in fahrenheit and convert it into celsius.(1 celsius=(fahrenheit-32)*(5/9))

#include<stdio.h>
double FhtoCs(float fTemp)
{
  return( fTemp-32)*5/9;

}
int main()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("enter tempereture in Fahrenheit :\n");
    scanf("%f",&fValue);

    dRet=FhtoCs(fValue);
    printf("celsius is :%.2f\n",dRet);
    return 0;
}