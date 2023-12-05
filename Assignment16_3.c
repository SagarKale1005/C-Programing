// Accept N numbers from user and return the difference between largest and smallest number.

#include<stdio.h>
#include<stdlib.h>
#define  TRUE 1
#define FALSE 0

typedef int BOOL;
int Difference(int Arr[],int iLength)
{ 
      if (iLength <= 0)
       {
        return -1; 
    }

    int min = Arr[0];
    int max = Arr[0];

    for (int i = 1; i < iLength; i++)
     {
        if (Arr[i] < min) 
        {
            min = Arr[i]; 
        }
        if (Arr[i] > max) 
        {
            max = Arr[i]; 
        }
    }

    return max - min;

}
int main()
{
    int iSize=0,iRet=0,iCnt=0,iValue=0;
    int *p=NULL;

    printf("enter number of elements");
    scanf("%d",&iSize);

    printf("enter the number");
    scanf("%d",&iValue);

    p=(int *)malloc(iSize * sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("enter %d elements ",iSize);

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("enter elements:%d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet=Difference(p,iSize);

    printf("Largest number is %d",iRet);
    free(p);
    return 0;
}