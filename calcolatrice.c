#include <stdio.h>


int main()
{
    float x;
    float y;
    float a;
    float moltiplicazione;
    float somma;
    float sottrazione;
    float divisione;
    
    printf("scrivi due variabili x e y\n");
    scanf(" %f", &x);
    scanf(" %f", &y);
    printf("scrivi il segno del tipo di operazione che vuoi fare\n1)somma\n2)sottrazione\n3)divisione\n4)moltiplicazione\n");
    scanf(" %f", &a);
    if(a==1)
    {
        somma= x+y;
        printf("il risultato è %f\n", somma);
    }
    else if(a==2)
    {
        sottrazione=x-y;
        printf("il risultato è %f\n", sottrazione);
    }
    else if(a==3)
    {
        divisione=x/y;
        printf("il risultato è %f\n", divisione);
    }
    else if(a==4)
    {
        moltiplicazione=x*y;
        printf("il risultato è %f\n", moltiplicazione);
    }
    else 
    {
        printf("hai digitato una lettera un segno o un numero errato\n");
    }
    return 0;
}