#include <stdio.h>

int main()
{
    int a = 5, b = 6, c;
    printf("valeur de a d'origine:%d\n", a);
    printf("valeur de b d'origine:%d\n", b);
    c = b;
    printf("valeur de b -> a:%d\n", b = a);
    printf("valeur de a -> b:%d\n", a = c);

    return 0;
}
