#include <stdio.h>
/*Ecrire un algorithme qui demande à l’utilisateur un nombre compris entre 1 et 3 jusqu’à ce que la réponse
convienne.  */

int main() {
    int nombre = 0;
    do {
        printf("Introduisez un nombre entre 1 et 3\n");
        scanf("%d", &nombre);
    }
    while (nombre < 1 || nombre > 3);
    printf("le Nombre est entre 1 et 3\n");
    return 0;
}
