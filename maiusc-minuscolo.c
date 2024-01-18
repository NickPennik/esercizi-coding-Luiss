#include <stdio.h>

int main()
{
    char stringa [1000];
    int i = 0;
  
    printf("inserisci un testo\n");
    scanf(" %[^\t\n]s", stringa);
    while(stringa[i] != '\0')
    {
        if(stringa[i]>=97 && stringa[i]<=122)
        {
            stringa[i]=stringa[i]-32;
        }
        i++;
    }
     printf("ecco il tuo testo in maiuscolo: %s\n", stringa);
    return 0;
}