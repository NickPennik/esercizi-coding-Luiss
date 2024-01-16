#include <stdio.h>
int main(){
    
float a;
float b;
printf("\033[36mA che età puoi prendere la patente nel tuo paese?\n\n\033[0m");
scanf(" %f", &b);
printf("\033[36mquanti hanni hai?\n\n\033[0m");
scanf(" %f", &a);
if(a<b){
    printf("\033[31mnon puoi guidare nel tuo paese\n\n\033[0m");
}
else if(a>=b){
    printf("\033[32mpuoi guidare nel tuo paese\n\n\033[0m");
}
return 0;
}