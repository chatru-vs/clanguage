#include <stdio.h>
int main()
{

    int i = 34;
    char j = 'c';
    char *alpha = &j;
    int *ptr = &i;
    float k = 14.56;
    float *flott = &k;
    printf("The value of ptr is %u\n", ptr);
    printf("The value of char is %u\n", alpha);
    printf("The value of float is %u\n", flott);
    ptr++;
    ptr--;
    alpha++;
    alpha--;
    flott++;
    flott--;
    printf("The value of ptr is %u\n", ptr);
    printf("The value of ptr char %u\n", alpha);
    printf("The value of float float %u\n", flott);

    return 0;
}