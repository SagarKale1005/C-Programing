

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<String.h>

int main()
{
    unlink("Marvellous.txt");

    printf("File deleted succesfullay..\n");
   
    return 0;
}


