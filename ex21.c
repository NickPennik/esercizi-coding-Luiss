#include <stdio.h>
float sqrtu(float delta)
{
    float temp, radice;

    radice = delta / 2;
    temp = 0;

    while(radice != temp) {
        temp = radice;
        radice = ( delta/temp + temp) / 2;
    }
    return radice;
}

int main()
{
    float a;
    float b;
    float c;
    float delta;
    float x1;
    float x2;
    

    printf("inserisci tre variabili a, b e c da inserire nel delta\n");
    scanf(" %f", &a);
    scanf(" %f", &b);
    scanf(" %f", &c);
    delta= b*b - 4*a*c;
    if(delta>0)
    {
        x1=(-b + sqrtu(delta))/2*a;
        x2=(-b - sqrtu(delta))/2*a;
        printf("i valori delle sue x sono %f e %f\n", x1, x2);
    }
    else if (delta<0)
    {
        printf("l'equazione non ammette soluzioni reali poichè il delta è %f\n", delta);
    }
    else 
    {
        x1=(-b + sqrtu(delta))/2*a;
        x2=(-b - sqrtu(delta))/2*a;   
        printf("il delta è uguale a %f\n", delta);
    }
    return 0;
}