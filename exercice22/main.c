#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float repro10 = 0.10,
          repro20 = 0.09,
          reproplus = 0.08,
          montantFacture = 0;

    char buffer[10];
    int nombreCopie = 0;

    printf("Entrez le nombre de copies que vous désirez imprimer : ");
    if (fgets(buffer, sizeof(buffer), stdin) != NULL)
    {
        if (sscanf(buffer, "%d", &nombreCopie) == 1)
        {
            if (nombreCopie > 30)
            {
                montantFacture += (nombreCopie - 30) * reproplus;
                montantFacture += 20 * repro20;
                montantFacture += 10 * repro10;
            }
            else if (nombreCopie > 10 && nombreCopie <= 30)
            {
                montantFacture += (nombreCopie - 10) * repro20;
                montantFacture += 10 * repro10;
            }
            else
            {
                montantFacture += nombreCopie * repro10;
            }
            printf("Vous devez : %.2f€\n", montantFacture);
        }
        else
        {
            printf("Entrée non valide.\n");
        }
    }
    else
    {
        printf("Erreur de lecture de l'entrée.\n");
    }

    return 0;
}