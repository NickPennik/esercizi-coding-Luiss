#include <stdio.h>

void prova()
{
    int a;

    printf("inserisci un numero\n");
    scanf(" %d", &a);
    printf("il cubo del tuo numero è %d\n", a*a*a);
}

int main()
{
   prova();
   prova();
   prova();
   prova();
   return 0;
}