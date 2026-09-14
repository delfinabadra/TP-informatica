#include <stdio.h>

#define PI 3.1415927f

float calcularAreaRectangulo(float longitud, float altura);
float calcularPerimetroRectangulo(float longitud, float altura);
float calcularAreaCirculo(float radio);
float calcularPerimetroCirculo(float radio);
void imprimirResultados(float area, float perimetro);

int main(void) {
    int figura;
    float longitud;
    float altura;
    float radio;
    float area;
    float perimetro;

    do {
        printf("Ingrese la figura que desea calcular (1: rectangulo, 2: circulo): ");
        if (scanf("%d", &figura) != 1) {
            printf("Entrada invalida. Debe elegir 1 o 2.\n");
            return 1;
        }

        if (figura != 1 && figura != 2) {
            printf("Opcion invalida. Intente nuevamente.\n");
        }
    } while (figura != 1 && figura != 2);

    if (figura == 1) {
        printf("\nOpcion de rectangulo seleccionada\n\n");
        printf("Ingrese la longitud del rectangulo: ");
        if (scanf("%f", &longitud) != 1 || longitud <= 0) {
            printf("La longitud debe ser un numero positivo.\n");
            return 1;
        }

        printf("Ingrese la altura del rectangulo: ");
        if (scanf("%f", &altura) != 1 || altura <= 0) {
            printf("La altura debe ser un numero positivo.\n");
            return 1;
        }

        area = calcularAreaRectangulo(longitud, altura);
        perimetro = calcularPerimetroRectangulo(longitud, altura);
    } else {
        printf("\nOpcion de circulo seleccionada\n\n");
        printf("Ingrese el radio del circulo: ");
        if (scanf("%f", &radio) != 1 || radio <= 0) {
            printf("El radio debe ser un numero positivo.\n");
            return 1;
        }

        area = calcularAreaCirculo(radio);
        perimetro = calcularPerimetroCirculo(radio);
    }

    imprimirResultados(area, perimetro);
    return 0;
}

float calcularAreaRectangulo(float longitud, float altura) {
    return longitud * altura;
}

float calcularPerimetroRectangulo(float longitud, float altura) {
    return 2.0f * (longitud + altura);
}

float calcularAreaCirculo(float radio) {
    return PI * radio * radio;
}

float calcularPerimetroCirculo(float radio) {
    return 2.0f * PI * radio;
}

void imprimirResultados(float area, float perimetro) {
    printf("\nEl area calculada es: %.2f\n", area);
    printf("El perimetro calculado es: %.2f\n", perimetro);
}
