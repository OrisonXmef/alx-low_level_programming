#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL)); 
    int n;
    n = rand();
    printf("The number %d is ", n);
    if (n > 0) {
        printf("positive");
    } else if (n == 0) {
        printf("zero");
    } else {
        printf("negative");
    }

    printf("\n");

    return 0;
}
