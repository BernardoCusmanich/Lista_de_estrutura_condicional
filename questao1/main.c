#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero > 20)
        printf("Esse numero eh maior que 20\n");
    else
        printf("Esse numero e igual ou menor que 20\n");

    return 0;
}
