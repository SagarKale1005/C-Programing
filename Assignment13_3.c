// Accept N numbers from user and display all such elements which are even and divisible by 5.

#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength)
{
    int i=0;
    
 printf("Elements divisible by 5: ");
    
    for ( i = 0; i < iLength; i++)
     {
        if (Arr[i] % 2 == 0 && Arr[i] % 5 == 0) 
        {
            printf("%d ", Arr[i]);
        }
    }
    printf("\n");

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
   Display(p,iSize);

    free(p);
    return 0;
}