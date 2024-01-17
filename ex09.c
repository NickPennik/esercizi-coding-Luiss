#include <stdio.h>
int main(){
    float a;
    float b;
    float c;
    printf("Scrivi tre numeri per sapere se sono in progressione aritmetica\n");
    scanf(" %f\n", &a);
    scanf(" %f\n", &b);
    scanf(" %f", &c);
    if(a-b == b-c){
        printf("\033[32mi numeri sono in progressione aritmetica\n\033[0m");
    }
    else{
        printf("\033[31mi numeri non sono in progressione aritmetica\n\033[0m");
    }
    return 0;
}