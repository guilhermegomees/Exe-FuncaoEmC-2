#include <stdio.h>

/*
    Faça um programa que use a função valorPagamento para determinar o 
    valor a ser pago por uma prestação de uma conta. O programa deverá 
    solicitar ao usuário o valor da prestação e o número de dias em atraso 
    e passar estes valores para a função valorPagamento, que calculará o 
    valor a ser pago e devolverá este valor ao programa que a chamou. O 
    programa deverá então exibir o valor a ser pago na tela. Após a execução 
    o programa deverá voltar a pedir outro valor de prestação e assim continuar 
    até que seja informado um valor igual a zero para a prestação. Neste momento
    o programa deverá ser encerrado, exibindo o relatório do dia, que conterá
    a quantidade e o valor total de prestações pagas no dia. O cálculo do valor 
    a ser pago é feito da seguinte forma. Para pagamentos sem atraso, cobrar o 
    valor da prestação. Quando houver atraso, cobrar 3% de multa, mais 0,1% de 
    juros por dia de atraso. 
*/

void valorPagamento(valorP, dias);
float valorApagar = 0;

int main(){
    int valorP = 1, dias = 0, total = 0;
    while(valorP != 0){
        system("cls");
        printf("============== CALCULO DE PRESTACOES ===============\n");
        printf("==== PARA SAIR DIGITE 0 EM 'VALOR DA PRESTACAO' ====\n\n");

        printf("VALOR DA PRESTACAO: \n\t> ");
        scanf("%d", &valorP);
            if(valorP == 0){
                system("cls");
                printf("==============================");
                printf("\n      RELATORIO DO DIA:       ");
                printf("\n\n TOTAL DE PRESTACOES: %d", total);
                printf("\n VALOR TOTAL: R$ %.2f REAIS", valorApagar);
                printf("\n==============================");
                printf("\n");
                exit(0);
            }
        printf("\nDIAS DE ATRASO: \n\t> ");
        scanf("%d", &dias);
        valorPagamento(valorP, dias);
        total++;
    }
}

void valorPagamento(valorP, dias){
    if(dias == 0){
        valorApagar += valorP;
    }
    else{
        float multa = valorP * 0.03;
        float juros = valorP * (0.001 * dias);
        valorApagar += valorP + multa + juros;
    }
}