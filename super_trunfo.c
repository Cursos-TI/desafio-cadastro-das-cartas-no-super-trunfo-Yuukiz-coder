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
    //Variáveis que serão usadas nas comparações de 2 atributos
    int escolha1, escolha2, resultado1, resultado2;
    float soma1 = 0, soma2 = 0;
    char *atributo1, *atributo2;

    //Menu interativo de escolha do primeiro atributo 
    printf("O jogador deve escolher 2 atributos que deseja comparar:\n\n");
    printf("Escolha o primeiro:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("Selecione sua escolha: ");
    scanf("%d", &escolha1);

    switch (escolha1) {
        case 1:
    //Case População
        printf("Voce escolheu o atributo Populacao!\n");
        resultado1 = Populacao1 > Populacao2 ? 1 : 0;
        atributo1 = "Populacao";
        soma1 += Populacao1;
        soma2 += Populacao2;
        break;
    case 2:
    //Case Área
        printf("Voce escolheu o atributo Area!\n");
        resultado1 = Area1 > Area2 ? 1 : 0;
        atributo1 = "Area";
        soma1 += Area1;
        soma2 += Area2;
        break;
    case 3:
    //Case PIB
        printf("Voce escolheu o atributo PIB!\n");
        resultado1 = PIB1 > PIB2 ? 1 : 0;
        atributo1 = "PIB";
        soma1 += PIB1;
        soma2 += PIB2;
        break;
    case 4:
    //Case Pontos Turísticos
        printf("Voce escolheu o atributo Pontos Turisticos!\n");
        resultado1 = Turisticos1 > Turisticos2 ? 1 : 0;
        atributo1 = "Pontos Turisticos";
        soma1 += Turisticos1;
        soma2 += Turisticos2;
        break;
    case 5:
    //Case Densidade Demográfica
        printf("Voce escolheu o atributo Densidade Demografica!\n");
        resultado1 = Densidade1 < Densidade2 ? 1 : 0;
        atributo1 = "Densidade Demografica";
        soma1 += Densidade1;
        soma2 += Densidade2;
        break;
    default:
    //Mensagem caso o usuário insira um número inválido
        printf("Selecione uma opcao valida.\n");
        return 0;
        break;
    } 
    
    printf("Agora escolha o segundo atributo:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("Selecione sua escolha: ");
    scanf("%d", &escolha2);

    if (escolha1 == escolha2) { //
        printf("Voce escolheu o mesmo atributo.\n");
        return 0;
    } else {
        switch (escolha2) {
        case 1:
        //Case População
            printf("Voce escolheu o atributo Populacao!\n");
            resultado2 = Populacao1 > Populacao2 ? 1 : 0;
            atributo2 = "Populacao";
            soma1 += Populacao1; // += para somar e atribuir o resultado na variável soma
            soma2 += Populacao2;
            
            break;
        case 2:
        //Case Área
            printf("Voce escolheu o atributo Area!\n");
            resultado2 = Area1 > Area2 ? 1 : 0;
            atributo2 = "Area";
            soma1 += Area1;
            soma2 += Area2;
            break;
        case 3:
        //Case PIB
            printf("Voce escolheu o atributo PIB!\n");
            resultado2 = PIB1 > PIB2 ? 1 : 0;
            atributo2 = "PIB";
            soma1 += PIB1;
            soma2 += PIB2;
            break;
        case 4:
        //Case Pontos Turísticos
            printf("Voce escolheu o atributo Pontos Turisticos!\n");
            resultado2 = Turisticos1 > Turisticos2 ? 1 : 0;
            atributo2 = "Pontos Turisticos";
            soma1 += Turisticos1;
            soma2 += Turisticos2;
            break;
        case 5:
        //Case Densidade Demográfica
            printf("Voce escolheu o atributo Densidade Demografica!\n");
            resultado2 = Densidade1 < Densidade2 ? 1 : 0;
            atributo2 = "Densidade Demografica";
            soma1 += Densidade1;
            soma2 += Densidade2;
            break;
        default:
        //Mensagem caso o usuário insira um número inválido
            printf("Selecione uma opcao valida.\n");
            return 0;
            break;
        } 
    }
    //Resultados
    printf("\n***RESULTADOS***\n\n");
    //if de empate
    if(resultado1 == 0 && resultado2 == 0) { //Foi necessário usar == 0 porque o empate estava dando vitória para a cidade 2
        printf("Houve um empate na comparacao!\n"); 
        printf("Foram usados os atributos %s e %s.\n", atributo1, atributo2);
        if (soma1 > soma2) {
            printf("%s venceu a soma!\n", Nome1);
            printf("Valores da soma:\n");
            printf("%s: %.2f - %s: %.2f\n", Nome1, soma1, Nome2, soma2);
        } else if (soma1 < soma2) {
            printf("%s venceu a soma!\n", Nome2);
            printf("Valores da soma:\n");
            printf("%s: %.2f - %s: %.2f\n", Nome1, soma1, Nome2, soma2);
        } else { 
            printf("Houve um empate na soma!\n");
            printf("Valores da soma:\n");
            printf("%s: %.2f - %s: %.2f\n", Nome1, soma1, Nome2, soma2);
        }
    //else if de vitória para jogador 1    
    } else if (resultado1 && resultado2) {
        printf("%s venceu a comparacao!\n", Nome1);
        printf("Foram usados os atributos %s e %s.\n", atributo1, atributo2);
        if (soma1 > soma2) {
            printf("%s venceu a soma!\n", Nome1);
            printf("Valores da soma:\n");
            printf("%s: %.2f - %s: %.2f\n", Nome1, soma1, Nome2, soma2);
        } else if (soma1 < soma2) {
            printf("%s venceu a soma!\n", Nome2);
            printf("Valores da soma:\n");
            printf("%s: %.2f - %s: %.2f\n", Nome1, soma1, Nome2, soma2);
        } else {
            printf("Houve um empate na soma!\n");
            printf("Valores da soma:\n");
            printf("%s: %.2f - %s: %.2f\n", Nome1, soma1, Nome2, soma2);
        }
    //else if de empate usando !=
    } else if (resultado1 != resultado2) { //Somente o != como teste de empate não estava conseguindo reconhecer o resultado caso os valores fossem iguais
        printf("Houve um empate na comparacao!\n"); 
        printf("Foram usados os atributos %s e %s.\n", atributo1, atributo2);
        if (soma1 > soma2) {
            printf("%s venceu a soma!\n", Nome1);
            printf("Valores da soma:\n");
            printf("%s: %.2f - %s: %.2f\n", Nome1, soma1, Nome2, soma2);
        } else if (soma1 < soma2) {
            printf("%s venceu a soma!\n", Nome2);
            printf("Valores da soma:\n");
            printf("%s: %.2f - %s: %.2f\n", Nome1, soma1, Nome2, soma2);
        } else {
            printf("Houve um empate na soma!\n");
            printf("Valores da soma:\n");
            printf("%s: %.2f - %s: %.2f\n", Nome1, soma1, Nome2, soma2);
        }
    //else de vitória para o jogador 2
    } else {
        printf("%s venceu a comparacao!\n", Nome2);
        printf("Foram usados os atributos %s e %s.\n", atributo1, atributo2);
        if (soma1 > soma2) {
            printf("%s venceu a soma!\n", Nome1);
            printf("Valores da soma:\n");
            printf("%s: %.2f - %s: %.2f\n", Nome1, soma1, Nome2, soma2);
        } else if (soma1 < soma2) {
            printf("%s venceu a soma!\n", Nome2);
            printf("Valores da soma:\n");
            printf("%s: %.2f - %s: %.2f\n", Nome1, soma1, Nome2, soma2);
        } else {
            printf("Houve um empate na soma!\n");
            printf("Valores da soma:\n");
            printf("%s: %.2f - %s: %.2f\n", Nome1, soma1, Nome2, soma2);
        }
    }
    
    printf("Obrigado por jogar o Super Trunfo!\n");               //Mensagem final

    return 0;                                                    //Término do programa. :)
    
}