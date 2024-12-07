#include <stdio.h>

int main() {
    float prixHorstaxes = 0;
    double TauxTva = 0.21;

    printf("indiquez le montant hors taxe total des articles\n");

    scanf("%f", &prixHorstaxes);

    const double prixTtc = prixHorstaxes + prixHorstaxes * TauxTva;

    printf("le prix de base est: %.2f€\n", prixTtc);

    if (prixTtc > 2500) {
        double reduction2pc = prixTtc * 0.02;
        printf("remise obtenue de 2%% : %.2f€\n le nouveau montant est: %.2f€\n", reduction2pc, prixTtc - reduction2pc);
    } else if (1500 < prixTtc && prixTtc < 2500) {
        double reduction1pc = prixTtc * 0.01;
        printf("remise obtenue de 1%% : %.2f€\n le nouveau montant est: %.2f€\n", reduction1pc, prixTtc - reduction1pc);
    } else {
        printf("le montant ne bénéficie pas de reduction: %.2f€\n", prixTtc);
    }

    return 0;
}
