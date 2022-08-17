#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Na tarde de ontem, 06 de dezembro, alguns servidores da Amazon (AWS) pararam de
funcionar.
Com isso, diversos serviços ficaram indisponíveis. Dentre eles, os servidores
da Riot responsáveis pelos jogos League of Legends, Valorant e Wild Rift.


Você foi convocado em uma missão de emergência para ajudar a identificar os
locais das falhas e reestabelecer os serviços.

Para isso, faça um programa que armazene os dados de 5 cidades onde estão
localizados os servidores com problemas, cada cidade possui: nome (20 caracteres),
quantidade de servidores ativos(inteiro), quantidade de servidores com problemas
(inteiro) e quantidade total de servidores(inteiro).

Para isso, faça:

a) Faça um programa que receba os dados das 5 cidades: nome(strings), a
quantidade de servidores ativos e a quantidade de servidores com falha (salvos
nas duas primeiras colunas de uma matriz de inteiros 5x3). Os valores não podem
ser negativos, solicite novos valores enquanto o usuário digite valores inválidos.

b) Utilizando estruturas de repetição, calcule a quantidade total de servidores
em cada cidade e salve na última coluna da matriz;

c) Exiba em formato de tabela (com colunas alinhas separadas por |) os nomes, as
3 quantidades de servidores de todos as cidades.

d) Receba um nome de uma cidade e busque ela na lista, todos os dados de seus
servidores (apenas 1 vez). Exiba uma mensagem informando também caso não encontre
o nome buscado.

e) Exiba o nome da cidade e a porcentagem da cidade que tem o maior percentual de
servidores com problemas (duas casas decimais).

f) Utilizando estrutura de repetição, calcule e exiba o percentual total de
servidores ativos e de servidores com problemas.

g) Acrescente o texto "Defeated" ao final da string do nome todas as cidades que
têm o número de servidores com problemas maiores que os servidores ativos. Em
seguida exiba o nome de todas as cidades (alteradas ou não).
Ex: "São Paulo" -> "São Paulo Defeated"
*/

int main () {
  //variaveis
  int i;
  int achou = 0;
  int servAtivoBusca = 0;
  int servFalhaBusca = 0;
  int servTotalBusca = 0;
  int servidores[5][3];
  char busca[21];
  char cidade[5][21];

  //a) recebe o nome e as informações sobre os servidores da cidade
  for (i = 0; i < 5; i++) {
    //recebe os nomes das 5 cidades
    printf("Digite o nome da cidade %d: ", i+1);
    fgets(cidade[i], 20, stdin);
    cidade[i][strcspn(cidade[i],"\n")] = '\0';

    //recebe a quantidade de servidores ativos
    printf("Digite o numero de servidores ativos: ");
    scanf("%d", &servidores[i][0]);
    while (servidores[i][0] < 0) {
      printf("Erro!\n");
      printf("Digite novamente: ");
      scanf("%d", &servidores[i][0]);
    }//while

    //recebe a quantidade de servidores com falha
    printf("Digite o numero de servidores com falha: ");
    scanf("%d", &servidores[i][1]);
    while (servidores[i][1] < 0) {
      printf("Erro!\n");
      printf("Digite novamente: ");
      scanf("%d", &servidores[i][1]);
    }//while

    //b)calcula o numero total de servidores
    servidores[i][2] = servidores[i][0] + servidores[i][1];

    //limpa o lixo
    fflush(stdin);
  }//for

  //c)exibe a tabela das informações
  printf("|        Cidade        | S. Ativos | S. Falhas | N. de servidores total |\n");
  for (i = 0; i < 5; i++) {
    printf("| %20s |    %2d     |    %2d     |           %2d           |\n", cidade[i], servidores[i][0], servidores[i][1], servidores[i][2]);
  }//for

  //d)busca uma cidade e exibe as informações dos seus servidores
  //recebe a busca
  printf("Busque uma cidade: ");
  fgets(busca, 20, stdin);
  busca[strcspn(busca, "\n")] = '\0';
  fflush(stdin);

  //compara para buscar
  for (i = 0; i < 5; i++) {
    if (strcmp(busca , cidade[i]) == 0) {
      servAtivoBusca = servidores[i][0];
      servFalhaBusca = servidores[i][1];
      servTotalBusca = servidores[i][2];
      achou++;
    }//if
  }//for
  if (achou == 0) {
    printf("A cidade nao esta na lista");
  }//if
  else {
    printf("A cidade %s tem %d servidores ativos, %d servidores com falha, tendo %d no total.", busca, servAtivoBusca, servFalhaBusca, servTotalBusca);
  }//else

//e) exibe a cidade e a porcentagem da cidade com a maior porcentagem dos servidores com falha
//analisa qual é a cidade com maior numero de servidores com falha
  for(i = 0; i < 5; i++) {
    
  }//for

  return 0;
}
