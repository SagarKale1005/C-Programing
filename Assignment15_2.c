// Accept N  number from user and accept one another number as No, return index of first occurrence of that NO.
#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[],int iLength, int iNo)
{

    int i=0;
    
    for ( i = 0; i < iLength; i++)
     {
        if(Arr[i]==iNo)
        {
           return i;
        }
     }
     return -1;
    
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
    iRet=FirstOcc(p,iSize,iValue);
   if(iRet==-1)
   {
    printf("There is no such number");
   }
   else
   {
    printf("First occurrence of number is %d",iRet);
   }
    free(p);
    return 0;

}
