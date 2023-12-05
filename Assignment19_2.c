// Accept number of rows and number of columns from user and display below pattern.

#include<stdio.h>
void Pattern(int iRow, int iCol)
{
 int i , j;
 char ch='A';

for (int i = 1; i <= iRow; i++)
    {
        for (int j = 1; j <= iCol; j++)
        {
            if (i % 2 == 1)
             {
                printf("%c ", ch);
                ch++;
            }
            else 
            {
                printf("%c ", tolower(ch));
                ch++;
            }
        }
        printf("\n");
        ch='A';
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