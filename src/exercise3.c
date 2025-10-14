#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]){
    int a[10];
    int k = atoi(argv[11]);

    for(int i = 0; i<10; i++){
        a[i] = atoi(argv[i+1]);
    }

    for(int i =0; i < 10; i++){
        printf("%d ", a[(i-k + 10)%10]);
    }

}