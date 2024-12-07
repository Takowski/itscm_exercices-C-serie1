#include <stdio.h>
#include <stdlib.h>

int main()
{
    char buffer[10];
    float pourcentageEpreuve = 0;

    printf("Entrez le pourcentage obtenu:\n");
    if (fgets(buffer, sizeof(buffer), stdin) != NULL)
    {
        if (sscanf(buffer, "%f", &pourcentageEpreuve) == 1)
        {
            printf("Vous avez entré: %g%%\n", pourcentageEpreuve);

            if (pourcentageEpreuve >= 60.00 && pourcentageEpreuve < 70)
            {
                printf("Grade obtenu: Satisfaction\n");
            }
            else if (pourcentageEpreuve >= 70 && pourcentageEpreuve < 80)
            {
                printf("Grade obtenu: Distinction\n");
            }
            else if (pourcentageEpreuve >= 80 && pourcentageEpreuve < 90)
            {
                printf("Grade obtenu: Grande distinction\n");
            }
            else if (pourcentageEpreuve >= 90)
            {
                printf("Grade obtenu: La plus grande distinction\n");
            }
            else
            {
                printf("Grade obtenu: Insuffisant\n");
            }
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