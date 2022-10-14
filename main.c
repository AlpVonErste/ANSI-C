#include <stdio.h>
#include <stdlib.h>

/*
Erstellen Sie bitte eine rekursive Funktion, die (in Abhängigkeit von den Übergabewerten für Breite und Höhe) ein Rechteck zeichnet.
*/

rechteck1(int breite, int hoehe)
{
    for(int i=0; i<hoehe; i++)
    {
        for(int j=0; j<breite; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

rechteckRekursive(int hoehe, int breite, int b)
{
    if(b>0)
    {
        printf("*");
        rechteckRekursive(hoehe, breite, b-1);
    }
    else
    {
        if(hoehe > 1)
        {
            printf("\n");
            rechteckRekursive(hoehe-1, breite, breite);
        }
    }
}

rechteck(int h, int b)
{
    rechteckRekursive(h,b,b);
}

int main()
{
    int breite, hoehe;

    printf("Geben Sie bitte Breite ein: ");
    fflush(stdin);
    scanf("%d", &breite);

    printf("Geben Sie bitte Hoehe ein: ");
    fflush(stdin);
    scanf("%d", &hoehe);

    rechteck(hoehe, breite);

    return 0;
}
