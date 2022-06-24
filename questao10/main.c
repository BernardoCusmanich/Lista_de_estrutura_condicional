#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero1, numero2;

    printf("Digite um numero: ");
    scanf("%d", &numero1);
    printf("Digite outro numero: ");
    scanf("%d", &numero2);

    if(numero1 > numero2){
        printf("%d eh maior que %d", numero1, numero2);
    }else{
        printf("%d eh menor que %d", numero1, numero2);
    }

    return 0;
}
