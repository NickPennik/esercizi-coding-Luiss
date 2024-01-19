#include <stdio.h>

int main()
{
    char stringa [1000];
    int eta;
    int altezza;
    int a;
    int num = 1;

    while(num != 0){
        printf("Descrizione:");
        printf("Salve, anche tu qui perchè non sai come vestirti?\nBene, questo luogo è PERFETTO per te.\nInserisci i tuoi dati personali e consentici di poterti aiutare al meglio.\n");
        printf("età:");
        scanf(" %d", &eta);
        printf("altezza in cm:");
        scanf(" %d", &altezza);
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
                /break;
            }
        }
        else if(a==2)
        {
            printf("Hai selezionato serata \"tra amici\", se non è la zona in cui volevi entrare, premere 1 per riavviare l'app,\nse invece pensi di essere nel luogo giusto, premi 2\n");
            scanf("%d", &num);
            if (num != 1)
            {
                /break;
            }
        }
        else if(a==3)
        {
            printf("Hai selezionato serata \"disco\", se non è la zona in cui volevi entrare, premere 1 per riavviare l'app,\nse invece pensi di essere nel luogo giusto, premi 2\n");
            scanf("%d", &num);
            if (num != 1)
            {
                /break;
            }
        }
        else if(a==4)
        {
            printf("Hai selezionato \"elegapranzo dalla nonna\", se non è la zona in cui volevi entrare, premere 1 per riavviare l'app,\nse invece pensi di essere nel luogo giusto, premi 2\n");
            scanf("%d", &num);
            if (num != 1)
            {
                /break;
            }
        }
    }
    return 0;
}