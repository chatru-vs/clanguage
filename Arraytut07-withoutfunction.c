#include<stdio.h>
int main(){
    int mulTable[3][10]; // 3 rows 10 array
    for(int i=0; i<10; i++){
        mulTable[0][i] = 2*(i+1);
    }
    for(int i=0; i<10; i++){
        printf("2x%d = %d\n", i+1, mulTable[0][i]);
    }
    for(int i=0; i<10; i++){
        mulTable[0][i] = 7*(i+1);
    }
    for(int i=0; i<10; i++){
        printf("7x%d = %d\n", i+1, mulTable[0][i]);
    }
    for(int i=0; i<10; i++){
        mulTable[0][i] = 9*(i+1);
    }
    for(int i=0; i<10; i++){
        printf("9x%d = %d\n", i+1, mulTable[0][i]);
    }
    return 0;
}