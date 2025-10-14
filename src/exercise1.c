#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
    double a[10];
    for(int i = 0; i<10; i++){
        a[i] = atof(argv[i+1]);
    }
    double c = 0;
    for(int i = 0; i<10; i++){
        c+=a[i];
    }
    printf("%.2f", c/10.0);
}