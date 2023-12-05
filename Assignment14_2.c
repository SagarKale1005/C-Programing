// Accept N numbers from user and return diffrence between frequency of even number and odd numbers.

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{

    int i=0;
    int evencount=0;
    int oddcount=0;
    
    
    for ( i = 0; i < iLength; i++)
     {
        if (Arr[i] % 2 == 0) 
        {
           evencount++;
        }
        else
        {
            oddcount++;
        }
    }
    return evencount - oddcount;
}

int main()
{
    int iSize=0, iRet=0, iCnt=0;
    int *p=NULL;

    printf("enter number of elements");
    scanf("%d",&iSize);

    p=(int *)malloc(iSize * sizeof(int) );

    if(p==NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }
    printf("enter %d elements ",iSize);

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("enter element :%d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet=Frequency(p,iSize);
    printf(" %d",iRet);
    free(p);
    return 0;

}