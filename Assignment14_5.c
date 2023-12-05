// Accept N numbers from user and accept one number one anther number as No, return frequency of No from it.

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength, int iNo)
{

    int i=0;
    int count=0;
    
    for ( i = 0; i < iLength; i++)
     {
        if(Arr[i]==iNo)
        {
            count++;
        }
     }
     return count;
}

int main()
{
    int iSize=0, iRet=0, iCnt=0 , iValue=0;
    int *p=NULL;

    printf("enter number of elements");
    scanf("%d",&iSize);

    printf("enter the number");
    scanf("%d",&iValue);

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
    iRet=Frequency(p,iSize,iValue);
    printf(" %d",iRet);
    free(p);
    return 0;

}