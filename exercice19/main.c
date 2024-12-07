#include <stdio.h>

int main(int argc, char const *argv[])
{
    double number = 0;
    printf("vas y met s'y un chiffre\n");
    scanf("%lg", &number);

    if (number > 0)
    {
        printf("calice, il est positif\n");
    }
    else if (number == 0)
    {
        printf("tabernak ! c'est l'meme que rien\n");
    }
    else
    {
        printf("tabernak ! c'est pô positif\n");

    }
    return 0;
}
