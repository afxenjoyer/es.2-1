#include <stdio.h>

int main()
{
    float primonumero;
    float secondonumero;
    float media;

    printf("Inserisci il primo numero di cui fare la media\n");
    scanf("%f", &primonumero);
    printf("Inserisci il secondo numero di cui vuoi fare la media\n");
    scanf("%f", &secondonumero);

    media = (primonumero + secondonumero)/2;
    printf("La media dei due numeri è %f\n", media);
}
