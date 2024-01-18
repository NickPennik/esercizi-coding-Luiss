// il programma prende due valori e una funzione deve inverire il valore con il secondo e viceversa

#include <stdio.h>

int inverti()
{
    int x;
    int y;
    int i = 0;

    printf("assegnare due valori alle variabili x e y\n");
    scanf("%d\n%d", &x, &y);
    printf("invertiamo il primo valore con il secondo\n");
    printf("%d\n", y);
    printf("ed ora il secondo con il primo\n");
    printf("%d\n", x);
}

int main()
{
    int i = 0;

    while (i<1)
    {
        i= i+1;
        inverti();
    }
    return 0;
}