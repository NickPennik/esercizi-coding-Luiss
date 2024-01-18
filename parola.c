#include <stdio.h>


int main()
{
    char parola [5]={'c','i','a','o','\0'};
    char parola2 [5]={'c','i','\0','o','!'}; 
    char parola3 []="vamo raga forza giuve";
    
    // il \0 mi tronca la parola poiché indica quando la stringa termina

    printf("%s\n", parola);
    printf("%s\n", parola2);
    printf("%s\n", parola3);
    return 0;
}