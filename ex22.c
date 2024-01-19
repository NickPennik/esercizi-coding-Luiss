// il programma prende due valori e una funzione deve inverire il valore con il secondo e viceversa

#include <stdio.h>

void inverti(int *x, int *y)
{
    int temp;

    temp = *x;
    *x=*y;
    *y=temp;
   
}

int main()
{
    int x;
    int y;

    printf("assegnare due valori alle variabili x e y\n");
    scanf("%d %d", &x, &y);
    printf("x:%d e y:%d\n", x, y);

    inverti(&x, &y);
    printf("x:%d e y:%d\n", x, y);
   
    return 0;
}