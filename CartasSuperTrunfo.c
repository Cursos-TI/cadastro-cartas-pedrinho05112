#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  char Estado;
  int codigo;
  char cidade[20];
  unsigned long int populacao;
  float Area;
  float PIB;
  int turisticos;
  float dens;
  double carpita;
  float inverso_densidade;
  float super_poder;
  int menu;
  int menu2, Menu2;
  int menu3;
  float resultado;
  int vencedor;

  //Mebu interativo//
  printf("***SUPER TRUNFO***\n");
  printf("1. JOGAR\n");
  printf("2. REGRAS\n");
  printf("3. CRÉDITOS\n");
  printf("Escolha:\n");
  scanf("%d", &menu);

  switch (menu)
  {
  case 1:
      //Área para armazenar dados na variaves
    //Área 1
    printf("Digite o Estado de A-H:  ");
    scanf(" %c", &Estado);
    printf("Digite o codigo da carta:  ");
    scanf(" %d", &codigo);
    printf("Digite o nome da cidade:  ");
    scanf("  %[^\n]", cidade);
    printf("Digite a quantidade da população:  ");
    scanf(" %lu", &populacao);
    printf("Digite a Àrea:  ");
    scanf("%f", &Area);
    printf("Digite o PIB:  ");
    scanf("%f", &PIB);
    printf("Digite o numero de pontos turísticos:  ");
    scanf("%d", &turisticos);

    //Área que caulcula a densidade populacional e PIB per carpita
    dens = (float) populacao / Area;

    // Estou mutiplicando vezes 1 bilhão porquê a variavel float não aguenta tantos numeros assim
    carpita = (PIB * 1000000000.0 )  / populacao;
    inverso_densidade = 1.0 / dens;
    super_poder = (float) populacao + Area + PIB + turisticos + carpita + inverso_densidade;
    ////////////////////////////////////////////////////////////////////////////////////////////////
    //Espaço para separar
    printf("\n");
    //Área para definir variaveis da segunda carta
    //Área 2
    
    char Estado_2 = 'B';
    int codigo_2 = 2546;
    char cidade_2[20] = "Rio de Janeiro";
    unsigned long int  populacao_2 = 5875462433;
    float Area_2 = 548332155;
    float PIB_2 = 42563211;
    int turisticos_2 =50;
    float dens_2;
    double carpita_2;
    float inverso_densidade_2;
    float super_poder_2;
    float resultado2;

    //Área que caucula
    dens_2 = (float) populacao_2 / Area_2;
    carpita_2 = (PIB_2 * 1000000000.0) / populacao_2;
    inverso_densidade_2 = 1.0 / dens;
    super_poder_2 = (float) populacao_2 + Area_2 + PIB_2 + turisticos_2 + carpita_2 + inverso_densidade_2;

    //pular linha
    printf("\n");

    //Menu para escolher a opçâo de atributos
    printf("Escolha dois atributo para comparar.\n");
    printf("1. veja a informação de cada Cidade\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Numero de pontos turísticos\n");
    printf("6. Densidade demográfica\n");
    scanf("%d", &menu2);

    


    switch (menu2)
    {
    case 1:
      printf("Qual Cidade você deseja ver as informaçãos?\n");
      printf("1. %s\n", cidade);
      printf("2. %s\n", cidade_2);
      printf("Escolha:  \n");
      scanf("%d", &menu3);

      switch (menu3)
      {
       case 1:
        printf("\n");
        printf("Carta: 1\n");
        printf("Estado: %c\n", Estado);
        printf("Codigo: %d\n", codigo);
        printf("Nome da Cidade: %s\n", cidade);
        printf("População: %lu\n", populacao);
        printf("Àrea: %.2f Km\n", Area);
        printf("PIB: %.2f bilhões de reais\n", PIB);
        printf("Número de pontos Turísticos: %d\n", turisticos);
        printf("Densidade Populacional: %.2fhab/km\n", dens);
        printf("PIB per carpita: %.2f reais\n", carpita);
        printf("Super poder: %f\n", super_poder);
      break;
      case 2:
        printf("\n");
        printf("Carta: 2\n");
        printf("Estado: %c\n", Estado_2);
        printf("Codigo: %d\n", codigo_2);
        printf("Nome da Cidade: %s\n", cidade_2);
        printf("População: %lu\n", populacao_2);
        printf("Àrea: %.2f Km\n", Area_2);
        printf("PIB: %.2f bilhões e reais\n", PIB_2);
        printf("Número de pontos Turísticos: %d\n", turisticos_2);
        printf("Densidade Populacional: %.2f hab/km\n", dens_2);
        printf("PIB per carpita: %.2f reais\n", carpita_2);
        printf("Super poder: %f\n", super_poder_2 );
      break;
    
      default:
      printf("Opção invalida!\n");
      break;
      }
    break;

    // começo da case 2 do menu 1
    case 2:
      printf("\n");
      // segundo menu para outro atributo
      printf("Escolha o outro atributo para comparar.\n");
      printf("1. Área\n");
      printf("2. PIB\n");
      printf("3. Numero de pontos turísticos\n");
      printf("4. Densidade demográfica\n");
      scanf("%d", &Menu2);

      switch (Menu2)
      {
      case 1:
      printf("\n");
      printf("Atributo ==> População\n")
      printf("Atributo ==> Área\n");
      printf("Carta 1:%s VS Carta 2:%s\n", cidade, cidade_2);
      printf("Carta 1:%lu || carta 2: %lu\n", populacao, populacao_2 );
      printf("Carta 1:%f || carta 2: %f\n", Area, Area_2 );

      //soma dos dois resultados para comparar
      resultado2 float = populacao_2 + Area_2;
      resultado float = populacao  + Area;

      vencedor = (resultado > resultado2 ? 1 : 0) || (resultado == resultado2 ? 2);

      if (vencedor == 1)
      {
        printf("Carta 1: %s  VENCEU!!\n", cidade);
      }else if (vencedor = 2)
      {
        printf("EMPATE!\n");
      }else{
        printf("Carta 2: %s VENCEU!!\n", cidade_2);
       }
      break;
      case 2;
       printf("\n");
      printf("Atributo ==> População\n")
      printf("Atributo ==> PIB\n");
      printf("Carta 1:%s VS Carta 2:%s\n", cidade, cidade_2);
      printf("Carta 1:%lu || carta 2: %lu\n", populacao, populacao_2 );
      printf("Carta 1:%f || carta 2: %f\n", PIB, PIB_2 );

      //soma dos dois resultados para comparar
      resultado2 float = populacao_2 + PIB_2;
      resultado float = populacao + PIB;

      vencedor = (resultado > resultado2 ? 1 : 0) || (resultado == resultado2 ? 2);

      if (vencedor == 1)
      {
        printf("Carta 1: %s  VENCEU!!\n", cidade);
      }else if (vencedor = 2)
      {
        printf("EMPATE!\n");
      }else{
        printf("Carta 2: %s VENCEU!!\n", cidade_2);
       }
      break;
      case 3:
        printf("\n");
      printf("Atributo ==> População\n")
      printf("Atributo ==> Numero de pontos turísticos\n");
      printf("Carta 1:%s VS Carta 2:%s\n", cidade, cidade_2);
      printf("Carta 1:%lu || carta 2: %lu\n", populacao, populacao_2 );
      printf("Carta 1:%f || carta 2: %f\n", turisticos, turisticos_2 );

      //soma dos dois resultados para comparar
      resultado2 float = populacao_2 + turisticos_2;
      resultado float = populacao + turisticos;

      vencedor = (resultado > resultado2 ? 1 : 0) || (resultado == resultado2 ? 2);

      if (vencedor == 1)
      {
        printf("Carta 1: %s  VENCEU!!\n", cidade);
      }else if (vencedor = 2)
      {
        printf("EMPATE!\n");
      }else{
        printf("Carta 2: %s VENCEU!!\n", cidade_2);
       }
      break;
      case 4:
        printf("\n");
      printf("Atributo ==> População\n")
      printf("Atributo ==> Densidade demográfica\n");
      printf("Carta 1:%s VS Carta 2:%s\n", cidade, cidade_2);
      printf("Carta 1:%lu || carta 2: %lu\n", populacao, populacao_2 );
      printf("Carta 1:%f || carta 2: %f\n", dens, dens_2 );

      //soma dos dois resultados para comparar
      resultado2 float = populacao_2 + dens_2;
      resultado float = populacao + dens;

      vencedor = (resultado > resultado2 ? 1 : 0) || (resultado == resultado2 ? 2);

      if (vencedor == 1)
      {
        printf("Carta 1: %s  PERDEU!!\n", cidade);
      }else if (vencedor = 2)
      {
        printf("EMPATE!\n");
      }else{
        printf("Carta 2: %s VENCEU!!\n", cidade_2);
       }
      break;
      
      default:
      printf("Opção invalida!!\n")
        break;
      }
      //final da case 2 do menu 1

     //começo da case 3 do menu 1
    break;
    case 3:
       printf("\n");
      // segundo menu para outro atributo
      printf("Escolha o outro atributo para comparar.\n");
      printf("1. População\n");
      printf("2. PIB\n");
      printf("3. Numero de pontos turísticos\n");
      printf("4. Densidade demográfica\n");
      scanf("%d", &Menu2);

      switch (Menu2)
      {
      case 1:
      printf("\n");
      printf("Atributo ==> Área\n")
      printf("Atributo ==> população\n");
      printf("Carta 1:%s VS Carta 2:%s\n", cidade, cidade_2);
      printf("Carta 1:%2.f || carta 2: %2.f\n",Area, Area_2 );
      printf("Carta 1:%f || carta 2: %f\n", populacao, populacao_2 );

      //soma dos dois resultados para comparar
      resultado2 float = Area_2 + populacao_2;
      resultado float = Area  + populacao;

      vencedor = (resultado > resultado2 ? 1 : 0) || (resultado == resultado2 ? 2);

      if (vencedor == 1)
      {
        printf("Carta 1: %s  VENCEU!!\n", cidade);
      }else if (vencedor = 2)
      {
        printf("EMPATE!\n");
      }else{
        printf("Carta 2: %s VENCEU!!\n", cidade_2);
       }
      break;
      case 2;
       printf("\n");
      printf("Atributo ==> Área\n")
      printf("Atributo ==> PIB\n");
      printf("Carta 1:%s VS Carta 2:%s\n", cidade, cidade_2);
      printf("Carta 1:%lu || carta 2: %lu\n", Area, Area_2);
      printf("Carta 1:%f || carta 2: %f\n", PIB, PIB_2 );

      //soma dos dois resultados para comparar
      resultado2 float = Area_2 + PIB_2;
      resultado float = Area + PIB;

      vencedor = (resultado > resultado2 ? 1 : 0) || (resultado == resultado2 ? 2);

      if (vencedor == 1)
      {
        printf("Carta 1: %s  VENCEU!!\n", cidade);
      }else if (vencedor = 2)
      {
        printf("EMPATE!\n");
      }else{
        printf("Carta 2: %s VENCEU!!\n", cidade_2);
       }
      break;
      case 3:
        printf("\n");
      printf("Atributo ==> Área\n")
      printf("Atributo ==> Numero de pontos turísticos\n");
      printf("Carta 1:%s VS Carta 2:%s\n", cidade, cidade_2);
      printf("Carta 1:%lu || carta 2: %lu\n", Area, Area_2 );
      printf("Carta 1:%d || carta 2: %d\n", turisticos, turisticos_2 );

      //soma dos dois resultados para comparar
      resultado2 float = Area_2 + turisticos_2;
      resultado float = Area + turisticos;

      vencedor = (resultado > resultado2 ? 1 : 0) || (resultado == resultado2 ? 2);

      if (vencedor == 1)
      {
        printf("Carta 1: %s  VENCEU!!\n", cidade);
      }else if (vencedor = 2)
      {
        printf("EMPATE!\n");
      }else{
        printf("Carta 2: %s VENCEU!!\n", cidade_2);
       }
      break;
      case 4:
        printf("\n");
      printf("Atributo ==> Área\n")
      printf("Atributo ==> Densidade demográfica\n");
      printf("Carta 1:%s VS Carta 2:%s\n", cidade, cidade_2);
      printf("Carta 1:%lu || carta 2: %lu\n", Area, Area_2 );
      printf("Carta 1:%f || carta 2: %f\n", dens, dens_2 );

      //soma dos dois resultados para comparar
      resultado2 float = Area_2 + dens_2;
      resultado float = Area + dens;

      vencedor = (resultado > resultado2 ? 1 : 0) || (resultado == resultado2 ? 2);

      if (vencedor == 1)
      {
        printf("Carta 1: %s  PERDEU!!\n", cidade);
      }else if (vencedor = 2)
      {
        printf("EMPATE!\n");
      }else{
        printf("Carta 2: %s VENCEU!!\n", cidade_2);
       }
      break;
      
      default:
      printf("Opção invalida!!\n")
        break;
      }
    break;
    //final da case 3 do menu 1

    // começo da case 4 do menu 1
    case 4:
      printf("\n");
      // segundo menu para outro atributo
      printf("Escolha o outro atributo para comparar.\n");
      printf("1. População\n");
      printf("2. Área\n");
      printf("3. Numero de pontos turísticos\n");
      printf("4. Densidade demográfica\n");
      scanf("%d", &Menu2);

      switch (Menu2)
      {
      case 1:
      printf("\n");
      printf("Atributo ==> PIB\n")
      printf("Atributo ==> População\n");
      printf("Carta 1:%s VS Carta 2:%s\n", cidade, cidade_2);
      printf("Carta 1:%lu || carta 2: %lu\n", PIB, PIB_2 );
      printf("Carta 1:%f || carta 2: %f\n", populacao, populacao_2 );

      //soma dos dois resultados para comparar
      resultado2 float = PIB_2 + populacao_2;
      resultado float = PIB  + populacao;

      vencedor = (resultado > resultado2 ? 1 : 0) || (resultado == resultado2 ? 2);

      if (vencedor == 1)
      {
        printf("Carta 1: %s  VENCEU!!\n", cidade);
      }else if (vencedor = 2)
      {
        printf("EMPATE!\n");
      }else{
        printf("Carta 2: %s VENCEU!!\n", cidade_2);
       }
      break;
      case 2;
       printf("\n");
      printf("Atributo ==> PIB\n")
      printf("Atributo ==> Área\n");
      printf("Carta 1:%s VS Carta 2:%s\n", cidade, cidade_2);
      printf("Carta 1:%lu || carta 2: %lu\n", PIB, PIB_2);
      printf("Carta 1:%f || carta 2: %f\n", Area, Area_2 );

      //soma dos dois resultados para comparar
      resultado2 float = Area_2 + PIB_2;
      resultado float = Area+ PIB;

      vencedor = (resultado > resultado2 ? 1 : 0) || (resultado == resultado2 ? 2);

      if (vencedor == 1)
      {
        printf("Carta 1: %s  VENCEU!!\n", cidade);
      }else if (vencedor = 2)
      {
        printf("EMPATE!\n");
      }else{
        printf("Carta 2: %s VENCEU!!\n", cidade_2);
       }
      break;
      case 3:
        printf("\n");
      printf("Atributo ==> PIB\n")
      printf("Atributo ==> Numero de pontos turísticos\n");
      printf("Carta 1:%s VS Carta 2:%s\n", cidade, cidade_2);
      printf("Carta 1:%lu || carta 2: %lu\n", PIB, PIB_2);
      printf("Carta 1:%f || carta 2: %f\n", turisticos, turisticos_2 );

      //soma dos dois resultados para comparar
      resultado2 float = PIB_2 + turisticos_2;
      resultado float = PIB + turisticos;

      vencedor = (resultado > resultado2 ? 1 : 0) || (resultado == resultado2 ? 2);

      if (vencedor == 1)
      {
        printf("Carta 1: %s  VENCEU!!\n", cidade);
      }else if (vencedor = 2)
      {
        printf("EMPATE!\n");
      }else{
        printf("Carta 2: %s VENCEU!!\n", cidade_2);
       }
      break;
      case 4:
        printf("\n");
      printf("Atributo ==> PIB\n")
      printf("Atributo ==> Densidade demográfica\n");
      printf("Carta 1:%s VS Carta 2:%s\n", cidade, cidade_2);
      printf("Carta 1:%lu || carta 2: %lu\n", PIB, PIB_2 );
      printf("Carta 1:%f || carta 2: %f\n", dens, dens_2 );

      //soma dos dois resultados para comparar
      resultado2 float = PIB_2 + dens_2;
      resultado float = PIB + dens;

      vencedor = (resultado > resultado2 ? 1 : 0) || (resultado == resultado2 ? 2);

      if (vencedor == 1)
      {
        printf("Carta 1: %s  PERDEU!!\n", cidade);
      }else if (vencedor = 2)
      {
        printf("EMPATE!\n");
      }else{
        printf("Carta 2: %s VENCEU!!\n", cidade_2);
       }
      break;
      
      default:
      printf("Opção invalida!!\n")
        break;
      }
    break;
    //final da case 4 do menu

    //começo a case 5 do menu 1
    case  5:
      printf("\n");
      // segundo menu para outro atributo
      printf("Escolha o outro atributo para comparar.\n");
      printf("1. População\n");
      printf("2. Área\n");
      printf("3.PIB\n");
      printf("4. Densidade demográfica\n");
      scanf("%d", &Menu2);

      switch (Menu2)
      {
      case 1:
      printf("\n");
      printf("Atributo ==> Numero de pontos turísticos\n")
      printf("Atributo ==> População\n");
      printf("Carta 1:%s VS Carta 2:%s\n", cidade, cidade_2);
      printf("Carta 1:%lu || carta 2: %lu\n", turisticos, turisticos_2 );
      printf("Carta 1:%f || carta 2: %f\n", populacao, populacao_2 );

      //soma dos dois resultados para comparar
      resultado2 float = populacao_2 + turisticos_2;
      resultado float = populacao  + turisticos;

      vencedor = (resultado > resultado2 ? 1 : 0) || (resultado == resultado2 ? 2);

      if (vencedor == 1)
      {
        printf("Carta 1: %s  VENCEU!!\n", cidade);
      }else if (vencedor = 2)
      {
        printf("EMPATE!\n");
      }else{
        printf("Carta 2: %s VENCEU!!\n", cidade_2);
       }
      break;
      case 2;
       printf("\n");
      printf("Atributo ==> Numero de pontos turísticos\n")
      printf("Atributo ==> Área\n");
      printf("Carta 1:%s VS Carta 2:%s\n", cidade, cidade_2);
      printf("Carta 1:%lu || carta 2: %lu\n", turisticos, turisticos_2 );
      printf("Carta 1:%f || carta 2: %f\n", Area, Area_2 );

      //soma dos dois resultados para comparar
      resultado2 float = turisticos_2 + Area_2;
      resultado float = turisticos + Area;

      vencedor = (resultado > resultado2 ? 1 : 0) || (resultado == resultado2 ? 2);

      if (vencedor == 1)
      {
        printf("Carta 1: %s  VENCEU!!\n", cidade);
      }else if (vencedor = 2)
      {
        printf("EMPATE!\n");
      }else{
        printf("Carta 2: %s VENCEU!!\n", cidade_2);
       }
      break;
      case 3:
        printf("\n");
      printf("Atributo ==> Numero de pontos turísticos\n")
      printf("Atributo ==> PIB\n");
      printf("Carta 1:%s VS Carta 2:%s\n", cidade, cidade_2);
      printf("Carta 1:%lu || carta 2: %lu\n", turisticos, turisticos_2 );
      printf("Carta 1:%f || carta 2: %f\n", PIB, PIB_2 );

      //soma dos dois resultados para comparar
      resultado2 float = PIB_2+ turisticos_2;
      resultado float = PIB + turisticos;

      vencedor = (resultado > resultado2 ? 1 : 0) || (resultado == resultado2 ? 2);

      if (vencedor == 1)
      {
        printf("Carta 1: %s  VENCEU!!\n", cidade);
      }else if (vencedor = 2)
      {
        printf("EMPATE!\n");
      }else{
        printf("Carta 2: %s VENCEU!!\n", cidade_2);
       }
      break;
      case 4:
        printf("\n");
      printf("Atributo ==> Numero de pontos turísticos\n")
      printf("Atributo ==> Densidade demográfica\n");
      printf("Carta 1:%s VS Carta 2:%s\n", cidade, cidade_2);
      printf("Carta 1:%lu || carta 2: %lu\n", turisticos, turisticos_2 );
      printf("Carta 1:%f || carta 2: %f\n", dens, dens_2 );

      //soma dos dois resultados para comparar
      resultado2 float = turisticos_2 + dens_2;
      resultado float = turisticos + dens;

      vencedor = (resultado > resultado2 ? 1 : 0) || (resultado == resultado2 ? 2);

      if (vencedor == 1)
      {
        printf("Carta 1: %s  PERDEU!!\n", cidade);
      }else if (vencedor = 2)
      {
        printf("EMPATE!\n");
      }else{
        printf("Carta 2: %s VENCEU!!\n", cidade_2);
       }
      break;
      
      default:
      printf("Opção invalida!!\n")
        break;
      }
    break;
    //final da case 5 do menu 1

    //começo da case 6 do menu 1
    case 6:
      printf("\n");
      // segundo menu para outro atributo
      printf("Escolha o outro atributo para comparar.\n");
      printf("1. População\n");
      printf("2. Área\n");
      printf("3.PIB\n");
      printf("4. Pontos Turísticos\n");
      scanf("%d", &Menu2);

      switch (Menu2)
      {
      case 1:
      printf("\n");
      printf("Atributo ==> Densidade demográfica\n")
      printf("Atributo ==> População\n");
      printf("Carta 1:%s VS Carta 2:%s\n", cidade, cidade_2);
      printf("Carta 1:%lu || carta 2: %lu\n", dens, dens_2);
      printf("Carta 1:%f || carta 2: %f\n", populacao, populacao_2 );

      //soma dos dois resultados para comparar
      resultado2 float = populacao_2 + dens_2;
      resultado float = populacao  + dens;

      vencedor = (resultado > resultado2 ? 1 : 0) || (resultado == resultado2 ? 2);

      if (vencedor == 1)
      {
        printf("Carta 1: %s  PERDEU!!\n", cidade);
      }else if (vencedor = 2)
      {
        printf("EMPATE!\n");
      }else{
        printf("Carta 2: %s VENCEU!!\n", cidade_2);
       }
      break;
      case 2;
       printf("\n");
      printf("Atributo ==> Densidade demográfica\n")
      printf("Atributo ==> Área\n");
      printf("Carta 1:%s VS Carta 2:%s\n", cidade, cidade_2);
      printf("Carta 1:%lu || carta 2: %lu\n", dens, dens_2 );
      printf("Carta 1:%f || carta 2: %f\n", Area, Area_2 );

      //soma dos dois resultados para comparar
      resultado2 float = dens_2 + Area_2;
      resultado float = dens + Area;

      vencedor = (resultado > resultado2 ? 1 : 0) || (resultado == resultado2 ? 2);

      if (vencedor == 1)
      {
        printf("Carta 1: %s  PERDEU!!\n", cidade);
      }else if (vencedor = 2)
      {
        printf("EMPATE!\n");
      }else{
        printf("Carta 2: %s VENCEU!!\n", cidade_2);
       }
      break;
      case 3:
        printf("\n");
      printf("Atributo ==> Densidade demográfica\n")
      printf("Atributo ==> PIB\n");
      printf("Carta 1:%s VS Carta 2:%s\n", cidade, cidade_2);
      printf("Carta 1:%lu || carta 2: %lu\n", dens, dens_2 );
      printf("Carta 1:%f || carta 2: %f\n", PIB, PIB_2 );

      //soma dos dois resultados para comparar
      resultado2 float = PIB_2+ dens_2;
      resultado float = dens + dens;

      vencedor = (resultado > resultado2 ? 1 : 0) || (resultado == resultado2 ? 2);

      if (vencedor == 1)
      {
        printf("Carta 1: %s  PERDEU!!\n", cidade);
      }else if (vencedor = 2)
      {
        printf("EMPATE!\n");
      }else{
        printf("Carta 2: %s VENCEU!!\n", cidade_2);
       }
      break;
      case 4:
        printf("\n");
      printf("Atributo ==> Densidade demográfica\n");
      printf("Atributo ==> Pontos Turísticos\n");
      printf("Carta 1:%s VS Carta 2:%s\n", cidade, cidade_2);
      printf("Carta 1:%2.f || carta 2: %2.f\n", dens, dens_2 );
      printf("Carta 1:%d || carta 2: %d\n", turisticos, turisticos_2 );

      //soma dos dois resultados para comparar
      resultado2 = (float)  turisticos_2 + dens_2;
      resultado  = (float) turisticos + dens;

      vencedor = (resultado > resultado2 ? 1 : 0) || (resultado == resultado2 ? 2 : 0);

      if (vencedor == 1)
      {
        printf("Carta 1: %s  PERDEU!!\n", cidade);
      }else if (vencedor = 2)
      {
        printf("EMPATE!\n");
      }else{
        printf("Carta 2: %s VENCEU!!\n", cidade_2);
       }
      break;
      
      default:
      printf("Opção invalida!!\n");
        break;
      }
    break; 
  
    default:
      printf("Opção invalida\n");
     break;
    }

  break;
    
    case 2:
      printf("\n");
      //regras do jogo
       printf("***Regras basica do SUPER TRUNFO***");
       printf("\n");
       printf("\n");
       printf("**PREPARAÇÃO: Embaralhe e distribua todas as 32 cartas igualmente entre os jogadores.\n");
       printf("\n");
       printf("**O JOGO: Os jogadores seguram suas cartas em um monte, vendo apenas a do topo.\n");
       printf("\n");
       printf("**A RODADA: O jogador da vez escolhe uma das características da sua carta e lê em voz alta (ex: 'Velocidade: 300 km/h').\n");
       printf("\n");
       printf("**COMPARAÇÃO: Os outros jogadores leem o valor da mesma categoria em suas cartas.\n");
       printf("\n");
       printf("**VENCEDOR DA RODADA: Quem tiver o maior valor ganha as cartas dos oponentes e as coloca no fundo do seu monte.\n");
       printf("\n");
       printf("**PROXIMA RODADA: O vencedor da rodada escolhe o próximo atributo.\n");
       printf("\n");
       printf("**EMPATE: Se houver empate, as cartas ficam na mesa e o mesmo jogador escolhe um novo atributo da próxima carta para desempatar, levando todas as cartas.\n");
       printf("\n");
       printf("**SUPER TRUNFO: A carta especial vence qualquer outra, exceto as cartas marcadas com a letra 'A'.\n");
       printf("\n");
       printf("**OBJETICO: Vence quem conquistar todas as cartas do baralho.\n ");
       printf("\n");
     
     
    break;
  case 3:
    printf("\n");
     //creditos....
     printf("***FEITO POR PEDRO HENRIQUE***\n");
  break;
  
  default:
    printf("Opção invalida\n");
    break;
  }

  

  return 0;

  

  
} 
