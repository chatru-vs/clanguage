#include <stdio.h>
int main() {
   int *val2;
   int *val1;
   val2 = (int *)300;
   val1 = (int *)200;
   if(val1 > val2) {
      printf("val1 is greater than val2");
   } else {
      printf("val2 is greater than val1");
   }
   return(0);
}