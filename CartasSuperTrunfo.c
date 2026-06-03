#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  //variáveis das cidades
  
  char nomecarta1[15];
  char nomecarta2[15];
  char estadocarta1[3];
  char estadocarta2[3];
  int populacaocarta1;
  int populacaocarta2;
  float pibcarta1;
  float pibcarta2;
  int pontosturisticoscarta1;
  int pontosturisticoscarta2;
  float areacarta1;
  float areacarta2;
  char codigocarta1[4];
  char codigocarta2[4];
  
  //printf e scanf da cidade1

  printf("Dados da cidade 1:\n");

  printf("Digite o nome da cidade:\n");
  scanf("%s", nomecarta1);

  printf("digite o estado da cidade com uma letra de A a H:\n");
  scanf("%s", estadocarta1);

  printf("digite o numero de habitantes:\n");
  scanf("%d", &populacaocarta1);

  printf("digite o PIB:\n");
  scanf("%f", &pibcarta1);

  printf("Digite a quantidade de pontos turisticos da cidade:\n");
  scanf("%d", &pontosturisticoscarta1);

  printf("Digite a area em km:\n");
  scanf("%f", &areacarta1);

  printf("digite um codigo para a cidade, sendo ele a letra escolhida pra o estado e um numero de 01 a 04:\n");
  scanf("%s", codigocarta1);

  //printf e scanf da cidade2

  printf("Dados da cidade 2:\n");
  
  printf("Digite o nome da cidade:\n");
  scanf("%s", nomecarta2);

  printf("digite o estado da cidade com uma letra de A a H:\n");
  scanf("%s", estadocarta2);

  printf("digite o numero de habitantes:\n");
  scanf("%d", &populacaocarta2);

  printf("digite o PIB:\n");
  scanf("%f", &pibcarta2);

  printf("Digite a quantidade de pontos turisticos da cidade:\n");
  scanf("%d", &pontosturisticoscarta2);

  printf("Digite a area em km:\n");
  scanf("%f", &areacarta2);

  printf("digite um codigo para a cidade, sendo ele a letra escolhida pra o estado e um numero de 01 a 04:\n");
  scanf("%s", codigocarta2);
  
  //exibição dos dados da cidade1

  printf("Dados da cidade 1:\n");

  printf("nome: %s\n", nomecarta1);

  printf("estado: %s\n", estadocarta1);

  printf("Populacao: %d\n", populacaocarta1);

  printf("PIB: %f\n", pibcarta1);

  printf("Numero de pontos turisticos: %d\n", pontosturisticoscarta1);

  printf("area: %f\n", areacarta1);

  printf("Codigo: %s\n", codigocarta1);

  //exibição dos dados da cidade2

  printf("Dados da cidade 2:\n");

  printf("nome: %s\n", nomecarta2);

  printf("estado: %s\n", estadocarta2);

  printf("Populacao: %d\n", populacaocarta2);

  printf("PIB: %f\n", pibcarta2);

  printf("Numero de pontos turisticos: %d\n", pontosturisticoscarta2);

  printf("area: %f\n", areacarta2);

  printf("Codigo: %s\n", codigocarta2);

  return 0;
}