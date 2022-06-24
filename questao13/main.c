#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Variaveis
    int num1, num2, num3, num4, menor, maior;

    // Entrada de dados
    printf("Digite quatro valores: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // Encontrando o menor
    if (num1 < num2)
    {
        if (num2 < num3)
        {
            if (num3 < num4)
            {
            }
        }
    }

    // Encontrando o maior
    if (num1 > num2)
    {
        if (num2 > num3)
        {
            if (num3 > num4)
            {
            }
        }
    }

    // Saida de dados
    printf("Menor: %d, Maior: %d", menor, maior);

    return 0;
}
