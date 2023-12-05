// Accept number of rows and number of columns from user and display below pattern.

#include<stdio.h>
void Pattern(int iRow, int iCol)
{ 
 for (int i = 1; i <= iRow; i++)
    {
    
        int startValue = (i % 2 == 0) ? -1 : 1;

        for (int j = 1; j <= iCol; j++)
        {
            printf("%3d   ", startValue * j);
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