#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char cod_estado;
  int cod_cidade, populacao, pturisticos;
  float area, pib;
  // Área para entrada de dados
  printf("Insira o código do estado: ");
  scanf("%c", &cod_estado);
  printf("Insira o código da cidade: ");
  scanf("%d", &cod_cidade);
  printf("Agora vamos inserir os dados da carta\n");
  printf("Insira a população dessa cidade: ");
  scanf("%d", &populacao);
  printf("Insira a área dessa cidade: ");
  scanf("%f", &area);
  printf("Insira o PIB dessa cidade: ");
  scanf("%f", &pib);
  printf("Insira o número de pontos turísticos dessa cidade: ");
  scanf("%d", &pturisticos);

  // Área para exibição dos dados da cidade
  printf("Dados da carta %c%d \n", cod_estado, cod_cidade);
  printf("População: %d \n", populacao);
  printf("Área: %f \n", area);
  printf("PIB: %f \n", pib);
  printf("Pontos turísticos: %d \n", pturisticos);
return 0;
} 
