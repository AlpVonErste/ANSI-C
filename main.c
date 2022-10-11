#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id;
    char nachname[101];
}
KUNDE;

SELECTnachnameWHEREid_x(KUNDE arr[], int x, int length)
{
    int treffer;

    for(int i=0; i<length; i++)
    {
        if(x == arr[i].id)
        {
            printf("%s\n", arr[i].nachname);
            return 1;
        }


    }
    return 0;
}

int main()
{
    KUNDE arr[3];
    int x, rueckgabe;

    for(int i=0; i<3; i++)
    {
        printf("Enter lastname: ");
        fflush(stdin);
        scanf("%[^\n]", arr[i].nachname);
        arr[i].id = i+1;
    }

    printf("Enter ID:");
    fflush(stdin);
    scanf("%d", &x);

    rueckgabe = SELECTnachnameWHEREid_x(arr, x, 3);

    if(rueckgabe == 1) printf("treffer");
    else printf("Es gibt keine treffer");

    return 0;
}
