/*Implemente em linguagem C algoritmo que leia um valor numérico inteiro e
apresente por extenso o nome do mês correspondente ao valor entrado. Caso
sejam fornecidos valores menores que 1 e maiores que 12, o programa deve
apresentar a mensagem “Valor inválido”.*/

#include<stdio.h>

    int main()
    {
        int n;
        printf("Digite um numero: ");
        scanf("%i", &n);
        
        switch(n)
        {
            case 1:
                printf("O mes %i eh Janeiro", n); 
                break;
            case 2:
                printf("O mes %i eh Fevereiro", n);  
                break;
            case 3:
                printf("O mes %i eh Marco", n);  
                break;
            case 4:
                printf("O mes %i eh Abril", n);  
                break;
            case 5:
                printf("O mes %i eh Maio", n);  
                break;
            case 6:
                printf("O mes %i eh Junho", n);  
                break;
            case 7:
                printf("O mes %i eh Julho", n);  
                break;
            case 8:
                printf("O mes %i eh Agosto", n);  
                break;
            case 9:
                printf("O mes %i eh Setembro", n);  
                break;
            case 10:
                printf("O mes %i eh Outubro", n);  
                break;
            case 11:
                printf("O mes %i eh Novembro", n);  
                break;
            case 12:
                printf("O mes %i eh Dezembro", n);  
                break;
            default:
                printf("Numero invalido, coloque um valor entre 1 e 12");

                break;
        }
        return 0; 

    }
                      