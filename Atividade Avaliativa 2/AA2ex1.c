/*Implemente em linguagem C algoritmo que exiba para o usuário as peças de um
tabuleiro de xadrez. Entretanto, existem algumas especificidades na disposição das
peças no tabuleiro. O tabuleiro deve possuir dimensão N x N (o usuário deve
informar a dimensão do tabuleiro). Especificidades: na diagonal do tabuleiro,
colocar as peças de xadrez 'Rei', representadas pelo número 1 e, nos outros
espaços do tabuleiro, colocar as peças 'Peão', representadas pelo número 0. É
obrigatório a utilização de estrutura de repetição para exibir cada peça no
tabuleiro.*/

#include <stdio.h>

    // Main e pergunta ao usuário
    int main(){
        int d;
        printf("Qual e o tamanho do seu tabuleiro?: ");
        scanf("%i", &d);
        // Diminui o valor de d em 1 para uso em um loop, pois o 0 também é contado.
        d--;
     
        //for loop onde será contado o número de linhas
        for (int i=0; i <= d; i++){
            //for loop onde será contado o número de colunas
            for (int j=0; j <= d; j++){
                
                if (d == j+i){
                    printf(" 1 ");
                }else{
                    printf(" 0 ");
                }
        }
        // \n para que as linhas sejam puladas
        printf("\n");              
    }
        return 0;
}

 






