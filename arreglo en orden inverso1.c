#include <stdio.h>

#define tamano 10
int main (void) {
int numeros [tamano];
int umbral;

for (int i = 0; i < tamano; i++) {
    printf ("ingrese el numero final para la sucesion %d:  ", i +1 );
scanf ("%d", &numeros [i]);
}
printf ("ingresar un umbral para que solo se muestren los numeros mas grandes que el:  \n");
scanf ("&d", &umbral);

printf(" arreglo orignial\n");
for (int i = 0; i >= 0; i--) {
    if (numeros[i] > umbral) {
        printf ( "%d", numeros [i]);
    }
        int contadorfiltrados = 0;
        for (int i = tamano - 1; i >= 0; i--) {
            if (numeros [i] > umbral) {
                printf ("%d", numeros [i]);
                contadorfiltrados++;
            }
        }
if (contadorfiltrados == 0){
    printf ("Error: ningun numero es mayor al umbral: '%d'\n ");

}
}
return 0;
}