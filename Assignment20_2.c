// Accept number of rows and number of columns from user and display below pattern.

#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int startEven = 2;
    int startOdd = 1;
    
    for (int row = 1; row <= iRow; row++) 
    {
        int current = (row % 2 == 0) ? startEven : startOdd;
        int increment = (row % 2 == 0) ? 2 : 2;
        
        for (int col = 1; col <= iCol; col++) 
        {
            printf("%d\t", current);
            current += increment;
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