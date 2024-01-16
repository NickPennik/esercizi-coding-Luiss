#include <stdio.h>
int main(){

float a;

printf("scrivi una temperatura in celsius\n");
scanf(" %f", &a);


if(a<-273.15){
    printf("\033[31mla temperatura non può essere più bassa dello zero assoluto\n\033[0m");
}
else{
    printf("adesso te la convertirò in fahreneit e in kelvin\n");
    printf("\033[32mLa temperatura in fahrenheit è %f\n\033[0m", a*9/5+32);
    printf("\033[35mla temperatura in kelvin è %f\n\033[0m", a+273.15);
}


    return 0;
}