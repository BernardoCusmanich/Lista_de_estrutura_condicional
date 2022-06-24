#include <stdio.h>
#include <stdlib.h>

int main()
{
    int parouimpar;

    printf("Digite um numero: ");
    scanf("%d", &parouimpar);

    if(parouimpar %2 == 0){
        printf("O numero que voce digitou eh par");
    }else{
        printf("O numero que voce digitou eh impar");
    }

    return 0;
}
