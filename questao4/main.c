#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero > 0)
    {
        printf("O numero eh positivo");
    }
    else if (numero < 0)
    {
        printf("O numero eh negativo");
    }
    else
    {
        printf("O numero eh nulo");
    }

    return 0;
}
