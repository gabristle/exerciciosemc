#include <stdio.h>
#include <stdlib.h>

/*
4)Faça um programa que receba 3 idades distintas e mostre: a idade da pessoa
mais velha; a idade da pessoa mais nova e a média das 3 idades . O programa
deve considerar e informar o caso de 2 ou 3 pessoas terem a mesma idade.
*/

int main () {
  //variaveis
  int i;
  int idades[3];
  int maisVelho = 0;
  int maisNova = 0;
  int somaIdades = 0;
  float mediaIdades;

  //recebe as 3 idades
  for(i = 0; i < 3; i++) {
    printf("Digite uma idade: ");
    scanf("%d", &idades[i]);
  }//for

  //analisa mostra idade da pessoa mais velha
  for(i = 0; i < 3; i++) {
    if(i == 0) {
      idades[0] = maisVelho;
    }//if
    else if(maisVelho < idades[i]) {
      maisVelho = idades[i];
    }//if
  }//for
  printf("-> Idade da pessoa mais velha: %d", maisVelho);

  //analisa e mostra a idade da pessoa mais nova
  for(i = 0; i < 3; i++) {
    if(i == 0) {
      idades[0] = maisNova;
    }//if
    else if(maisNova < idades[i]) {
      maisNova = idades[i];
    }//else if
  }//for
  printf("-> Idade da pessoa mais nova: %d", maisNova);

  //calcula e mostra a media entre as 3 idades
  for(i = 0; i < 3; i++) {
    somaIdades = somaIdades + idades[i];
  }//for
  mediaIdades = somaIdades/3;
  printf("-> Media entre as idades : %.2f", mediaIdades);

  //mensagem que o programa devera mostrar caso tiverem idades iguais


  return 0;
}
