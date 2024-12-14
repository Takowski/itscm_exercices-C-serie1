#include <stdio.h>
#include <stdlib.h>
/*Exercice 25 :
Ecrire un algorithme qui demande à l’utilisateur de saisir 2 horaires (en heures, minutes et secondes au clavier)
et ensuite calcule et affiche le temps écoulé entre les deux horaires (en secondes).
*/
int main() {

    int horaire1,horaire2,difference ,heure, minute, seconde;

    printf("Saisissez un premier horaire de train hh:mm:ss \n");

    scanf("%d:%d:%d", &heure, &minute, &seconde);

    horaire1 += (heure * 3600 + minute * 60 + seconde);

    printf("Saisissez un second horaire de train hh:mm:ss \n");

    scanf("%d:%d:%d", &heure, &minute, &seconde);

    horaire2 += (heure * 3600 + minute * 60 + seconde);

    difference = horaire1 - horaire2;

    difference<0?difference*=-1:difference;

    printf("le temps écoulé entre les deux horaires est de %d secondes", difference);

    return 0;
}



