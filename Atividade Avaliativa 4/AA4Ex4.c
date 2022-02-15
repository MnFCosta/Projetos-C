/*Implemente em linguagem C algoritmo que receba dois textos do usuário
(armazena em dois vetores). Exiba para o usuário em ordem alfabética
decrescente*/

#include <stdio.h>

//função ordemalfabetica recebe as duas strings informadas pelo usuário e coloca o valor int informado na variável t
void ordemalfabetica(char *str1, char *str2, int t)
{

    //observa se a primeira letra da string é minúscula, caso não for ela é tranformada em maiúscula
    if (str1[0] >= 'a' && str1[0] <= 'z')
    {
        str1[0] = str1[0] - 32;
    }

    if (str2[0] >= 'a' && str2[0] <= 'z')
    {
        str2[0] = str2[0] - 32;
    }

    //Compara as duas strings e ve qual está em ordem descrente utilizando os valores numéricos da tabela ASCII
    for (int i = 0; i < t; i++)
    {

        //for loop irá ler os valores numéricos da tabela ASCII na string 1 e ver se são maiores que o da string 2
        //dependendo do caso, irá printar as strings em uma certa ordem
        if (str1[i] > str2[i])
        {
            printf("%s\n", str1);
            printf("%s\n", str2);
            break;
        }
        if (str1[i] < str2[i])
        {
            printf("%s\n", str2);
            printf("%s\n", str1);
            break;
        }
    }
}
int main()
{
    char vs1[10], vs2[10];

    printf("Informe o primeiro texto: ");
    fgets(vs1, 10, stdin);

    printf("Informe o primeiro texto: ");
    fgets(vs2, 10, stdin);

    // remove o \n da string
    for (int i = 0; i < 10; i++)
    {
        if (vs1[i] == '\n')
        {
            vs1[i] = '\0';
        }

        if (vs2[i] == '\n')
        {
            vs2[i] = '\0';
        }
    }
    //chama a função ordemalfabetica
    ordemalfabetica(vs1, vs2, 10);
    return 0;
}
