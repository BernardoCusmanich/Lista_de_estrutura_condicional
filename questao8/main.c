#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dividendo, divisor, resultado;

    printf("Digite um numero para ser dividido: ");
    scanf("%d", &dividendo);
    printf("Digite um numero para ser o divisor: ");
    scanf("%d", &divisor);

    if(dividendo % divisor == 0){
        printf("%d eh divisivel por %d", dividendo, divisor);
    }else{
        printf("%d nao eh divisivel por %d", dividendo, divisor);
    }

    return 0;
}
