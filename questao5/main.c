#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2, resultado, resultadomais8, resultadomenos5;

    printf("Digite um numero: ");
    scanf("%d", &numero1);
    printf("Digite outro numero: ");
    scanf("%d", &numero2);

    resultado = numero1 + numero2;

    if(resultado>20){
        resultadomais8 = resultado + 8;
        printf("A soma desses numeros eh: %d que eh maior que 20, que somando a 8 eh: %d", resultado, resultadomais8);
    }else{
        resultadomenos5 = resultado - 5;
        printf("A soma desses numeros eh: %d que eh menor que 20, que subtraido a 5 eh: %d", resultado, resultadomenos5);
    }

    return 0;
}
