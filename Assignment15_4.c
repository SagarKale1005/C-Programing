// Accept N numbers from user and accept Range, Display all elements from that range.

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
   int i=0;
   if (iStart > iEnd)
    {
        printf("Invalid range: iStart should be less than or equal to iEnd.\n");
        return;
    }

    for ( i = 0; i < iLength; i++)
    {
        if (Arr[i] >= iStart && Arr[i] <=iEnd)
        {
            printf("%d ", Arr[i]);
        }
    }
    printf("\n");
   

}
int main()
{
    int iSize=0, iRet=0, iCnt=0, iValue1=0, iValue2=0;
    int *p=NULL;

    printf("enter number of element");
    scanf("%d",&iSize);

    printf("enter the starting point");
    scanf("%d",&iValue1);

    printf("enter the ending point");
    scanf("%d",&iValue2);

    p=(int *)malloc(iSize * sizeof(int));

    if(p==NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }
    printf("enter %d elements",iSize);

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("enter element :%d",iCnt+1);
        scanf("%d",&p[iCnt]);

    }
   Range(p,iSize,iValue1,iValue2);
    free(p);
    return 0;
}