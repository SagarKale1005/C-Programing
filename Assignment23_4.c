
#include<stdio.h>

void Pattern(int iRow , int iCol)
{
   char ch = '*';

    for (int i = 1; i <= iRow; i++)
    {
        for (int j = 1; j <= iCol; j++)
        {
            
            if (i == 2 && (j > 1 && j < iCol))
                ch = '#';
            else if (i == 3 && (j > 2 && j < iCol - 1))
                ch = '$';
            else
                ch = '*';

            
            printf("%c ", ch);
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