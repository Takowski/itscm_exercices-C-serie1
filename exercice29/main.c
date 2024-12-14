#include <stdio.h>
/*
*Écrire un programme qui affiche les carrés des nombres entiers de 7 à 20.
Le résultat doit ressembler à :
Le carré de 7 est 49
Le carré de 8 est 64
….
*/
int main() {
    int nombre1 = 7, nombre2 = 20;
    printf("carré des nombre entre %d et %d\n",nombre1,nombre2);
    for (int i = nombre1; i <= nombre2; i++) {
        printf("le carré de %d est %d\n",i,i*i);
    }
    return 0;
}
