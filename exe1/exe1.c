#include <stdio.h>

/*
    Faça um programa com uma função chamada somaImposto. A função 
    possui dois parâmetros formais: taxaImposto, que é a quantia de 
    imposto sobre vendas expressa em porcentagem e custo, que é o 
    custo de um item antes do imposto. A função “altera” o valor de 
    custo para incluir o imposto sobre vendas.
*/

void somaImposto(taxaImposto, custo);

int main(){
    float taxaImposto, custo;

    printf("Taxa do Imposto: ");
    scanf("%f", &taxaImposto);
    printf("Custo: ");
    scanf("%f", &custo);
    somaImposto(taxaImposto, custo);

    return 0;
}

void somaImposto(taxaImposto, custo){
    float resultadoImposto = custo + (custo * taxaImposto / 100);
    printf("\nResultado: %.2f", resultadoImposto);
}