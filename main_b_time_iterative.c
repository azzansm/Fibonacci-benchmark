#include <stdio.h>
#include <time.h>
#include "mylib/mylib.h"

int main(){

    int n = 30;
    int b;
    int i = 0;
    clock_t t;
    t = clock();

    for (b = 2; b <= n; b++){

        printf("%d\n", fibonacciIterative(i));
        i++;
    }
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("Time taken: %f s\n", time_taken);

    return 0;
}