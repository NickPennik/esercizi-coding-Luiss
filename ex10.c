#include <stdio.h>
int main(){

    int a;

    printf("inserisci un anno per sapere se è bisestile\n");
    scanf(" %d", &a);
    if(a % 4 ==0) {
        if (a % 100 != 0){
            printf("l'anno è bisestile\n");
        } else if (a % 400 == 0) { 
            printf("l'anno è bisestile\n");
        }
    
        else {
        printf("l'anno non è bisestile\n");        
    }
    }


    return 0;
}