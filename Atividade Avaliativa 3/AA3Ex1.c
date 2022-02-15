/*Implemente em linguagem C, algoritmo que solicite nome (armazena no vetor A) e
sobrenome (armazena no vetor B) de uma pessoa, concatene nome e sobrenome
em um único vetor (armazena no C) e exiba na tela (não utilize funções definidas
em bibliotecas).*/

#include <stdio.h>

int main()
{
    char vetorA[20], vetorB[20], vetorC[40];
    printf("Qual e o seu nome?: ");
    fgets(vetorA, 10, stdin);
    printf("Qual e o seu sobrenome?: ");
    fgets(vetorB, 10, stdin);
    int i = 0, j = 0;

    // Inserir a primeira string na nova string
    while (vetorA[i] != '\n')
    {
        vetorC[j] = vetorA[i];
        i++;
        j++;
    }
    
    //coloca um espaço entre vetores
    vetorC[j] = ' ';
    j ++;

    // Inserir a segunda string na nova string
    i = 0;
    while (vetorB[i] != '\n')
    {
        vetorC[j] = vetorB[i];
        i++;
        j++;
    }
   
    vetorC[j] = '\0';

    // Mostra a string concatenada
    printf("Nome Completo: %s", vetorC);
    return 0;
}
    
    