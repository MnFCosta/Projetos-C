/*Implemente em linguagem C algoritmo que receba um texto do usuário (armazena
um vetor) e insira um carácter no texto. O usuário deve informar a posição e o
carácter que deve ser inserido. Exiba para o usuário como ficou o texto.*/
#include <stdio.h>

// função inserirCaracter recebe um string
void inserirCaracter(char *x)
{
    
    int pos;
    char l;
    printf("Qual espaco voce deseja alterar?: ");
    scanf("%i", &pos);

    printf("Qual letra deseja colocar nesse espaco?: ");
    scanf(" %c", &l);

    //"Enquanto i for menor que a posição, diminua o valor de i"
    //Loop irá copiar o que tem no espaço anterior até chegar na posição
    for (int i = 20; i > pos; i--)
    {
        x[i] = x[i-1];
    }
    //troca o que tem em pos pelo valor de l (que é a letra que o usuário deseja colocar no espaço)
    x[pos] = l;
    printf("%s\n", x);
}
        
int main()
{
    //main
    char v[20];
    printf("Digite o texto: ");
    fgets(v, 20, stdin);

    // remove o \n da string
    for (int i = 0; i < 20; i++)
    {
        if (v[i] == '\n')
        {
            v[i] = '\0';
        }
    }

    //chama a função "inserirCaracter"
    inserirCaracter(v);
    return 0;
}
    
        

