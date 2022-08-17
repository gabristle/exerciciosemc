#include <stdio.h>
#include <stdlib.h>

/*
3) Faça um programa que tenha como entrada: o número de horas, minutos e segundos
atuais, informe quantos segundos faltam para chegar terminar o dia.
*/

int main () {
  //variaveis
  int horas;
  int minutos;
  int segundos;
  int segundosTerminarDia;

  //recebe o horario atual
  printf("---> Digite o horario atual: ");
  scanf("%d%d%d", &horas, &minutos, &segundos);

  //calcula e mostra quanto segundos falta para terminar o dia
  segundosTerminarDia = 86400 - ((horas*3600)+(minutos*60)+segundos);
  printf("Faltam %d segundos para terminar o dia", segundosTerminarDia);

  return 0;
}
