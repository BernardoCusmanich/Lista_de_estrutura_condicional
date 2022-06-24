#include <stdio.h>
#include <stdlib.h>

int main(){

    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if(ano % 4 == 0){
        printf("%d eh um ano bissexto", ano);
    }else{
        printf("%d nao eh um ano bissexto", ano);
    }

    return 0;
}
