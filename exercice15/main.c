#include <stdio.h>

int main()
{
    int a, b, res;
    char op;

    printf("Donnez deux entiers et un caractère:\n");
    scanf("%d %d %c", &a, &b, &op);
    printf("%d %d %c\n", a, b, op);

    if (op == 's')
    {
        res = a + b;
        printf("somme = %d\n", res);
    }
    else
    {
        res = a * b;
        printf("produit = %d\n", res);
    }
    printf("fin du programme\n");

    return 0;
}
