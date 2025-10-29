#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
    double a[10];
    for(int i = 0; i<10; i++){
         scanf("%lf", &a[i]);
    }
    for(int i = 9; i>=0; i--){
        printf("%lf ",a[i]);
    }


}
