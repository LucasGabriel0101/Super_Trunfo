#include <stdio.h>
#include <stdlib.h>

// COLOQUEI PALAVRAS SEM ACENTO PORQUE MEU TERMINAL NÃO ACEITA E APARECE NÚMEROS E CARACTERES ALEATÓRIOS EM VEZ, NÃO SEI PORQUE...
 // Variáveis da Carta 1 (São Paulo) //
int main(){
    int escolhaJogador;
     
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
   int Pontos2 = 50; //  Números de pontos Turísticos  ((COLOQUEI 50 PARA TESTAR O "EMPATE NO RESULTADO"))
   float Densidade2 = Populacao2/Area2; // Calculei População dividido por Area
   

printf("---------------------------------------\n"); // Coloquei isso pra ajudar a separar as cartas uma da outra
   printf(" ### Carta Jogador ###\n"); // Carta do Jogador ( SÃO PAULO)
   printf("Nome da Cidade: %s\n", Cidade1); // Esse printf seleciona a String e depois mostra ela
   printf("Populacao: (Vence o MAIOR VALOR) %d\n", Populacao1); // Esse printf seleciona o número Inteiro, pode ser %d ou %i, e depois mostra ele
   printf("Area em KM: (Vence o MAIOR VALOR) %.2f\n", Area1); // Esse printf seleciona o número flutuante (decimais) e depois mostra ele
   printf("PIB (Bilhoes): (Vence o MAIOR VALOR) %.2f\n", PIB1); // Esse printf seleciona o número flutuante e depois mostra ele
   printf("Numeros de Pontos Turisticos: (Vence o MAIOR VALOR) %d\n", Pontos1); // Esse printf seleciona o Número inteiro e depois mostra ela
   printf("Densidade Demografica: (Vence o MENOR VALOR) %.2f\n", Densidade1); //Densidade Populacional mostrada em duas casa decimais
printf("---------------------------------------\n"); 
printf("### Carta do Computador ###\n"); 
   printf("Nome da Cidade: %s\n", Cidade2); //Carta do computador( RIO DE JANEIRO)
   printf("Populacao: (Vence o MAIOR VALOR) %d\n", Populacao2);
   printf("Area em KM: (Vence o MAIOR VALOR) %f\n", Area2);
   printf("PIB (Bilhoes): (Vence o MAIOR VALOR) %.2f\n", PIB2);
   printf("Numeros de Pontos Turisticos: (Vence o MAIOR VALOR) %d\n", Pontos2);
   printf("Densidade Demografica:  (Vence o MENOR VALOR) %.2f\n", Densidade2); 
printf("---------------------------------------\n");

printf(" Comece a Comparacao de Atributos\n");
printf("Nome da Cidade: %s\n", Cidade1);
printf("Nome da Cidade: %s\n", Cidade2);
    printf("Escolha um Atributo:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numero de pontos turisticos\n");
    printf("5. Densidade demografica\n");
    printf("Escolha:  ");
    scanf("%d", &escolhaJogador);


   switch (escolhaJogador)
    {
        case 1: // Populacao (Maior Vence)
            printf("Populacao\n");
            printf("%s: %d | %s: %d\n", Cidade1, Populacao1, Cidade2, Populacao2); // Mostrei as cidades e o número de população de cada uma
            
            if (Populacao1 > Populacao2) {
                printf("### VENCEDOR: %s! (Maior Populacao) ###\n", Cidade1);    //Caso algum seja maior que a outra, essa carta ganha, ao contrário irá ser empate
            } else if (Populacao2 > Populacao1) {
                printf("### VENCEDOR: %s! (Maior Populacao) ###\n", Cidade2);
            } else {
                printf("### EMPATE! ###\n");
            }
            break;

        case 2: // Area (Maior Vence)
            printf("Area\n");
            printf("%s: %.2f | %s: %.2f\n", Cidade1, Area1, Cidade2, Area2);  // Mostrei as cidades e o número da Area de cada uma
            
            if (Area1 > Area2) {
                printf("### VENCEDOR: %s! (Maior Area) ###\n", Cidade1);
            } else if (Area2 > Area1) {
                printf("### VENCEDOR: %s! (Maior Area) ###\n", Cidade2);
            } else {
                printf("### EMPATE! ###\n");
            }
            break;

        case 3: // PIB (Maior Vence)
            printf("PIB\n");
            printf("%s: %.2f | %s: %.2f\n", Cidade1, PIB1, Cidade2, PIB2); // Mostrei as cidades e o PIB de cada uma
            
            if (PIB1 > PIB2) {
                printf("### VENCEDOR: %s! (Maior PIB) ###\n", Cidade1);
            } else if (PIB2 > PIB1) {
                printf("### VENCEDOR: %s! (Maior PIB) ###\n", Cidade2);
            } else {
                printf("### EMPATE! ###\n");
            }
            break;
        
        case 4: // Pontos Turisticos (Maior Vence)
            printf("Numero de pontos turisticos\n");
            printf("%s: %d | %s: %d\n", Cidade1, Pontos1, Cidade2, Pontos2); // Mostrei as cidades e o Numero de pontos turisticos de cada uma
            
            if (Pontos1 > Pontos2) {
                printf("### VENCEDOR: %s! (Mais Pontos Turisticos) ###\n", Cidade1);
            } else if (Pontos2 > Pontos1) {
                printf("### VENCEDOR: %s! (Mais Pontos Turisticos) ###\n", Cidade2);
            } else {
                printf("### EMPATE! ###\n");
            }
            break;

        case 5: // Densidade Demografica (Menor Vence)
            printf("Densidade demografica\n");
            printf("%s: %.2f | %s: %.2f\n", Cidade1, Densidade1, Cidade2, Densidade2); // Mostrei as cidades e a Densidade demográfica de cada uma
            
            // REGRA INVERTIDA: Vence o MENOR valor
            if (Densidade1 < Densidade2) {
                printf("### VENCEDOR: %s! (Menor Densidade) ###\n", Cidade1);
            } else if (Densidade2 < Densidade1) {
                printf("### VENCEDOR: %s! (Menor Densidade) ###\n", Cidade2);
            } else {
                printf("### EMPATE! ###\n");
            }
            break;

        default:
            printf("\nOpcao invalida. Reinicie para jogar.\n");
            break;
    }

return 0;
}
