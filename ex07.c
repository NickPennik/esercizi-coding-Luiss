#include <stdio.h>
int main(){
    int a;
    int b;
    printf("inserisci un numero\n");
    scanf(" %d", &a);
    printf("inserisci il secondo numero\n");
    scanf(" %d", &b);
    if(a % b == 0) {
        printf("i due numeri sono multipli\n");
    }
    else{
        printf("i due numeri non sono multipli\n");
    }
    return 0;
}