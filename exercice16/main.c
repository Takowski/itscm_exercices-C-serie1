#include <stdio.h>

int main() {
    int a = 0,
            b = 0;
    printf("Introduisez 2 nombres pour determiner si ils sont dans l'ordre croissant:\n");

    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("%d et %d sont dans un ordre strictement croissant\n", a, b);
    } else {
        printf("%d et %d ne sont pas rangés dans un ordre strictement croissant \n", b, a);
    }

    return 0;
}
