#include <stdio.h>
/*
Ecrire un algorithme qui demande un nombre compris entre 15 et 25, jusqu’à ce que la réponse convienne. En
cas de réponse supérieure à 25, on fera apparaître un message : « Plus petit ! », et inversement, « Plus grand !
» si le nombre est inférieur à 15.
*/
int main() {
    int nombre = 0;
    do {
        printf("Introduisez un nombre entre 15 et 25\n");
        scanf("%d", &nombre);
        if (nombre > 25) {
            printf("Plus grand !\n");
        }else if (nombre < 15) {
            printf("Plus petit !\n");
        }
    }
    while (nombre < 15 || nombre > 25);
   printf("la réponse convient");

    return 0;
}