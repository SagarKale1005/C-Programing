// write a program which accept radius of circle from user and calculate its area. consider value of PI as 3.14(Area = PI*Radius*Radius)

#include<stdio.h>
double CircleArea(float fRadius)
{

    auto float fAns=0.0f;
    auto const float PI=3.14f;

    fAns=PI*fRadius*fRadius;
    return fAns;

}
int main()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("enter radius ");
    scanf("%f",&fValue);
    dRet=CircleArea(fValue);

    printf("Area of circle is : %f\n",dRet);
    return 0;
}