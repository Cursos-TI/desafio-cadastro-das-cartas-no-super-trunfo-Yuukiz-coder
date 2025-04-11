#include <stdio.h>

int main() {                                               //Início do programa.

    char Estado1, Cod1[4], Nome1[30];                     
    int Populacao1, Turisticos1;                       //Declaração das variáveis.
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

    printf("\n---Resultado---\n\n");
    
                                                                                  
    printf("Populacao - Carta 1 venceu? (%d)\n", Populacao1 > Populacao2);            //Início das comparações
    printf("Area - Carta 1 venceu? (%d)\n", Area1 > Area2);
    printf("PIB - Carta 1 venceu? (%d)\n", PIB1 > PIB2);
    printf("Pontos Turisticos - Carta 1 venceu? (%d)\n", Turisticos1 > Turisticos2);
    printf("Densidade Populacional - Carta 1 venceu? (%d)\n", Inverso1 > Inverso2);   //Usar o inverso
    printf("PIB per Capita - Carta 1 venceu? (%d)\n", Percapta1 > Percapta2);
    printf("Super Poder - Carta 1 venceu? (%d)\n", SuperPoder1 > SuperPoder2);        //Fim das comparações

    printf("Parabens ao vencedor e obrigado por jogar o Super Trunfo!\n");               //Mensagem final

    return 0;                                                    //Término do cadastro da segunda carta e do programa. :)
    
}