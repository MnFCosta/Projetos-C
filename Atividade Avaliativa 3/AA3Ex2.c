/*Implemente em linguagem C, algoritmo que simule a ocupação de quartos de um
hotel. Considere que existem cinco andares e dez quartos por andar (5 x 10). O
objetivo é saber se um quarto está ou não ocupado. O software deve possuir um
menu com as opções: 1) Imprimir lista de quartos; 2) Definir ocupação e 3) Sair. A
opção 1 lista todos os quartos, informando se estão ou não ocupados, a opção 2
permite definir o status 'O' “ocupado” ou 'L' “Livre” para qualquer um dos quartos. A
opção 3 encerra o software.*/

#include <stdio.h>

int main()
{

    int selecao, x, y;
    char ocupacao;

    char hotel[5][10];
    // for loop que coloca L (livre) em todos os espaços da matriz
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            hotel[i][j] = 'L';
        }
    }

    while (1)
    {
        printf("\nSelecione umas das 3 Opcoes: \n 1 - Imprimir lista de quartos \n 2 - Definir ocupacao \n 3 - Sair\nDigite a opcao: ");
        scanf("%i", &selecao);

        switch (selecao)
        {
        //Printa a matriz que mostra a lista de quartos
        case 1:
            printf("\n");
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    printf(" %c", hotel[i][j]);
                }
                printf("\n");
            }
            break;
        case 2:
            // pergunta ao usuario qual quarto quer definir a ocupação.
            printf("Que quarto voce quer definir a ocupacao (x)?: ");
            scanf("%i", &x);

            printf("Que quarto voce quer definir a ocupacao (y)?: ");
            scanf("%i", &y);

            printf("O quarto %ix%i esta O(ocupado) ou L(livre)?: ", x, y);
            scanf(" %c", &ocupacao);

            switch (ocupacao)
            {
            case 'o':
            case 'O':
                hotel[y - 1][x - 1] = 'O';
                break;

            case 'l':
            case 'L':
                hotel[y - 1][x - 1] = 'L';
                break;

            default:
                printf("\nValor invalido, tente O para ocupado, ou L para livre\n");
                break;
            }
            // mostra a nova lista de quartos
            printf("\nLista de quartos atualizada com sucesso!\n ");
            printf("\nA nova lista e:\n");
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    printf(" %c", hotel[i][j]);
                }
                printf("\n");
            }
            break;

        // termina o programa
        case 3:
            printf("Saindo...\n");
            return 1;
            break;
        default:
            printf("Numero invalido tente 1, 2 ou 3\n");
            break;
        }
    }
    return 0;
}

