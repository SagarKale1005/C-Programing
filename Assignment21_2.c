// Accept number of rows and number of columns from user and display below pattern.

#include<stdio.h>
void Pattern(int iRow, int iCol)
{ 
   if (iRow != iCol)
    {
        printf("Number of rows and columns should be equal for this pattern.\n");
        return;
    }

    for (int i = 1; i <= iRow; i++)
    {
        for (int j = 1; j <= iCol; j++)
        {
            if (j >= i && j <= iCol - i + 1)
                printf("*\t");
            else
                printf("#\t");
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