#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
  int n;
  srand(time(NULL));
   int n = rand() - RAND_MAX / 2;
   n = rand();
    while (n)
    {
    printf("The number %d is ", n);
    if (n > 0) {
        printf("positive");
    }
    else if (n == 0) {
        printf("zero");
    }
    else {
        printf("negative");
    }
   }
    printf("\n");

    return (0);
}
