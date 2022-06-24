#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero % 3 == 0){
        printf("Eh multiplo de 3");
    }else{
        printf("Nao eh multiplo de 3");
    }

    return 0;
}
