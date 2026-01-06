#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  printf("Carta:1\n");
  char Estado;
  char codigo[20];
  char cidade[20];
  int população;
  float Àrea;
  float PIB;
  int turisticos;
  //Área para armazenar dados na variaves
  printf("Digite o Estado de A-H:  ");
  scanf("%c", &Estado);
  printf("Digite o codigo da carta:  ");
  scanf("%s", codigo);
  printf("Digite o nome da cidade:  ");
  scanf("%s", cidade);
  printf("Digite a quantidade da população:  ");
  scanf("%d", &população);
  printf("Digite a Àrea:  ");
  scanf("%f", &Àrea);
  printf("Digite o PIB:  ");
  scanf("%f", &PIB);
  printf("Digite o numero de pontos turísticos:  ");
  scanf("%d", &turisticos);
  //Espaço para separar
  printf("\n");
  //Área que printa os dados das cartas
  printf("Carta: 1\n");
  printf("Estado: %c\n", Estado);
  printf("Codigo: %s\n", codigo);
  printf("Nome da Cidade: %s\n", cidade);
  printf("População: %d\n", população);
  printf("Àrea: %.2f Km\n", Àrea);
  printf("PIB: %.2f bilhões e reais\n", PIB);
  printf("Número de pontos Turísticos: %d\n", turisticos);
  //Espaço para separar
  printf("\n");
  //Área para definir variaveis da segunda carta
  printf("Carta: 2\n");
  char Estado_2;
  char codigo_2[20];
  char cidade_2[20];
  int população_2;
  float Àrea_2;
  float PIB_2;
  int turisticos_2;
  //Área para armazenar os dados das cartas
  printf("Digite o Estado de A-H:  ");
  scanf(" %c", &Estado_2);
  printf("Digite o codigo da carta:  ");
  scanf("%s", codigo_2);
  printf("Digite o nome da cidade:  ");
  scanf("%s", cidade_2);
  printf("Digite a quantidade da população:  ");
  scanf("%d", &população_2);
  printf("Digite a Àrea:  ");
  scanf("%f", &Àrea_2);
  printf("Digite o PIB:  ");
  scanf("%f", &PIB_2);
  printf("Digite o numero de pontos turísticos:  ");
  scanf("%d", &turisticos_2);
  //Espaço para separar
  printf("\n");
  //print das informações da segunda da carta
  printf("Carta: 2\n");
  printf("Estado: %c\n", Estado_2);
  printf("Codigo: %s\n", codigo_2);
  printf("Nome da Cidade: %s\n", cidade_2);
  printf("População: %d\n", população_2);
  printf("Àrea: %.2f Km\n", Àrea_2);
  printf("PIB: %.2f bilhões e reais\n", PIB_2);
  printf("Número de pontos Turísticos: %d\n", turisticos_2);

  return 0;

  // Área para entrada de dados

  // Área para exibição dos dados da cidade
} 
