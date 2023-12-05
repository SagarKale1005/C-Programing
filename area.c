#include<stdio.h>
int main()
{

float Radius=0.0f;
const float PI=3.14f;
float area=0.0f;

printf("enter the size of Radius : \n");
scanf("%f",&Radius);

area=PI *  Radius * Radius;

printf("area of circle is : %f\n",area);

    return 0;
}