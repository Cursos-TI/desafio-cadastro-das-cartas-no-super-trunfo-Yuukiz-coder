#include <stdio.h>

int main() {                                               //Início do programa.

    char Estado1, Cod1[4], Nome1[30];                     
    int Populacao1, Turisticos1, escolha;                       //Declaração das variáveis.
    float Area1, PIB1;
    float Densidade1, Percapta1;                      // Densidade populacional e PIB Per Capta
    float Inverso1;                                   // Inverso da Densidade Populacional
    float SuperPoder1;                                // Super Poder 

    printf("Ola usuario! Seja Bem-Vindo ao jogo de cartas Super Trunfo!\n");        // Inicio da interação com o usuário e coleta dos dados da primeira carta.
   
    printf("Agora vamos cadastrar 2 cartas, preciso que insira alguns dados!\n");    

    printf("Insira uma letra de A a H para representar o Estado:\n");          
    scanf(" %c", &Estado1);

    printf("Agora precisamos do codigo da carta, ele deve comecar com a mesma inicial do Estado seguido de um numero de 1 a 4:\n");      
    scanf(" %s", Cod1);

    printf("Qual o nome da sua Cidade?\n");            
    scanf(" %s", Nome1);

    printf("Qual a populacao dela?\n");                
    scanf(" %d", &Populacao1);

    printf("Qual a area dela?\n");                       
    scanf(" %f", &Area1);

    printf("Qual o valor do PIB?\n");
    scanf(" %f", &PIB1);

    printf("Quantos pontos turisticos ela possui?\n");
    scanf(" %d", &Turisticos1);                             //Fim da interação com o usuário e coleta dos dados da primeira carta.

    printf("Confira os dados a seguir e prossiga para o cadastro da proxima carta.\n");    //Exibição dos dados da primeira carta.

    printf("Estado: %c\n", Estado1);
    printf("Codigo: %s\n", Cod1);
    printf("Nome da Cidade: %s\n", Nome1);
    printf("Populacao de: %d habitantes\n", Populacao1);
    printf("Area de: %.2f quilometros quadrados\n", Area1);
    printf("PIB no valor de: %.2f reais\n", PIB1);
    printf("Possui %d pontos turisticos\n", Turisticos1);

    Densidade1 = (float) Populacao1 / Area1;      //Densidade populacional
    Percapta1 = (float) PIB1 / Populacao1;        //PIB Per Capta 
    
    printf("Densidade populacional: %.2f habitantes por quilometro quadrado.\n", Densidade1);
    printf("PIB per Capta de: %.2f reais.\n", Percapta1);

    Inverso1 = Area1 / Populacao1;                                                            //Cálculo do inverso da densidade populacional
    SuperPoder1 = (float) Populacao1 + Area1 + PIB1 + Turisticos1 + Percapta1 + Inverso1;      //Cálculo do Super Poder

    char Estado2, Cod2[4], Nome2[30];                //Início do cadastro da segunda carta.
    int Populacao2, Turisticos2;
    float Area2, PIB2;
    float Densidade2, Percapta2;                     //Densidade populacional e PIB Per Capta
    float Inverso2;                                  //Inverso da Densidade Populacional
    float SuperPoder2;                               //Super Poder

    printf("Agora faremos o cadastro da sua segunda carta do Super Trunfo!\n");         //Começo da interação com o usuário para o cadastro da segunda carta.

    printf("Insira uma letra de A a H para representar o Estado:\n");
    scanf(" %c", &Estado2);

    printf("Agora precisamos do codigo da carta, ele deve comecar com a mesma inicial do Estado:\n");
    scanf(" %s", Cod2);

    printf("Qual o nome da sua Cidade?\n");
    scanf(" %s", Nome2);

    printf("Qual a populacao dela?\n");
    scanf(" %d", &Populacao2);

    printf("Qual a area dela?\n");
    scanf(" %f", &Area2);

    printf("Qual o valor do PIB?\n");
    scanf(" %f", &PIB2);

    printf("Quantos pontos turisticos ela possui?\n");
    scanf(" %d", &Turisticos2);                                 //Término da interação com o usuário para o cadastro da segunda carta.

    printf("Confira os dados a seguir:\n");                    //Exibição dos dados da segunda carta para o usuário.

    printf("Estado: %c\n", Estado2);                            
    printf("Codigo: %s\n", Cod2);
    printf("Nome da Cidade: %s\n", Nome2);
    printf("Populacao de: %d habitantes\n", Populacao2);
    printf("Area de: %.2f quilometros quadrados\n", Area2);
    printf("PIB no valor de: %.2f reais\n", PIB2);
    printf("Possui %d pontos turisticos\n", Turisticos2);

    Densidade2 = Populacao2 / Area2;      //Densidade populacional
    Percapta2 = PIB2 / Populacao2;        //PIB Per Capta

    printf("Densidade populacional: %.2f habitantes por quilometro quadrado.\n", Densidade2);
    printf("PIB per Capta de: %.2f reais.\n", Percapta2);

    Inverso2 = Area2 / Populacao2;                                                              //Cálculo do inverso da densidade populacional
    SuperPoder2 = (float) Populacao2 + Area2 + PIB2 + Turisticos2 + Percapta2 + Inverso2;        //Cálculo do Super Poder  


    printf("Parabens! Suas 2 cartas foram cadastradas com sucesso!\n");
    printf("Agora vamos para a batalha!\n");
    //Menu Interativo
    printf("O jogador deve escolher qual atributo deseja comparar:\n\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("Selecione sua escolha: ");
    scanf("%d", &escolha);

    switch (escolha) {
    case 1:
    //Case População
        printf("\n--- Comparacao: População ---\n");
        printf("%s: %d habitantes\n", Nome1, Populacao1);
        printf("%s: %d habitantes\n", Nome2, Populacao2);
        if (Populacao1 > Populacao2) {
            printf("A carta %s venceu!\n", Nome1);
            printf("");
        } else if (Populacao1 < Populacao2) {
            printf("A carta %s venceu!\n", Nome2);
        } else {
            printf("Houve um empate\n");
        }
        break;
    case 2:
    //Case Área
        printf("\n--- Comparacao: Area ---\n");
        printf("%s: %.2f quilometros quadrados\n", Nome1, Area1);
        printf("%s: %.2f quilometros quadrados\n", Nome2, Area2);
        if (Area1 > Area2) {
            printf("A carta %s venceu!\n", Nome1);
        } else if (Area1 < Area2) {
            printf("A carta %s venceu!\n", Nome2);
        } else {
            printf("Houve um empate\n");
        }
        break;
    case 3:
    //Case PIB
        printf("\n--- Comparacao: PIB ---\n");
        printf("%s: %.2f reais\n", Nome1, PIB1);
        printf("%s: %.2f reais\n", Nome2, PIB2);
        if (PIB1 > PIB2) {
            printf("A carta %s venceu!\n", Nome1);
        } else if (PIB1 < PIB2) {
            printf("A carta %s venceu!\n", Nome2);
        } else {
            printf("Houve um empate\n");
        }
        break;
    case 4:
    //Case Pontos Turísticos
        printf("\n--- Comparacao: Pontos Turisticos ---\n");
        printf("%s: %d pontos turisticos\n", Nome1, Turisticos1);
        printf("%s: %d pontos turisticos\n", Nome2, Turisticos2);
        if (Turisticos1 > Turisticos2) {
            printf("A carta %s venceu!\n", Nome1);
        } else if (Turisticos1 < Turisticos2) {
            printf("A carta %s venceu!\n", Nome2);
        } else {
            printf("Houve um empate\n");
        }

        break;
    case 5:
    //Case Densidade Demográfica
        printf("\n--- Comparacao: Densidade Demografica ---\n");
        printf("%s: %.2f habitantes por quilometro quadrado\n", Nome1, Densidade1);
        printf("%s: %.2f habitantes por quilometro quadrado\n", Nome2, Densidade2);
        if (Densidade1 < Densidade2) {
            printf("A carta %s venceu!\n", Nome1);
        } else if (Densidade1 > Densidade2) {
            printf("A carta %s venceu!\n", Nome2);
        } else {
            printf("Houve um empate\n");
        }

        break;
    default:
    //Mensagem caso o usuário insira um número inválido
        printf("Selecione uma opcao valida.\n");
        return 0;
        break;
    }
    printf("Obrigado por jogar o Super Trunfo!\n");               //Mensagem final

    return 0;                                                    //Término do cadastro da segunda carta e do programa. :)
    
}