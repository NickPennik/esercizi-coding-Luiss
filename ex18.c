#include <stdio.h>

int main()
{
    char a;
    int i = 0;

    printf("digita v per vedere la scaletta di numeri pari da 0 a 100\n");
    scanf(" %c", &a);
    while(i<100)
    {
        printf("%d\n", i+2);
        i = i+2;
    }
    return 0;
}