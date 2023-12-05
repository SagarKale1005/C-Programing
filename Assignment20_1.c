// Accept number of rows and number of columns from user and display below pattern.

#include<stdio.h>
void Pattern(int iRow, int iCol)
{
 int i =1;
 int j;

  for(int row=1; row <= iRow; row++)
  {
    for(j=1;j<=iCol;j++)
    {
        printf("%d\t",i);
        i =(i % 9)+ 1;
    }
    
    printf("\n");
  }

    
}
int main()
{
    int iValue1=0, iValue2=0;

    printf("enter number of rows and columns");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}