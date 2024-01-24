#include <stdio.h>

int checkNum(char *on) 
{
    int err = 0;
    int n = 0;
    while (on[n] != '\0' && err == 0) 
    {
        if  (on[n] < 48 || on[n] > 57){
            printf("\33[31Inserisci un numero per favore, adesso riprova\n\033[0m");
            err = 1;
        }
        n++;
    }
    return (err);
}

int main()
{
    char stringa [1000];
    char eta;
    char altezza;
    int an;
    int num = 1;
    char a [30];
    char b [30];
    char c [30];
    char d [30];
    char e [30];
    char f [30];
    char g [30];
    int j;

    while(num != 0)
    {
        printf("\033[33mDescrizione:");
        printf("Salve, anche tu qui perchè non sai come vestirti?\nBene, questo luogo è PERFETTO per te.\nInserisci i tuoi dati personali e consentici di poterti aiutare al meglio.\n\033[0m");
        printf("età:");
        scanf(" %[^\t\n]s", &eta);
        printf("altezza in cm:");
        scanf(" %[^\t\n]s", &altezza);
        printf("e infine il tuo nome utente: ");
        scanf(" %[^\t\n]s", stringa);
        printf("\033[33mBentornato %s, o in caso non ci conoscessi, benvenuto\n", stringa);
        printf("Ora che sappiamo che sei uno di noi possiamo passare alle domande veramente importanti.\n");
        printf("Che tipo di serata affronterai stasera\033[0m\n1)elegante\n\033[0m2)\033[32mserata tra amici\n\033[0m3)\033[35mdiscoteca\n\033[0m4)\033[34mpranzo dalla nonna\n\033[0m");
        scanf(" %d", &an);
        if(an==1)
        {
            printf("Hai selezionato serata \"elegante\", se non è la zona in cui volevi entrare, premere 1 per riavviare l'app,\nse invece pensi di essere nel luogo giusto, premi 2\n");
            scanf("%d", &num);
            if (num != 1)
            {
                printf("Gli outfit consigliati per serata \"elegante\", sono i seguenti:\n");
                printf("1)Pantalone nero, camicia bianca, giacca nera\n2)Pantalone blu scuro, camicia bianca, giacca blu scuro\n3)Pantalone grigio chiaro, camicia nera, giacca nera\n4)Pantalone grigio scuro, camicia bianca, giacca grigio scuro\n");
                break;
            }
        }
        else if(an==2)
        {
            printf("\033[32mHai selezionato serata \"tra amici\", se non è la zona in cui volevi entrare, premere 1 per riavviare l'app,\nse invece pensi di essere nel luogo giusto, premi 2\n\033[0m");
            scanf("%d", &num);
            if (num != 1)
            {
                printf("Gli outfit consigliati per serata \"tra amici\", sono i seguenti:\n");
                printf("1)Cargo beige, maglietta nera, maglione nero\n2)Jeans neri, maglietta bianca, felpa viola\n3)Blu jeans, maglietta bianca, felpa bianca\n4)Jeans grigio, magietta nera, felpa nera\n5)Tuta nera, maglietta bianca, felpa bianca\n6)Cargo beige, maglietta nera,  maglione rosso\n7)Tuta grigio chiaro, maglietta nera, felpa nera\n");
                break;
            }
        }
        else if(an==3)
        {
            printf("\033[35mHai selezionato serata \"disco\", se non è la zona in cui volevi entrare, premere 1 per riavviare l'app,\nse invece pensi di essere nel luogo giusto, premi 2\n\033[0m");
            scanf("%d", &num);
            if (num != 1)
            {
                printf("Gli outfit consigliati per serata \"disco\", sono i seguenti:\n");
                printf("1)Blue jeans strappati, maglietta bianca\n2)Blue jeans, camicia bianca\n3)Blue jeans, maglietta nera\n4)Pantaloni neri, maglietta bianca\n");
                break;
            }
        }
        else if(an==4)
        {
            printf("\033[34mHai selezionato \"pranzo dalla nonna\", se non è la zona in cui volevi entrare, premere 1 per riavviare l'app,\nse invece pensi di essere nel luogo giusto, premi 2\n\033[0m");
            scanf("%d", &num);
            if (num != 1)
            {
                printf("Gli outfit consigliati per \"pranzo dalla nonna\", sono i seguenti:\n");
                printf("1)Blue jeans, maglietta bianca, maglione blu scuro\n2)Jeans grigio chiaro, maglietta nera, maglione nero a collo alto\n3)Cargo beige, maglietta blu, maglione blu a collo alto\n4)Pantalone beige, maglietta nera, maglione nero a collo alto\n");
                break;
            }
        }
    }
    printf("\033[33mSe pensi di fare serata, digita 3, se invece pensi di riuscire a controllarti premi un altro tasto\n");
    scanf("%d", &j);
    if (j==3)
    {
        printf("Ti consiglio di salvarti alcuni contatti (scrivi i numeri attacati fra loro):\n\033[0m");
        while(1)
        {
            printf("Mamma\n");
            scanf(" %s", a); 
            if(checkNum(a) == 1)
            {
                continue;
            }
            else 
            {
                printf("Mamma: %s\n", a);
            }
            printf("Papà\n");
            scanf(" %s", b); 
            if(checkNum(b) == 1)
            {
                continue ;
            }
            else 
            {
                printf("Papà: %s\n", b);
            }
            printf("Sorella/Fratello\n");
            scanf(" %s", c);
            if(checkNum(c) == 1)
            {
                continue ;
            }
            else 
            {
                printf("Sorella/Fratello: %s\n", c);
            }
            printf("Nonna\n");
            scanf(" %s", d);
            if(checkNum(d) == 1)
            {
                continue ;
            }
            else 
            {
                printf("Nonna: %s\n", a);
            }
            printf("Amico\n");
            scanf(" %s", e);
            if(checkNum(e) == 1)
            {
                continue ;
            }
            else
            {
                printf("Amico: %s\n", e);
                break;
            }        
        }
        printf("\033[33mAh, io bloccherei anche qualche numero ''proibito'', così per sicurezza:\n\033[0m");
        while (1)
        {
            printf("Ex fidanzata\n");
            scanf(" %s", f); 
            if(checkNum(f) == 1)
            {
                continue;
            }
            else 
            {
                printf("Ex: %s\n", f);
            }
            printf("Persona verso cui provi rancore\n");
            scanf(" %s", g); 
            if(checkNum(g) == 1)
            {
                continue;
            }
            else 
            {
                printf("Persona verso cui provi rancore: %s\n", g);
                break;
            }
        }
    }
    printf("\033[33mBuona serata allora, cerca di non fare danni ;)!\n\033[0m");
    return 0;
}