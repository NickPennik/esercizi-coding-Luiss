#include <stdio.h>


int main()
{
    char lettera;
    int a;
    int e;
    int i;
    int o;
    int u;

    printf("inserisci una lettera per sapere se si tratta di una vocale o di una consonante\n");
    scanf("%c", &lettera);
    
    if (lettera == 97 || lettera== 101 || lettera==105 || lettera==111 || lettera==117)
    {
        printf("la tua lettera è una vocale\n");
    }
    else
    {
        printf("la tua lettera è una consonante o hai sbagliato a digitare la lettera\n");
    }

    return 0;
}