#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// COLOQUEI PALAVRAS SEM ACENTO PORQUE MEU TERMINAL NÃO ACEITA E APARECE NÚMEROS E CARACTERES ALEATÓRIOS EM VEZ, NÃO SEI PORQUE...
 // Variáveis da Carta 1 (São Paulo) //
int main(){
    int escolhaJogador, escolhaComputador;
     srand(time(0));


   char Cidade1[] = "Sao Paulo"; // Nome da Cidade
   int Populacao1 = 12325000; // Sua População
   float Area1 =  1521.110; // Sua Área
   float PIB1 = 699.28 * 1000000000.0; // PIB
   int Pontos1 = 50; // Números de Pontos Turísticos
   float Densidade1 = Populacao1/Area1; // Calculei População dividido por Area
   
   
  // Variáveis da Carta 2 (Rio de Janeiro) //
   char Cidade2[] = "Rio de Janeiro"; // Nome da Cidade
   int Populacao2 = 6748000; // Sua População
   float Area2 =  1200.250; //  Área
   float PIB2 = 300.50 * 1000000000.0; // PIB
   int Pontos2 = 30; //  Números de pontos Turísticos
   float Densidade2 = Populacao2/Area2; // Calculei População dividido por Area
   

printf("---------------------------------------\n"); // Coloquei isso pra ajudar a separar as cartas uma da outra
   printf(" ### Carta Jogador ###\n"); // Nome da Carta
   printf("Nome da Cidade: %s\n", Cidade1); // Esse printf seleciona a String e depois mostra ela
   printf("Populacao: (Vence o MAIOR VALOR) %d\n", Populacao1); // Esse printf seleciona o número Inteiro, pode ser %d ou %i, e depois mostra ele
   printf("Area em KM: (Vence o MAIOR VALOR) %.2f\n", Area1); // Esse printf seleciona o número flutuante (decimais) e depois mostra ele
   printf("PIB (Bilhoes): (Vence o MAIOR VALOR) %.2f\n", PIB1); // Esse printf seleciona o número flutuante e depois mostra ele
   printf("Numeros de Pontos Turisticos: (Vence o MAIOR VALOR) %d\n", Pontos1); // Esse printf seleciona o Número inteiro e depois mostra ela
   printf("Densidade Demografica: (Vence o MENOR VALOR) %.2f\n", Densidade1); //Densidade Populacional mostrada em duas casa decimais
printf("---------------------------------------\n"); 
printf("### Carta do Computador ###\n"); 
   printf("Nome da Cidade: %s\n", Cidade2);
   printf("Populacao: (Vence o MAIOR VALOR) %d\n", Populacao2);
   printf("Area em KM: (Vence o MAIOR VALOR) %f\n", Area2);
   printf("PIB (Bilhoes): (Vence o MAIOR VALOR) %.2f\n", PIB2);
   printf("Numeros de Pontos Turisticos: (Vence o MAIOR VALOR) %d\n", Pontos2);
   printf("Densidade Demografica:  (Vence o MENOR VALOR) %.2f\n", Densidade2); 
printf("---------------------------------------\n");

printf(" Comece a Comparacao de Atributos\n");
pprintf("Nome da Cidade: %s\n", Cidade1);
printf("Nome da Cidade: %s\n", Cidade2);
    printf("Escolha um Atributo:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numero de pontos turisticos\n");
    printf("5. Densidade demografica\n");
    printf("Escolha:  ");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand() % 5 + 1;


    switch (escolhaJogador)
    {
    case 1:
        printf("Jogador: Populacao -  %d\n", Populacao1);
        break;
    case 2:
        printf("Jogador: Area - %f\n", Area1);
        break;
    case 3:
        printf("Jogador: PIB  - %.2f\n", PIB1);
        break;
    case 4:
        printf("Jogador: Numero de pontos turisticos - %d\n",Pontos1);
        break;
    case 5:
        printf("Jogador: Densidade demografica %.2f\n", Densidade1);
        break;
    default:
        printf("Opcao invalida\n");
    }

    switch (escolhaComputador)
    {
    case 1:
        printf("Computador: Populacao - %d\n", Populacao2);
        break;
    case 2:
        printf("Computador: Area  %f\n", Area2);
        break;
    case 3:
        printf("Computador: PIB %.2f\n", PIB2);
        break;
    case 4:
        printf("Computador: Numero de pontos turisticos %d\n", Pontos2);
        break;
    case 5:
        printf("Computador: Densidade demografica %.2f\n", Densidade2);
        break;
    }

    if (escolhaComputador == escolhaJogador){
        printf("Cidade 1: %s",&Cidade1);
        printf("Cidade 2 : %s",&Cidade2);
        printf("Atributo Escolhido: %d", escolhaJogador), ("%d", escolhaComputador);
        printf("### Empatados! ###");

    }else if 
    ((escolhaJogador > escolhaComputador)) {
        printf("Cidade 1: %s",&Cidade1);
        printf("Cidade 2 : %s",&Cidade2);
        printf("Atributo Escolhido: %d", escolhaJogador), ("%d", escolhaComputador);
        printf("### Voce Ganhou! ###");
     } else {
        printf("Cidade 1: %s",&Cidade1);
        printf("Cidade 2 : %s",&Cidade2);
        printf("Atributo Escolhido: %d", escolhaJogador), ("%d", escolhaComputador);
        printf("### Voce Perdeu! ###");
     }


return 0;
}