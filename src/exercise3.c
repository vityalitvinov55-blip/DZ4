#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]){
    double a[10];
    int k;

    for(int i = 0; i<10; i++){
        scanf("%lf", &a[i]);
    }
    scanf("%lf",&k);
    for(int i =0; i < 10; i++){
        printf("%d ", a[(i-k + 10)%10]);
    }

}
