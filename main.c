#include <stdio.h>
#include <stdlib.h>

struct x
{
    int inhalt;
    struct x* naechstesFeld;
};

typedef struct x INT_Liste;

INT_Liste start;

neuesFeldFuellen(INT_Liste* adresse, int wert)
{
    INT_Liste* neueAdresse=malloc(sizeof(INT_Liste));
}

alleFelder_lesen(INT_Liste* p)
{

}

int main()
{
    INT_Liste liste;

    int anzahl;

    liste.inhalt = 0;
    liste.naechstesFeld = NULL;

    printf("Geben Sie bitte ein, Wieviel weitere Felder an der Liste angehaengt werden sollen: ");
    fflush(stdin);
    scanf("%d", &anzahl);

    for(int i=0; i<anzahl; i++)
    {
        neuesFeldFuellen(&liste, i);
    }

    return 0;
}
