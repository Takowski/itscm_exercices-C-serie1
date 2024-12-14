#include <stdio.h>
/*
Ecrire un algorithme qui demande un nombre de départ, et qui calcule la somme des entiers jusqu’à ce nombre.
Par exemple, si l’on entre 6, le programme doit calculer :
1 + 2 + 3 + 4 + 5 + 6 = 21
*/

int main() {
    int nombre=0, somme=0;

    printf("Introduisez un nombre\n");

    scanf("%d", &nombre);

    printf("addition successive des nombres jusqu'à %d:\n", nombre);

    for (int i =1; i <= nombre; i++) {

        printf("%d", i);

        somme += i;

        if (i < nombre)
            printf(" + ");
    }
    printf(" = %d\n", somme);
    return 0;
}

