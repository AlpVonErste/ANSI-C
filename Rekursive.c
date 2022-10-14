#include <stdio.h>
#include <stdlib.h>

dezimalNachBinaer(int zahl)
{
    if(zahl>1)
    {
        dezimalNachBinaer(zahl/2);
    }
    printf("%d", zahl%2);
}

int main()
{
    int zahl = 15;

    dezimalNachBinaer(zahl);

    return 0;
}
