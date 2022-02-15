/*Implemente em linguagem C, algoritmo que receba duas matrizes (A e B) de
dimensão N X N (o usuário deve informar a dimensão da matriz). Crie e exiba para
o usuário a terceira (C) matriz com os maiores valores entre as duas matrizes (A e
B).*/

#include <stdio.h>

int main()
{

    int t, l, c;
    printf("Informe a dimensao da matriz (NxN): ");
    scanf("%i", &t);
    int ma[t][t], mb[t][t], mc[t][t];

    // loop que coloca os valores na matriz A
    printf("Informe os valores da matriz A: \n");
    for (l = 0; l < t; l++)
    {
        for (c = 0; c < t; c++)
        {
            printf("mA[%i, %i] = ", l, c);
            scanf("%d", &ma[l][c]);
        }
    }
    // loop que coloca os valores na matriz B
    printf("Informe os valores da matriz B: \n");
    for (l = 0; l < t; l++)
    {
        for (c = 0; c < t; c++)
        {
            printf("mb[%i, %i] = ", l, c);
            scanf("%d", &mb[l][c]);
        }
    }
    // matriz resultante que mostra os maiores números
    printf("Matriz resultante: \n");
    for (l = 0; l < t; l++)
    {
        printf("[");
        for (c = 0; c < t; c++)
        {
            if (ma[l][c] > mb[l][c])
            {
                mc[l][c] = ma[l][c];
            }
            else
            {
                mc[l][c] = mb[l][c];
            }
            printf(" %i ", mc[l][c]);
        }
        printf("]");
        printf("\n");
    }
    return 0;
}
