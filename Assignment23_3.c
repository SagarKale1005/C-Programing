
#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i, j;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
    
            if (j == 1 || j == iCol || (i == iRow / 2 + 1 && j <= iCol / 2 + 1))
                printf("* ");
            else
                printf("  "); 
        }
        printf("\n"); 
    }


}

int main()
{
    int iValue1=0, iValue2=0;

    printf("enter number of rows and columns :\n");
    scanf("%d  %d",&iValue1, &iValue2);

    Pattern(iValue1,iValue2);

    
    return 0;
}