#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
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
