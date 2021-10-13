#include <stdio.h>

/*
    Faça um programa que converta da notação de 24 horas para a notação de 12 horas. Por
    exemplo, o programa deve converter 14:25 em 2:25. A entrada é dada em dois inteiros.
    Fazer uma função para a conversão do valor. Inclua um loop que permita que o usuário
    repita esse cálculo para novos valores de entrada todas as vezes que desejar. 
*/

void convertHora(hora, minuto);

int main(){
    int controle = 1;
    while(controle != 0){
        system("cls");
        int hora, minuto;
        printf("==== NOTACAO HORARIA ====\n\n");

        printf("Informe as horas: ");
        scanf("%d", &hora);
        printf("Informe os minutos: ");
        scanf("%d", &minuto);
        convertHora(hora, minuto);
        
        printf("\n\nDeseja continuar ? \n\t1 - SIM\n\t0 - NAO\n\n> ");
        scanf("%d", &controle);
    }
    printf("\nObrigado, ate logo!");
}

void convertHora(hora, minuto){
    if(hora > 12){
        hora -= 12;
        printf("\nHora convertida: %d:%d AM", hora, minuto);
    }
    else{
        hora += 12;
        printf("\nHora convertida: %d:%d PM", hora, minuto);
    }
}