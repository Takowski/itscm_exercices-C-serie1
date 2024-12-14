#include <stdio.h>
/*
Ecrire un algorithme qui demande un nombre de départ, et qui calcule sa factorielle.
NB : la factorielle de 9, notée 9!, vaut
1 x 2 x 3 x 4 x 5 x 6 x 7 x 8 x 9
*/
int main() {

    int nombre = 0, addition = 0;

    printf("Introduisez un nombre\n");

    scanf("%d", &nombre);

    printf("la factorielle de %d ,notée %d!,vaut\n", nombre, nombre);

    for (int i = 1; i <= nombre; i++) {

        printf("%d", i);

        addition *= i;

        if (i < nombre)
            printf(" x ");
    }

    return 0;
}
