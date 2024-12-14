#include <stdio.h>
/*Cet algorithme est destiné à indiquer l’heure qu’il sera une seconde plus tard de l’heure entrée.
L’utilisateur devra introduire au clavier l’heure, les minutes et les secondes, et l’ordinateur affichera l’heure
qu’il sera une seconde plus tard.
Par exemple, si l'utilisateur tape 21 (pour les heures), 32 (pour les minutes) et 8 (pour les secondes),
l'algorithme doit répondre : "Dans une seconde, il sera 21 heure(s), 32 minute(s) et 9 seconde(s)".
Vous devez vérifier que l’heure entrée par l’utilisateur est correcte !
*/
int main() {
    int heures, minutes, secondes;

    printf("Veuillez introduire l'heure actuelle sous le format hh:mm:ss\n");

    scanf("%d:%d:%d", &heures, &minutes, &secondes) != 3;

    if (heures < 0 || heures > 23 || minutes < 0 || minutes > 59 || secondes < 0 || secondes > 59) {
        printf("L'heure entrée est invalide !\n");
        return 1;
    }

    secondes++;
    if (secondes == 60) {
        secondes = 0;
        minutes++;
        if (minutes == 60) {
            minutes = 0;
            heures++;
            if (heures == 24) {
                heures = 0;
            }
        }
    }

    printf("Dans une seconde, il sera %02d:%02d:%02d\n", heures, minutes, secondes);

    return 0;
}
