#include <stdio.h>

int main()
{
    char a;
    int i = 100;

    printf("digita v per vedere la scaletta di numeri pari da 0 a 100\n");
    scanf(" %c", &a);
    while(0<i)
    {
        printf("%d\n", i);
        i = i-2;
    }
    return 0;
}