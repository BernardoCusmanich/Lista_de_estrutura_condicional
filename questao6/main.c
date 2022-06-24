#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero > 0){
        printf("O valor absoluto eh %d", numero);
    }else{
        numero = numero * -1;
        printf("O valor absoluto eh %d", numero);
    }

    return 0;
}