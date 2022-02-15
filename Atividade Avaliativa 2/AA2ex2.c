/*Implemente em linguagem C algoritmo que exiba para o usuário as peças de um
tabuleiro de xadrez. Entretanto, existem algumas especificidades na disposição das
peças no tabuleiro. O tabuleiro deve possuir dimensão N x N (o usuário deve
informar a dimensão do tabuleiro). Especificidades: em cada linha do tabuleiro,
colocar as peças de xadrez 'Rei', representadas pelo número 1 e, nos outros
espaços do tabuleiro, colocar as peças 'Peão', representadas pelo número 0. É
obrigatório a utilização de estrutura de repetição para exibir cada peça no
tabuleiro.*/

#include <stdio.h>

    // main e pergunta ao usuário
    int main(){
        int d;
        printf("Qual e o tamanho do seu tabuleiro?: ");
        scanf("%i", &d);
        d--;

        // for loop para linhas
        for (int i=0; i <= d; i++){
            // for loop para colunas
            for (int j=0; j <= d; j++){
                
                if (i % 2 == 0){
                    printf(" 1 ");
                }else{
                    printf(" 0 ");
                }
        }
        // \n para pular linhas
        printf("\n");              
    }
        return 0;
}








                    

        