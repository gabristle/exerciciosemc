#include <stdio.h>
#include <stdlib.h>

/*
1) Sabendo-se que 200 quilowatts de energia custa um quarto do salário mínimo,
faça um programa que receba o valor do salário mínimo e a quantidade de quilowatts
gasta por uma residência e mostre:
a) O valor em reais de cada quilowatt;
b) O valor em reais a ser pago pelos quilowatts gasto;
c) O novo valor a ser pago por essa residência com um desconto de 12%;
*/

int main () {
  //variaveis
  int quilowattsGastos;
  float salarioMinimo;
  float valorCadaQuilowatt;
  float valorTotalQuilowatt;
  float valorDescontoQuilowatt;

  //recebe o salario minimo
  printf("---> Digite o salario minimo: ");
  scanf("%f", &salarioMinimo);

  //recebe a quantidade de qw gastos
  printf("---> Digite a quantidade de quilowatts gastas: ");
  scanf("%d", &quilowattsGastos);

  //calcula e mostra o valor em reais de cada qw
  valorCadaQuilowatt = (salarioMinimo/4)/200;
  printf("-> Valor em reais de cada quilowatt: %.2f\n", valorCadaQuilowatt);

  //calcula e mostra o valor total pago pelos qw
  valorTotalQuilowatt = quilowattsGastos * valorCadaQuilowatt;
  printf("-> Valor total a ser pago pelos quilowatts gastos: %.2f\n", valorTotalQuilowatt);

  //novo valor a ser pago com 12% de desconto
  valorDescontoQuilowatt = valorTotalQuilowatt - (valorTotalQuilowatt * 0.12);
  printf("-> Valor total a ser pago com 12 de desconto: %.2f\n", valorDescontoQuilowatt);

  return 0;
}
