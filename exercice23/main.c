#include <stdio.h>
/*Écrire un programme qui lit un entier représentant un mois de l’année (1 pour janvier, 4 pour avril...) et qui
affiche le nombre de jours de ce mois (on supposera qu’on n’est pas en présence d’une année bissextile). On
tiendra compte du cas où l’utilisateur fournit un numéro incorrect, c’est-à-dire non compris entre 1 et 12.
*/
int main() {

    int mois;

    printf("introduisez le mois de l'année désiré pour connaitre le nombres de jour de celui-ci:\n");
    scanf("%d",&mois);

    switch (mois) {
        case 1:
            printf("31jours en janvier\n");
            break;
        case 2:
            printf("28jours en fevrier\n");
            break;
        case 3:
            printf("31 jours en mars\n");
            break;
        case 4:
            printf("30 jours en avril\n");
            break;
        case 5:
            printf("31 jours en mai\n");
            break;
        case 6:
            printf("30 jours en Juin\n");
            break;
        case 7:
            printf("31 jours enJuillet\n");
            break;
        case 8:
            printf("31 jours en aout\n");
            break;
        case 9:
            printf("30 jours en septembre\n");
            break;
        case 10:
            printf("31 jours en octobre\n");
            break;
        case 11:
            printf("30 jours en novembre\n");
            break;
        case 12:
            printf("31 jours en decembre\n");
            break;
        default:
            printf("le numero doit etre compris entre 1 et 12\n");
    }


    return 0;
}
