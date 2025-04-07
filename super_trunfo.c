#include <stdio.h>

int main() {                                               //Início do programa.

    char Estado1, Cod1[4], Nome1[30];                     
    int Populacao1, Turisticos1;                       //Declaração das variáveis.
    float Area1, PIB1;

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
    printf("Populaçao de: %d habitantes\n", Populacao1);
    printf("Area de: %.2f quilometros quadrados\n", Area1);
    printf("PIB no valor de: %.2f reais\n", PIB1);
    printf("Possui %d pontos turisticos\n", Turisticos1);

    char Estado2, Cod2[4], Nome2[30];                //Início do cadastro da segunda carta.
    int Populacao2, Turisticos2;
    float Area2, PIB2;

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
    printf("Populaçao de: %d habitantes\n", Populacao2);
    printf("Area de: %.2f quilometros quadrados\n", Area2);
    printf("PIB no valor de: %.2f reais\n", PIB2);
    printf("Possui %d pontos turisticos\n", Turisticos2);

    printf("Parabens! Suas 2 cartas foram cadastradas com sucesso!\n");

    return 0;                                                    //Término do cadastro da segunda carta e do programa. :)
    
}