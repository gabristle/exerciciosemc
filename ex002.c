#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
2) Fazer um programa para ler as coordenadas x e y de dois pontos e calcular a
distância entre os dois pontos no plano, através da seguinte fórmula:
    −−−−−−−−−−−−−−−−−−−
d= √(x2−x1)2+(y2−y1)2
*/

int main () {
  //variaveis
  int x1;
  int x2;
  int y1;
  int y2;
  float distanciaPontos;

  //recebe os dois pontos
  printf("---> Digite um ponto: ");
  scanf("%d%d", &x1, &y1);
  printf("---> Digite outro ponto: ");
  scanf("%d%d", &x2, &y2);

  //calcula e mostra a distancia entre os dois pontos
  distanciaPontos = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  printf("-> A distancia entre os dois pontos e %.2f", distanciaPontos);

  return 0;
}
