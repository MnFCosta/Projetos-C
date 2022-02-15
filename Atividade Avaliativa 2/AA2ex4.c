/*Implemente em linguagem C algoritmo que solicite ao usuário o primeiro termo de
uma Progressão Aritmética (PA), a razão e qual termo o usuário deseja saber.
Exiba para usuário o valor de cada termo e, a soma e o produto de todos os
termos.*/

#include <stdio.h>

    // main, definição de variáveis e perguntas ao usuário
    int main(){

        int termo1, razao, termo2, soma = 0, prod = 1;
        printf("Qual e o termo inicial?: ");
        scanf("%i", &termo1);
    
        printf("Qual e a razao?: ");
        scanf("%i", &razao);

        printf("Qual e o termo final?: ");
        scanf("%i", &termo2);
        // \n separa perguntas da tabela no terminal
        printf("\n");
        //for loop para criar a tabela 
        for (int i = 1; i<=termo2; i++){
            printf("Termo = %i | Valor = %i\n", i, termo1);
            //Cálculos
            // valor de soma + termo1 = novo valor de soma
            soma += termo1;
            // valor de prod * termo1 = novo valor de prod
            prod *= termo1;
            // valor de termo1 + razao = novo valor de termo1
            termo1 += razao;
            // loop repete até o termo final
        }
        // retorna valores ao usuário
        printf("\n");
        printf ("A soma dos termos da PA: %i\n", soma);
        printf ("Produtos dos termos da PA: %i", prod);

        return 0;
    }




