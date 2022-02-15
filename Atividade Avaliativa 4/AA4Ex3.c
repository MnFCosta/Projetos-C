/*Implemente em linguagem C algoritmo que receba uma matriz de inteiros de
dimensão N X N (o usuário deve informar a dimensão da matriz). Ao final da leitura
o algoritmo deve exibir para o usuário a matriz, a linha e coluna que contem o
maior número dentre todos os números lidos. O programa deve ter possuir três
funções, sendo elas, função main(), função popular a matriz e função para exibir a
matriz resultante e valores*/
#include <stdio.h>

//popularmatriz recebe o que há na variável t e uma matriz que usa t como sua dimensão
void popularmatriz(int t, int x[t][t])
{
    //loop que irá perguntar o que o usuário quer colocar em cada índice da matriz
    for (int l = 0; l < t; l++)
    {
        for (int c = 0; c < t; c++)
        {
            printf("mA[%i, %i] = ", l, c);
            scanf("%d", &x[l][c]);
        }
    }
}
//mostramatriz recebe o que há na variável t e a matriz x
void mostrarMatriz(int s, int x[s][s])
{
    int li, co, v = 0, vx, vy;
    printf("Matriz resultante: \n");
    for (li = 0; li < s; li++)
    {
        printf("[");
        for (co = 0; co < s; co++)
        {
            //printa a matriz informada pelo usuário
            printf(" %i ", x[li][co]);
            //condicional que obvserva se o que há dentro dentro da matriz é maior que 0 inicialmente
            //caso for muda o valor de v para o número, repetindo isso até o fim da matriz
            //vx e vy recebem as cordenadas dos maiores números da matriz
            if (x[li][co] > v)
            {
                v = x[li][co];
                vx = li;
                vy = co;
            }
        }
        printf("]");
        printf("\n");
    }
    //printa o resultado ao usuário
    printf("O maior numero: %i\n", v);
    printf("Linha: %i\n", vx);
    printf("Coluna %i\n", vy);
}
int main()
{
    int t;
    printf("Informe o tamanho da matriz: ");
    scanf("%i", &t);

    int mA[t][t];
    //chama a função popularmatriz e mostrarmatriz
    popularmatriz(t, mA);
    mostrarMatriz(t, mA);
    return 0;
}





