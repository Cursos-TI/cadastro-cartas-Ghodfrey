#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  char nome[15];
  char estado[3];
  int populacao;
  float pib;
  int pontosTuristicos;
  float area; 
  char codigo[4];
  
  // Área para entrada de dados

  printf("Digite o nome da cidade:\n");
  scanf("%s", nome);

  printf("digite o estado da cidade com uma letra de A a H:\n");
  scanf("%s", estado);

  printf("digite o numero de habitantes:\n");
  scanf("%d", &populacao);

  printf("digite o PIB:\n");
  scanf("%f", &pib);

  printf("Digite a quantidade de pontos turisticos da cidade:\n");
  scanf("%d", &pontosTuristicos);

  printf("Digite a area em km:\n");
  scanf("%f", &area);

  printf("digite um codigo para a cidade, sendo ele a letra escolhida pra o estado e um numero de 01 a 04:\n");
  scanf("%s", codigo);
  
  // Área para exibição dos dados da cidade

  printf("nome: %s\n", nome);

  printf("estado: %s\n", estado);

  printf("Populacao: %d\n", populacao);

  printf("PIB: %f\n", pib);

  printf("Numero de pontos turisticos: %d\n", pontosTuristicos);

  printf("area: %f\n", area);

  printf("Codigo: %s\n", codigo);

  return 0;
} 
