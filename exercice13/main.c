#include <stdio.h>

int main()
{
    int prixUnitaireHt = 0;

    int nombreArticle = 0;

    double tauxTva = 0;

    printf("Prix unitaire HT:\n");

    scanf("%d", &prixUnitaireHt);

    printf("Nombre articles:\n");

    scanf("%d", &nombreArticle);

    printf("Taux de TVA:\n");

    scanf("%lf", &tauxTva);

    const int totalHt = nombreArticle * prixUnitaireHt;

    printf("Prix total HT :%d\n", totalHt);

    const double totalTTC = totalHt + totalHt * (tauxTva / 100);

    printf("Prix total TTC :%.2f\n", totalTTC);

    return 0;
}
