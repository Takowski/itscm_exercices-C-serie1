#include <stdio.h>

int a = 1, b = 2, c = 3, temp;
int main()
{
    printf("Valeur de a :%d\n",a);
    printf("Valeur de b :%d\n",b);
    printf("Valeur de c :%d\n",c);
    temp=b;
    printf("Valeur de b -> a :%d\n",b=a);
    printf("Valeur de a -> c :%d\n",a=c);
    printf("Valeur de c -> b :%d\n",c=temp);

    return 0;
}
