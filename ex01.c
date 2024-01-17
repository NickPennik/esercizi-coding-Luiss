#include <stdio.h>
int main(){
    printf("\033[1m\033[32mHakuna Matata Ragazzi\n\033[0m");

    int intero = 2;
    float r = 5.3; 
    char y = 't';

    printf("\033[1m\033[35m%d\n\033[0m", intero);
    printf("\033[34m%f\n\033[0m", r);
    printf("\033[33m%c\n\033[0m", 't');
    return 0;
}



