// Accept N numbers from user and return difference between summation of even element and summation of odd elements.

#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[],int iLength)
{
   int sumEven = 0;
    int sumOdd = 0;

    for (int i = 0; i < iLength; i++)
     {
        if (Arr[i] % 2 == 0) 
        {
            sumEven += Arr[i];
        } 
        else
         {
           sumOdd += Arr[i];
        }
    }
    return sumEven - sumOdd;

}
int main()
{
    int iSize=0, iRet=0, iCnt=0;
    int *p=NULL;

    printf("enter number of elements");
    scanf("%d",&iSize);

    p=(int *)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;

    }
    printf("enter %d elements",iSize);

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("enter element:%d",iCnt+1);
        scanf("%d",&p[iCnt]);

    }
    iRet=Difference(p,iSize);

    printf("Result is %d",iRet);
    free(p);
    return 0;
}