/*Implemente em linguagem C, algoritmo que receba um texto, verifique se o texto é
um palíndromo. Palíndromo é uma palavra, frase ou qualquer sequência de
caracteres que pode ser lida tanto da esquerda para a direita como da direita para
a esquerda*/

#include <stdio.h>

// Função que compara as duas strings
void compararStrings(char *x, char *y)
{
    int c = 0;

    // Loop repete até o fim das duas strings (fim é o \0 pois todo array de strings terminam em \0)
    while (*x != '\0' || *y != '\0')
    {
        if (*x == *y)
        {
            x++;
            y++;
        }

        // Se dois caracteres não forem iguais printe "Não é palinromo"
        else if ((*x == '\0' && *y != '\0') || (*x != '\0' && *y == '\0') || *x != *y)
        {
            c = 1;
            printf("\nNao e palindromo\n");
            break;
        }
    }

    // Se as duas strings forem exatamente iguais
    if (c == 0)
    {
        printf("\nEh um palindromo\n");
    }
}

int main()
{

    char v[10], v2[10];
    int len = 0, i, j = 0;
    printf("Entre uma string: ");
    gets(v);

    //Converte a string inteira pra letras minusculas
    for (i = 0; v[i] != '\0'; i++)
    {
        if (v[i] >= 'A' && v[i] <= 'Z')
        {
            v[i] = v[i] + 32;
        }
    }

    //loop que altera o valor da variável (len) para o comprimento do vetor
    for (i = 0; v[i] != 0; i++)
    {
        len = len + 1;
    }
    
    //loop que inverte a string e armazena no vetor "v2"
    for (i = len - 1; i >= 0; i--)
    {
        v2[j++] = v[i];
    }
    v2[j] = 0;

    compararStrings(v, v2);

    return 0;
}
    
    
    
    




