#include <stdio.h>

int main()
{
    float primoNumero;
    float secondoNumero;
    float media;

    printf("Inserisci il primo numero di cui fare la media\n");
    scanf("%f", &primoNumero);
    printf("Inserisci il secondo numero di cui vuoi fare la media\n");
    scanf("%f", &secondoNumero);

    media = (primoNumero + secondoNumero)/2;
    printf("La media dei due numeri è %f\n", media);

    return 0;
}
