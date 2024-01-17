#include <stdio.h>

int main(){
    int altezza;

    printf("quanto sei alto in cm?:\n");
    scanf("%d", &altezza);
    if(altezza<168){
        printf("sei un nano\n");
    }
    else if(altezza<180){
        printf("sei mediamente alto\n");
    }
    else{
        printf("vai a giocare in NBA\n");
    }
    return 0;
}