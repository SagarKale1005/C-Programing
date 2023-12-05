// same program2.c

#include<stdio.h>

int main()
{
  char Arr[40];

  printf("enter your name :\n");
  scanf("%[^'\n]s",Arr);

  printf("your name is :%s\n",Arr);
  
    return 0;
}