#include <stdio.h>


int main()
{
    int x;
    int y;
    int a;
    int moltiplicazione;
    int somma;
    int sottrazione;
    int divisione;
    
    printf("scrivi due variabili x e y\n");
    scanf(" %d", &x);
    scanf(" %d", &y);
    printf("scrivi il segno del tipo di operazione che vuoi fare\n1)somma\n2)sottrazione\n3)divisione\n4)moltiplicazione\n");
    scanf(" %d", &a);
    if(a==1)
    {
        somma= x+y;
        printf("il risultato è %d\n", somma);
    }
    else if(a==2)
    {
        sottrazione=x-y;
        printf("il risultato è %d\n", sottrazione);
    }
    else if(a==3)
    {
        divisione=x/y;
        printf("il risultato è %d\n", divisione);
    }
    else if(a==4)
    {
        moltiplicazione=x*y;
        printf("il risultato è %d\n", moltiplicazione);
    }
    else 
    {
        printf("hai digitato una lettera un segno o un numero errato\n");
    }
    return 0;
}