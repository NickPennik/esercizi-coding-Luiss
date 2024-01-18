#include <stdio.h>
int main()
{
    int a;
    int i;

    printf("inserisci un numero per sapere se è un numero primo o meno\n");
    scanf(" %d", &a);
    i=a-1;
    if(a>1)
    {
        while(a%i!=0)
        {
            i--;
        }
        if(i==1)
        {
            printf("il numero è primo\n");
        }
        else
        {
            printf("il numero non è primo\n");
        }
    }
    else if(a=1)
    {
        printf("il numero è primo\n");
    }
    else 
    {
        printf("il tuo numero non è un numero primo\n");
    }
    return 0;
}