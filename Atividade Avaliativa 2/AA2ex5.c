/*A papelaria do Miltinho precisa frequentemente ajustar o preço do Xerox. Para
facilitar o cálculo para os clientes da papelaria, Miltinho costuma imprimir uma folha
com o valor para diferentes quantidades de cópias e fixa na parede loja. Miltinho
também costuma dispor na folha os dados em forma de tabela com 10 colunas e
quantidade de linhas diferentes, conforme seu humor. Então, implemente em
linguagem C algoritmo que receba o valor atual do Xerox (um número real) e a
quantidade de linhas que será impresso na folha.*/

#include <stdio.h>

    // main, definição de variáveis e perguntas ao usuário
    int main(){

        float valorfolha;
        int linhas;

        printf("Qual o valor da folha? ");
        scanf("%f", &valorfolha);

        printf("Qual o numero de linhas? ");
        scanf("%i", &linhas);
        // \n que separa perguntas da tabela no terminal
        printf("\n");
        // for loop que irá fazer os cálculos e escrever as linhas
        printf("Tabela de valores:\n");
        for (int i = 1; i <= (linhas * 10); i++){
            //Condição para deixar a tabela alinhada
            if (i < 10){ 
            printf("0%i = %.2f ", i, valorfolha * i);
            }else{
                printf("%i = %.2f ", i, valorfolha * i);
            }
            // condição onde se deve passar a proxima linha
            if (i % 10 == 0){
            printf("\n");
            }
    }
    return 0;
}
           








