#include <stdio.h>

int main(void) {
    float distanza, euroKg, urgenza, Kg;


    printf("Inserire distanza (Km)\n");
    scanf("%f", &distanza);

    printf("Inserire urgenza (non urgente = 0, urgente = 1)\n");
    scanf("%f", &urgenza);

    printf("Inserire Kg\n");
    scanf("%f", &Kg);


    if (urgenza == 0 && distanza < 100) {
        euroKg = 1;
    } else if (urgenza == 0 && distanza >= 100 && distanza <= 300) {
        euroKg = 2;
    } else if (urgenza == 0 && distanza >= 300) {
        euroKg = 3;
    } else if (urgenza == 1 && distanza < 100) {
        euroKg = 2.5;
    } else if (urgenza == 1 && distanza >= 100 && distanza <= 300) {
        euroKg = 3.5;
    } else if (urgenza == 1 && distanza >= 300) {
        euroKg = 4;
    }


    euroKg = euroKg * Kg;


    printf("Costo totale: %.2f euro\n", euroKg);

    return 0;
}
