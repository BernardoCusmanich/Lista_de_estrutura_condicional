#include <stdio.h>
#include <stdlib.h>

int main(){

    int salario, prestacao, emprestimopode;

    printf("Digite o valor do salario bruto: ");
    scanf("%d", &salario);
    printf("Digite o valor da prestacao: ");
    scanf("%d", &prestacao);

    emprestimopode = salario * 0.3;

    if(prestacao <= emprestimopode){
        printf("Vc pode");
    }else{
        printf("Nao pode");
    }
    
    return 0;
}
