#include <stdio.h>
int main() {
//LINK AL REPO: https://github.com/delfinabadra/TP-BMI.git 
//NOMBRE DE LA RAMA: RamaTP4
    float peso, altura, bmi;
    printf("Ingrese su peso en kg: ");
    scanf("%f", &peso);
    printf("Ingrese su altura en metros: ");
    scanf("%f", &altura);
    
    bmi = peso / (altura * altura);
    
    printf("Su BMI es: %.2f\n", bmi);
    
    printf("          Tabla de referencia BMI   \n");
    printf("| BAJO PESO |   NORMAL   | SOBREPESO | OBESIDAD | \n");
    printf("|  < 18.5   | 18.5 - 24.9| 25 - 29.9 | >= 30    | \n");

    if (bmi < 18.5) {
        printf("Usted tiene bajo peso\n");
    } else if (bmi >= 18.5 && bmi < 25) {
        printf("Usted tiene peso normal\n");
    } else if (bmi >= 25 && bmi < 30) {
        printf("Usted tiene sobrepeso\n");
    } else {
        printf("Usted tiene obesidad\n");
    }
   
    return 0;
}
