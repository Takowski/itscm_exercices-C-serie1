#include <stdio.h>
/*
*Ecrire un algorithme qui demande un nombre de départ, et qui ensuite écrit la table de multiplication de ce
nombre, présentée comme suit (dans le cas où l'utilisateur entre le nombre 7) :
Table de 7 :
7 x 1 = 7
7 x 2 = 14
7 x 3 = 21
…
7 x 10 = 70
*/

int main() {
    int nombre;
printf("Introduisez un nombre\n");
    scanf("%d",&nombre);
    printf("Table de %d:\n",nombre);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d =%d\n", i,nombre,i*nombre);
    }
    return 0;
}
