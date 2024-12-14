#include <stdio.h>
#include <stdlib.h>

int main() {
    double repro10 = 0.10, repro20 = 0.09, reproplus = 0.08, montantFacture = 0, nombreCopie = 0;

    printf("Indiquez le nombre de copie souhaitées:\n");

    scanf("%f", &nombreCopie);

    if (nombreCopie > 30) {
        montantFacture += (nombreCopie - 30) * reproplus;
        montantFacture += 20 * repro20;
        montantFacture += 10 * repro10;
    } else if (nombreCopie > 10 && nombreCopie <= 30) {
        montantFacture += (nombreCopie - 10) * repro20;
        montantFacture += 10 * repro10;
    } else {
        montantFacture += nombreCopie * repro10;
    }
    printf("Vous devez : %.2f€\n", montantFacture);


    return 0;
}
