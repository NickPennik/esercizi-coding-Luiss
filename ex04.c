#include <stdio.h>
int main(){
    int etaJonny;
    char letterapreferita;
    
    printf("quanti anni ha jonny?:\n");
    scanf("%d", &etaJonny);
    printf("l'età di jonny è: %d\n", etaJonny);
    printf("qual è la tua lettera preferita?:\n");
    scanf(" %c", &letterapreferita);
    printf("la mia lettera preferita è: %c\n", letterapreferita);
    return 0;
}