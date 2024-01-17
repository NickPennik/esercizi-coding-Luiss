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
    int i = 0;

    while(i < 4)
    {
        prova();
        i = i + 1;
    }

    return 0;
}