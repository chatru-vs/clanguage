#include <stdio.h>

//*******The below code will also work
// void printArray(int *ptr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value of element %d is %d\n", i + 1, *(ptr + i));
//     }
// }

void printArray(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n", i+1, ptr[i]);
    }
    ptr[2] = 5555; // This value will be  changes in arr arry of main as well
}
int main()
{
    int arr[] = {99, 2, 5, 78, 45, 32, 77};
    printArray(arr, 7);
    printf("The change value of array 2 is %d", arr[2]);
    return 0;
}
