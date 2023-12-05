// Accept number of rows and number of columns from user and display below pattern.

#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    char ch = 'a'; 

    for (int i = 1; i <= iRow; i++)
    {
        for (int j = 1; j <= iCol; j++)
        {
            printf("%c ", ch);
            ch++;
        }
        ch = 'a';
        printf("\n");

        for (int j = 1; j <= iCol; j++)
        {
            printf("%d ", j);
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