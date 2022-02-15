/*Implemente em linguagem C algoritmo que receba:
• o código do estado de origem da carga de um caminhão, supondo que a digitação
do código do estado seja sempre válida, isto é, um número inteiro entre 1 e 5;
• o peso do caminhão em toneladas;
• o código da carga, supondo que a digitação do código seja sempre válida, isto é,
um número inteiro entre 10 e 40;
Código do Estado Imposto Código da carga Preço por quilo (R$)
1 35% 10 a 20 100
2 25% 21 a 30 250
3 15% 31 a 40 340
4 5%
5 Isento
Calcule e mostre:
• o peso da carga do caminhão convertido em quilos;
• o preço da carga do caminhão;
• o valor do imposto, sabendo que o imposto é cobrado sobre o preço da carga do
caminhão e depende do estado de origem;
• o valor total transportado pelo caminhão, preço da carga mais imposto.*/

#include<stdio.h>

    int main()
    {
        float estado, pesoton, codcarga, precocarga, impostocarga;
        printf("Qual e o codigo do estado de origem da carga?: ");
        scanf("%f", &estado);

        if (estado < 1.0 || estado > 5.0){
            printf("Numero invalido, tente novamente\n");
            return 1;
        }
            
        printf("Qual e o peso do caminhao (em toneladas)?: ");
        scanf("%f", &pesoton);

        printf("Qual e o codigo da carga?: "); 
        scanf("%f", &codcarga);

        if (codcarga < 10.0 || codcarga > 40.0){
            printf("Numero invalido, tente novamente\n");
            return 1;
            }
        
        float pesocarga = pesoton * 1000;
            
        if(codcarga >= 10 && codcarga < 21){
             precocarga = pesocarga * 100.0;
        } else if(codcarga > 20 && codcarga < 31){
             precocarga = pesocarga * 250.0;

        }else if(codcarga > 30 && codcarga < 41){
            precocarga = pesocarga * 340.0;
        }
        
        switch ((int)estado)
        {
            case 1:
            impostocarga = precocarga * 0.35;
            break;

            case 2:
            impostocarga = precocarga * 0.25;
            break;
            
            case 3:
            impostocarga = precocarga * 0.15;
            break;

            case 4:
            impostocarga = precocarga * 0.05;
            break;

            case 5:
            impostocarga = 0;
            break;

            default:
            break;

        }
        printf("\nResultados:");
        printf("\nO peso da carga em quilos eh = %.0fkg\n", pesocarga);
        printf("O preco da carga eh = %.0fR$\n", precocarga);
        printf("O imposto da carga eh = %.0fR$\n", impostocarga);
        float valortrans = precocarga + impostocarga;
        printf("O valor total da carga eh = %.0fR$\n", valortrans);

        return 0;
    }             
        

        