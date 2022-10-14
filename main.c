#include <stdio.h>
#include <stdlib.h>

grosschreiben(char arr[], int length)
{
    for(int i=0; i<length; i++)
    {
        if(arr[i] >= 'a' && arr[i] <= 'z')
        {
            arr[i] = arr[i] - 32;
        }
    }
}

int main()
{
    char arr[101];
    int length;

    printf("Geben Sie bitte einen Text ein: ");
    fflush(stdin);
    scanf("%[^\n]", arr);

    length = strlen(arr);

    grosschreiben(arr, length);

    printf("%s", arr);


    return 0;
}
