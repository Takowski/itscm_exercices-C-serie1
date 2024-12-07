#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 40,
        b = 20,
        c = 30;
    if (a < b && b < c)
    {
        printf("%d %d %d sont classé dans l'ordre strictement croissant\n", a, b, c);
    }
    else
    {
        printf("%d %d %d ne sont sont classé dans l'ordre strictement croissant\n", a, b, c);
    }
    return 0;
}
