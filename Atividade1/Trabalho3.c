/*Implemente em linguagem C algoritmo que apresente o perfil de uma pessoa. O
perfil da pessoa pode ser: 0 - Tímido; 1- Sonhador; 2 - Paquerador; 3 - Atraente; 4 -
Irresistível. Dado o ano de nascimento de uma pessoa, informe qual é o seu perfil.
Por exemplo, se o ano é 2000, calculamos a soma 20 + 00, dividimos seu resultado
(20) por 5, para obter resto da divisão (0).*/

#include<stdio.h>
    
    int main()
    {
        int Ano;
        printf("Digite seu ano de nascimento:");
        scanf("%i", &Ano);

        Ano = ((Ano / 100) + (Ano % 100)) % 5;
        
        switch(Ano)
        {
            case 0:
                printf("Voce e timido");
                break;
            case 1:
                printf("Voce e sonhador"); 
                break;
            case 2:
                printf("Voce e paquerador");  
                break;
            case 3:
                printf("Voce e atraente");  
                break;
            case 4:
                printf("Voce e irresistivel");  
                break;
            default:
                break;
        }
        return 0; 
    }
                
                
                
                
                    
                

        

        

        
