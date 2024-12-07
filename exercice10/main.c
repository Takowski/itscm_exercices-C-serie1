#include <stdio.h>


int main() {

    int a = 1, b = 2, c = 3, temp;

    printf("Valeur de a :%d\n", a);

    printf("Valeur de b :%d\n", b);

    printf("Valeur de c :%d\n", c);

    temp = b;

    b = a;

    printf("Valeur de b -> a :%d\n", b);

    a = c;

    printf("Valeur de a -> c :%d\n", a);

    c = temp;

    printf("Valeur de c -> b :%d\n", c);

    return 0;
}
