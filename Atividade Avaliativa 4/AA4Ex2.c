/*Implemente em linguagem C algoritmo que receba um texto do usuário (armazena
um vetor) e remova um carácter do texto. O usuário deve informar a posição do
carácter que deve ser removido. Exiba para o usuário como ficou o texto.
Exemplo:
Texto digitado pelo usuário: [U ,m, a , s ,❑, L,i , n , d , a ,❑,M, u , l, h , e , r ,❑,❑,❑]
Posição escolhida pelo usuário: 3
Texto modificado: [U ,m, a ,❑,L, i, n , d ,a ,❑,M ,u , l , h,e , r ,❑,❑,❑,❑]*/

#include <stdio.h>

//função remover caracter recebe uma string
void removerCaracter(char *x)
{

    int pos;
    char l;
    printf("Qual espaco voce deseja alterar?: ");
    scanf("%i", &pos);

    //Enquanto i = pos, enquanto i for menor que 20, adicione a i
    //Loop irá substituir o que há em "pos" por um espaço em branco e então irá copiar o que há em cada indice da string até chegar em 20
    for (int i = pos; i < 20; i++)
    {   
        x[i] = x[i+1];
    }
        
    printf("%s\n", x);
}
int main()
{
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
    //chama a função "removerCaracter"
    removerCaracter(v);
    return 0;
}
        

   
        
        
