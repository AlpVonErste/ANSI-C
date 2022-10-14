#include <stdio.h>
#include <stdlib.h>

/*
Erstellen Sie bitte eine rekursive Funktion, die in Abhängigkeit vom ganzzahligen Übergabewert dessen „Quersumme“ zurückgibt.
*/

quersummeNormal(int zahl)
{
    int arr[101], help = zahl, summe = 0, counter=0;
    do
    {
        arr[counter] = help % 10;
        help = help / 10;
        counter++;
    }
    while(help>0);

    for(int i=0; i<counter; i++)
    {
        summe = summe + arr[i];
    }

    printf("%d", summe);
}

quersummeRekursive(int zahl)
{
    int help, arr[101], counter=0;
    int summe = 0;
    if(zahl>0)
    {
        help = zahl % 10;
        summe = help + quersummeRekursive(zahl/10);
        return summe;
    }
}

int main()
{
    int zahl=12345;

    printf("%d", quersummeRekursive(zahl));
    return 0;
}
