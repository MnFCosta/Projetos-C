/*Implemente em linguagem C, algoritmo que receba do usuário 16 números inteiros,
armazene em um vetor. Troque os 8 primeiros valores pelos 8 últimos valores.
Exiba para o usuário o vetor original e o vetor obtido com as trocas.*/

#include <stdio.h>

int main()
{
    int v[16], i, j;

    // loop que colocará números no vetor original
    for (i = 0; i < 16; i++)
    {
        printf("Entre com um numero inteiro: ");
        scanf("%d", &v[i]);
    }
    //embelezamentos
    printf("\n");
    printf("Vetor original: ");
    printf("[");
    // loop que irá printar o vetor original
    for (i = 0; i < 16; i++)
    {
        printf(" %d ", v[i]);
    }
    //embelezamentos
    printf("]");
    printf("\n");

    //loop que irá fazer a troca
    for (i = 0; i < 8; i++)
    {
        j = v[i];
        v[i] = v[8 + i];
        v[8 + i] = j;
    }
    // embelezamentos
    printf("\n");
    printf("Vetor com trocas: ");
    printf("[");
    // loop que irá printar o vetor alterado
    for (i = 0; i < 16; i++)
    {
        printf(" %d ", v[i]);
    }
    //embelezamentos
    printf("]");
    printf("\n");

    return 0;
}
