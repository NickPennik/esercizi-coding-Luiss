#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;

    printf("inserisci un numero per conoscere la radice quadrata\n");
    scanf(" %d", &a);
    c=a/2;
    b=(a/c+c)/4;
    printf("la radice quadrata del tuo numero è %d\n", b);
    return 0;
}