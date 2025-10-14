#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    double a[10];
    double x = atof(argv[11]);
    int k = atoi(argv[12]);

    for (int i = 0; i < 10; i++) {
        a[i] = atof(argv[i + 1]);
    }

    for (int i = 9; i > k; i--) {
        a[i] = a[i - 1];
    }
    a[k] = x;

    for (int i = 0; i < 10; i++) {
        printf("%g ", a[i]);
    }
}