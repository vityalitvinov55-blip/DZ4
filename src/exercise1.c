#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
    int a[10];
    for(int i = 0; i<10; i++){
        a[i] = atoi(argv[i+1]);
    }
    float c = 0;
    for(int i = 0; i<10; i++){
        c+=a[i];
    }
    printf("%.2f", c/10);
}