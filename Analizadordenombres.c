#include <stdio.h>
#include <string.h>

int main(void) {
    char teno[50]; //teno es el nombre y jor son las vocales
    int jor = 0;

    printf("Ingresa un nombre: ");
    fgets(teno, sizeof(teno), stdin);

    teno[strcspn(teno, "\n")] = 0;

    int longitud = strlen(teno);

    for (int i = 0; i < longitud; i++) {
        char c = teno[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            jor++;
        }
    }

    printf("Cantidad de vocales minusculas sin acento: %d\n", jor);

    printf("Texto en orden inverso: ");
    for (int i = longitud - 1; i >= 0; i--) {
        printf("%c", teno[i]);
    }
    return 0;
}