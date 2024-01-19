#include <stdio.h>

int main()
{
    char stringa [1000];
    char eta;
    char altezza;
    int a;
    int num = 1;

    while(num != 0)
    {
        printf("Descrizione:");
        printf("Salve, anche tu qui perchè non sai come vestirti?\nBene, questo luogo è PERFETTO per te.\nInserisci i tuoi dati personali e consentici di poterti aiutare al meglio.\n");
        printf("età:");
        scanf(" %[^\t\n]s", &eta);
        printf("altezza in cm:");
        scanf(" %[^\t\n]s", &altezza);
        printf("e infine il tuo nome utente: ");
        scanf(" %[^\t\n]s", stringa);
        printf("Bentornato %s, o in caso non ci conoscessi, benvenuto\n", stringa);
        printf("Ora che sappiamo che sei uno di noi possiamo passare alle domande veramente importanti.\n");
        printf("Che tipo di serata affronterai stasera\n1)elegante\n2)serata tra amici\n3)discoteca\n4)pranzo dalla nonna\n");
        scanf(" %d", &a);
        if(a==1)
        {
            printf("Hai selezionato serata \"elegante\", se non è la zona in cui volevi entrare, premere 1 per riavviare l'app,\nse invece pensi di essere nel luogo giusto, premi 2\n");
            scanf("%d", &num);
            if (num != 1)
            {
                printf("Gli outfit consigliati per serata \"elegante\", sono i seguenti:\n");
                printf("Infine, ci teniamo a specificare che i colori dei due capi sono interscambiabili tra di loro\n");
                break;
            }
        }
        else if(a==2)
        {
            printf("Hai selezionato serata \"tra amici\", se non è la zona in cui volevi entrare, premere 1 per riavviare l'app,\nse invece pensi di essere nel luogo giusto, premi 2\n");
            scanf("%d", &num);
            if (num != 1)
            {
                printf("Gli outfit consigliati per serata \"tra amici\", sono i seguenti:\n");
                printf("Infine, ci teniamo a specificare che i colori dei due capi sono interscambiabili tra di loro\n");
                break;
            }
        }
        else if(a==3)
        {
            printf("Hai selezionato serata \"disco\", se non è la zona in cui volevi entrare, premere 1 per riavviare l'app,\nse invece pensi di essere nel luogo giusto, premi 2\n");
            scanf("%d", &num);
            if (num != 1)
            {
                printf("Gli outfit consigliati per serata \"disco\", sono i seguenti:\n");
                printf("Infine, ci teniamo a specificare che i colori dei due capi sono interscambiabili tra di loro\n");
                break;
            }
        }
        else if(a==4)
        {
            printf("Hai selezionato \"pranzo dalla nonna\", se non è la zona in cui volevi entrare, premere 1 per riavviare l'app,\nse invece pensi di essere nel luogo giusto, premi 2\n");
            scanf("%d", &num);
            if (num != 1)
            {
                printf("Gli outfit consigliati per \"pranzo dalla nonna\", sono i seguenti:\n");
                printf("Infine, ci teniamo a specificare che i colori dei due capi sono interscambiabili tra di loro\n");
                break;
            }
        }
    }
    return 0;
}