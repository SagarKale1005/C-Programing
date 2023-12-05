// Write a program which accept width & height of rectangle from user and calculate its area.(Area = Width * Height)

#include<stdio.h>
double RectArea(float fWidth,float fHeight)
{
   return fWidth*fHeight;


}
int main()
{
    float fValue1=0.0;
    float fValue2=0.0;
    double dRet=0.0;

    printf("enter width");
    scanf("%f",&fValue1);

      printf("enter width");
    scanf("%f",&fValue2);

    dRet=RectArea(fValue1,fValue2);

    printf("Area of rectangle is : %f\n",dRet);

    return 0;


}