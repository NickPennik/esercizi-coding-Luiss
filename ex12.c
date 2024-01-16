#include <stdio.h>
int main(){
    float a;
    float b;
    float c;
    printf("scrivi tre lunghezze dei lati di un triangolo, io ti dirò se questo triangolo esiste o meno\n");
    scanf(" %f\n", &a);
    scanf(" %f\n", &b);
    scanf(" %f", &c);
    if(a+b >c){
        if(b+c>a){
            if(c+a>b){
                printf("questo triangolo ESISTE\n");
                    if(a !=b){
                        if(b!=c){
                            if(c!=a) {
                                printf("il triangolo è scaleno\n");
                            }
                            else{
                                printf("il triangolo è isoscele\n");
                            }
                        } else {
                            printf("il triangolo è isoscele\n");
                        }
                    }
                    else if(a==b){
                        if(b==c){
                            if(c==a){
                                printf("il triangolo è equilatero\n");
                            }
                        } else {
                            printf("il triangolo è isoscele\n");
                        }
                    }



            } else {
                printf("questo triangolo \033[31mNON\033[0m può esistere\n");
            }
        }else {
            printf("questo triangolo \033[31mNON\033[0m può esistere\n"); 
        }
    } else {
        printf("questo triangolo \033[31mNON\033[0m può esistere\n");
    }

    return (0);
}