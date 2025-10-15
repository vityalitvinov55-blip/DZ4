#include <stdio.h>

int main(int argc, char** argv)
{
    float a[10] = {};
    for (int i = 0; i < 10; i++) {
        scanf("%lf", &a[i]);
    }

    float c = 0;
    for (int i = 0; i < 10; i++)
    {
        c += a[i];
    }

    printf("%f\n", c/10);
}