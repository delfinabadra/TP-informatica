#include <stdio.h>

#define TAM 5
#define CODIGO_MINIMO 1
#define CODIGO_MAXIMO 999999999

int main(void) {
    int codigos[TAM];
    float precios[TAM];
    int codigo;
    float precio;
    int posicionMayor = 0;
    int posicionMenor = 0;

    printf("Ingrese %d productos, se solicitara el codigo y precio:\n\n", TAM);

    for (int i = 0; i < TAM; i++) {
        do {
            printf("Ingrese el codigo de barras (1-999999999): ");
            if (scanf("%d", &codigo) != 1) {
                printf("Error. Debe ingresar un numero entero.\n");
                while (getchar() != '\n') {
                }
                codigo = 0;
            } else if (codigo < CODIGO_MINIMO || codigo > CODIGO_MAXIMO) {
                printf("Error. El codigo de barras debe estar entre 1 y 999999999\n");
            }
        } while (codigo < CODIGO_MINIMO || codigo > CODIGO_MAXIMO);

        codigos[i] = codigo;

        do {
            printf("Ingrese el precio: ");
            if (scanf("%f", &precio) != 1) {
                printf("Error. Debe ingresar un precio numerico.\n");
                while (getchar() != '\n') {
                }
                precio = -1.0f;
            } else if (precio < 0) {
                printf("Error. El precio no puede ser negativo.\n");
            }
        } while (precio < 0);

        precios[i] = precio;

        if (i > 0) {
            if (precios[i] > precios[posicionMayor]) {
                posicionMayor = i;
            }
            if (precios[i] < precios[posicionMenor]) {
                posicionMenor = i;
            }
        }
    }

    printf("\nCodigo       Precio\n");
    for (int i = 0; i < TAM; i++) {
        printf("%9d %12.2f\n", codigos[i], precios[i]);
    }

    printf("\nMas caro: [%d] %.2f\n", codigos[posicionMayor], precios[posicionMayor]);
    printf("Mas barato: [%d] %.2f\n", codigos[posicionMenor], precios[posicionMenor]);

    return 0;
}