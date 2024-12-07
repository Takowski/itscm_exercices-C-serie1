#include <stdio.h>

int main() {
    int a = 0, b = 0, c = 0;

    printf("introduisez 3 nombres pour determiner si ils sont classé dans un ordre croissant\n");

    scanf("%d %d %d", &a, &b, &c);

    if (a < b && b < c) {

        printf("%d %d %d sont classé dans l'ordre strictement croissant\n", a, b, c);
    } else
        {
        printf("%d %d %d ne sont sont classé dans l'ordre strictement croissant\n", a, b, c);
    }
    return 0;
}
