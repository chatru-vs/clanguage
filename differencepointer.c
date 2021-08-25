#include <stdio.h>
#include <stddef.h>


int main()
{
	int arr[5] = {4, 6, 7, 10, 12};

	int *p = arr + 1;
	int *q = arr + 3;

	ptrdiff_t diff = q - p;
	printf("Difference %d\n", diff);

	return 0;
}