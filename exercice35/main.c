#include <stdio.h>
/*
 Ecrire un algorithme qui demande successivement 20 nombres à l’utilisateur, et qui lui dise ensuite quel était
le plus grand parmi ces 20 nombres. Voici comment doit se dérouler le dialogue.
Entrez le nombre numéro 1 : 12
Entrez le nombre numéro 2 : 14
etc.
Entrez le nombre numéro 20 : 6
Le plus grand de ces nombres est : 14
Modifiez ensuite l’algorithme pour que le programme affiche la position de ce nombre :
C’était le nombre numéro 2
 */
int main() {
    int nombre = 0, nombreBuffer = 0,position=0;

    printf("introduisez 20 nombres:\n");
    for (int i = 1; i <= 20; i++) {

        printf("Entrez le nombre numéro %d:", i);
        scanf("%d", &nombreBuffer);
        if (nombreBuffer > nombre) {
            nombre = nombreBuffer;
            position = i;
        }
    }
    printf("c'est le nombre numéro %d", position);
    return 0;
}
