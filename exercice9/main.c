#include <stdio.h>

int main() {

    int a = 5, b = 6, temp;

    printf("valeur de a d'origine:%d\n", a);

    printf("valeur de b d'origine:%d\n", b);

    temp = b;

    b = a;

    printf("valeur de b -> a:%d\n", b);

    a = temp;

    printf("valeur de a -> b:%d\n", a);

    return 0;
}
