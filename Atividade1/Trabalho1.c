/*Implemente em linguagem C algoritmo que calcule o reajuste de salário de um
colaborador de uma empresa. Considere que o colaborador deve receber um
reajuste de 15% caso seu salário seja menor que R$500,00. Se o salário for maior
ou igual a R$500,00, mas menor ou igual a R$1.000 seu reajuste será de 10%;
caso seja ainda maior que R$1.000 o reajuste deve ser de 5%.
*/

#include<stdio.h>

int main(){
    float sal;

    printf("Qual e o seu salario: ");
    scanf("%f", &sal);

    if (sal < 500){
        sal += sal * 0.15; 
    }   else if (sal >= 500 && sal <= 1000){
        sal += sal * 0.1;
    }   else{
        sal += sal * 0.05;
    }
    
    printf("Seu salario foi reajustado para: R$%.2f", sal);

   return 0;
}


