#include<stdio.h>
#include <stdio.h>

int main() {
    double a[10];
    
    for (int i = 0; i < 10; i++) {
        scanf("%lf", &a[i]);
    }

    double sum = 0.0;
    for (int i = 0; i < 10; i++) {
        sum += a[i];
    }

    double average = sum / 10.0;
    printf("%.2f", average);

    return 0;
}