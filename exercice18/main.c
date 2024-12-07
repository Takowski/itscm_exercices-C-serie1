#include <stdio.h>

int main() {
    double number = 0;

    printf("Introduisez un nombre pour déterminer si il est positif:\n");

    scanf("%lf", &number);

    if (number > 0) {
        printf("le nombre est positif\n");
    } else {
        printf("le nombre n'est pas positif\n");
    }

    return 0;
}
