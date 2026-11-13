#include <stdio.h>

#define DIAS 7

int main(void) {
    float teno[DIAS]; //venta
    float suma = 0, promedio = 0;
    float bruno; //mayor venta
    int edu = 0; // dia mayor
    float jor; //meta
    int diasSobreMeta = 0;

    printf("Captura de datos\n");
    for (int i = 0; i < DIAS; i++) {
        printf("Ingrese la venta del dia %d: $", i + 1);
        scanf("%f", &teno[i]);
        suma += teno[i];
    }
    printf("Ingrese la meta de ventas a evaluar por dia: $\n");
    scanf("%f", &jor);

    promedio = suma / DIAS;
    bruno = teno[0];
    edu = 1;

    for (int i = 0; i < DIAS; i++) {
    
        if (teno[i] > bruno) {
            bruno = teno[i];
            edu = i + 1;
        }

        if (teno[i] > jor) {
            diasSobreMeta++;
        }
    }

    printf("Resultados finales\n");
    
    printf("-> Ventas registradas por dia:\n");
    for (int i = 0; i < DIAS; i++) {
        printf("   Dia %d: $%.2f\n", i + 1, teno[i]);
    }

    printf("Total de ventas acumuladas: $%.2f\n", suma);
    printf("Promedio de ventas: $%.2f\n", promedio);
    printf("Venta maxima: $%.2f (ocurrio en el dia %d)\n", bruno, edu);
    printf("Dias que superaron la meta de $%.2f: %d dia(s)\n", jor, diasSobreMeta);

    return 0;
}