#include <stdio.h>
int main (void)
{
    int  data = 20;   // declaration of variable
    int  *iPtr = NULL; // declaration of pointer
    iPtr = &data;  // Assign address of data to the pointer
    printf("Address of data: %p\n", &data);
    //Address stored in pointer
    printf("Address stored in iPtr: %p\n", iPtr);
    //Read value from the stored address with help of pointer
    printf("value of *iPtr = %d\n", *iPtr );
    //Assign value to the stored address with help of pointer
    *iPtr = 5;
    //Again Read value from the stored address with help of pointer
    printf("New value of *iPtr = %d\n", *iPtr);
    printf("data = %d\n\n", data);
    return 0;
}