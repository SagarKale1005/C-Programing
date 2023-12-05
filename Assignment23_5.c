
#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    for (int i = 1; i <= iRow; i++)
    {
        for (int j = 1; j <= iCol; j++)
        {
            
            if (j == 1 || j == iCol)
                printf("%-4d", j);
            else
            {
                
                if (i == 2 && (j > 1 && j < iCol))
                    printf("%-4d", 2);
                else if (i == 3 && (j > 2 && j < iCol - 1))
                    printf("%-4d", 3);
                else if (i == 4 && (j > 3 && j < iCol - 2))
                    printf("%-4d", 4);
                else
                    printf("    "); 
            }
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