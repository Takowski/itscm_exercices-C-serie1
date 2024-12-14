#include <stdio.h>
/*Lire deux nombres entiers dans les variables nombre_depart et nombre_final et écrire les doubles des
nombres compris entre ces deux limites (incluses).
*/
int main() {

    int numéro1=0, numéro2=0;

    printf("écrivez 2 nombres\n");

    scanf("%d %d", &numéro1,&numéro2);
printf("doubles des nombres compris entre ces deux limites:");
    for (int i = numéro1; i <= numéro2; i++) {
        printf("%d ", i*2);
    }
    return 0;
}
