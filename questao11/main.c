#include <stdio.h>
#include <stdlib.h>

int main(){

    int nota1, nota2, nota3, nota4, aprovadoounao;

    printf("Digite a nota do 1bim: ");
    scanf("%d", &nota1);
    printf("Digite a nota do 2bim: ");
    scanf("%d", &nota2);
    printf("Digite a nota do 3bim: ");
    scanf("%d", &nota3);
    printf("Digite a nota do 4bim: ");
    scanf("%d", &nota4);

    aprovadoounao = ((nota1 + nota2 + nota3 + nota4) / 4);

    if(aprovadoounao >= 6){
        printf("Voce foi aprovado");
    }else{
        printf("Voce foi reprovado");
    }

    return 0;
}
