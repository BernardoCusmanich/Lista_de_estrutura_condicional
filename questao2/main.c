#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2, resultado;

    printf("Digite um numero: ");
    scanf("%d", &numero1);
    printf("Digite outro numero: ");
    scanf("%d", &numero2);

    resultado = numero1 + numero2;

    if(resultado>10){
        printf("O resultado foi: %d, ou seja maior que dez", resultado);
    }else{
        printf("O resultado foi: %d, ou seja igual ou menor que dez", resultado);
    }

    return 0;
}
