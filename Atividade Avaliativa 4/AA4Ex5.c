#include <stdio.h>
/*Implemente em linguagem C algoritmo que receba um número digitado pelo
usuário e verifique se está compreendido entre os valores 0 e 9 ou não (0 e 9 não
estão na faixa de valores).
O protótipo da função é: void verifica(int valor, char *retorno);
O parâmetro "valor" recebe o dado digitado pelo usuário, e o parâmetro 'retorno'
deve ser utilizado como controle da condição. Dica: a função 'verifica' não retorna
valor (void).*/

void verifica(int valor, int retorno, char *x) {
   //usa a condição que se o valor for maior que retorno -9 ou menor que o valor de retorno(9)
   //associa "esta" ou "nao esta" ao vetor x dependendo da condição 
   if (valor >= retorno -9 && valor <= retorno) {
        sprintf(x, "esta");
        return;
    }
    sprintf(x, "nao esta");
}

int main() {
    int valor;

    printf("Informe o valor desejado: ");
    scanf("%d", &valor);


    int retorno = 9;
    char c[20];
    //chama a função verifica
    verifica(valor, retorno, c);
    printf("O valor %s no intervalo.", c);
    return 0;
}