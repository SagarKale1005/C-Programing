// Write a program which accept total marks & obtained marks from user and calculate percentage.

#include<stdio.h>
float percentage(int iTotal,int iMarks)
{ 
    float Ans=0.0;
 Ans =  (((float)iMarks/ (float)iTotal)*100);
 return Ans;

}
int main()
{
   int iValue1=0;
   int iValue2=0;
   float fRet=0.0f;

   printf("please enter total marks");
   scanf("%d",&iValue1);
   printf("please enter obtained marks");
   scanf("%d",&iValue2);

   fRet=percentage(iValue1,iValue2);
   printf("Percentage:%f\n ",fRet);
   return 0;
}