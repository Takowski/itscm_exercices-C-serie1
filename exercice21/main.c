#include <stdio.h>
#include <stdlib.h>

int main() {

    float pourcentageEpreuve;

    printf("Entrez le pourcentage obtenu:\n");
    scanf("%f", &pourcentageEpreuve);

    if (pourcentageEpreuve >= 60.00 && pourcentageEpreuve < 70) {
        printf("Grade obtenu: Satisfaction\n");
    }
    if (pourcentageEpreuve >= 70 && pourcentageEpreuve < 80) {
        printf("Grade obtenu: Distinction\n");
    }
    if (pourcentageEpreuve >= 80 && pourcentageEpreuve < 90) {
        printf("Grade obtenu: Grande distinction\n");
    }
    if (pourcentageEpreuve >= 90) {
        printf("Grade obtenu: La plus grande distinction\n");
    }
    if (pourcentageEpreuve<60) {
        printf("Grade obtenu: Insuffisant\n");
    }

    return 0;
}
