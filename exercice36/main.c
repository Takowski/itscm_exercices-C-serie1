#include <stdio.h>
/*
Réécrire l’algorithme précédent, mais cette fois-ci on ne connaît pas à l’avance combien l’utilisateur souhaite
saisir de nombres. La saisie des nombres s’arrête lorsque l’utilisateur entre un zéro.
 */

int main() {

    int nombre=-1, position = 0,nombreBuffer=0,positionBuffer=0;

    do {
        positionBuffer++;

        printf("Entrez le nombre numéro %d:",positionBuffer);

        scanf("%d", &nombreBuffer);

        if (nombreBuffer > nombre) {

            nombre = nombreBuffer;

            position = positionBuffer;

        }

    } while (nombreBuffer != 0);

    printf("c'est le nombre numéro %d le plus grand", position);

    return 0;
}