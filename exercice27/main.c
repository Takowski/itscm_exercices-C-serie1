#include <stdio.h>
/*Écrire un programme qui demande à l’utilisateur de lui fournir un nombre entier positif et inférieur à 100 et
ceci jusqu’à ce que la réponse soit satisfaisante. Le dialogue avec l’utilisateur se présentera ainsi :
donnez un entier positif inférieur à 100 :
453
donnez un entier positif inférieur à 100 :
25
merci pour le nombre 25
*/

int main() {
    int nombre;

    do {
        printf("Fournissez un nombre inférieur a 100.\n");
        scanf("%d", &nombre);
       }
    while (nombre > 100);

    printf("merci pour le nombre %d", nombre);

    return 0;
}
