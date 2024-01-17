#include <stdio.h>
int main(){
    int a;

    printf("che anno sei nato?\n");
    scanf(" %d", &a);
               if(a>1969)
                {
                    printf("sei nato/a %d", a-1969);
                    printf(" anni dopo il primo passo dell'uomo sulla Luna\n");
                }
    else if(a<1969) 
    {
        printf("sei nato/a %d", 1969-a);
        printf(" anni prima del primo passo dell'uomo sulla Luna\n");
    }
    else 
    {
        printf("sei nato lo stesso anno del primo passo dell'uomo sulla Luna\n");
    }
    return 0;
}