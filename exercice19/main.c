#include <stdio.h>

int main() {
    double number = 0;

    printf("Introduisez un nombre\n");

    scanf("%lf", &number);

    if (number > 0) {
        printf("Le nombre est positif\n");
    } else if (number == 0) {
        printf("le nombre est egale à zero\n");
    } else {
        printf("Le nombre est négatif\n");
    }
    return 0;
}

