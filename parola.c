#include <stdio.h>


int main()
{
    char parola [5]={'c','i','a','o','!'};
    char parola2 [5]={'c','i','\0','o','!'};

    printf("%s\n", parola);
    printf("%s\n", parola2);
    return 0;
}