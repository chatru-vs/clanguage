#include <stdio.h>
int main(int argc, char *argv[])
{
    char acBuffer [] = {'a','t','i','c','l','e'};   // array of character
    int i = 0;
    char *pcBuffer = NULL; // character pointer
    pcBuffer = acBuffer;
    for(i =0; i <6; i++)  // access the array element using the pointer
    {
        printf("pcBuffer[%d] = %c  or  *(pcBuffer+%d) = %c \n\n",i,pcBuffer[i],i, *(pcBuffer+i));
    }
    return 0;
}