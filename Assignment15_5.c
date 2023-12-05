// Accept N numbers from user and return product of all odd elements.

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int i=0;
    int odd=1;

    for(i=0;i<iLength;i++)
    {
       if( Arr[i]%2 !=0)
       {
        odd *=Arr[i];
       }
    }
    return odd;
   

}
int main()
{
    int iSize=0, iRet=0, iCnt=0;
    int *p=NULL;

    printf("enter number of element");
    scanf("%d",&iSize);


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
   iRet=Product(p,iSize);
   printf("Product is %d",iRet);

    free(p);
    return 0;
}