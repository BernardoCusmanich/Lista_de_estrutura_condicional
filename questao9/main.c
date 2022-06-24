#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if((numero > 100) & (numero < 150)){
        printf("Esta em um intervalo de 100 ateh 150");
    }else{
        printf("Nao esta no intervalo de 100 ateh 150");
    }

    return 0;
}
