/*Implemente em linguagem C algoritmo que receba um número inteiro e verifique se
é par ou ímpar.*/

#include<stdio.h>

int main(){
    int n;
    printf("Que numero voce deseja a informacao, meu caro?: ");
    scanf("%i", &n);
    if (n % 2 == 0){
        printf("O numero %i e par", n);
    } else{
        printf("O numero %i e impar", n);
    }
    return 0;
}
