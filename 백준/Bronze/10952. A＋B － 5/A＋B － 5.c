#include <stdio.h>
#include <stdbool.h>

int main() {
   int A=1, B=1;
   while(true) {
      scanf("%d %d", &A, &B);
        
      if (A == 0 && B == 0) 
          break;
        
      printf("%d\n", A + B);
   }
    return 0;
}