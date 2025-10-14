#include <stdio.h>

// COLOQUEI PALAVRAS SEM ACENTO PORQUE MEU TERMINAL NÃO ACEITA E APARECE NÚMEROS E CARACTERES ALEATÓRIOS EM VEZ, NÃO SEI PORQUE...
 // Variáveis da Carta 1 (São Paulo) //
int main(){
   char Estado1 = 'A'; // Estado
   char Codigo1[] = "A01"; // Código da Carta 1
   char Cidade1[] = "Sao Paulo"; // Nome da Cidade
   int Populacao1 = 12325000; // Sua População
   float Area1 =  1521.11; // Sua Área
   float PIB1 = 699.28; // PIB
   int Pontos1 = 50; // Números de Pontos Turísticos

  // Variáveis da Carta 2 (Rio de Janeiro) //
   char Estado2 = 'B'; // Estado
   char Codigo2[] = "B02"; // Código da Carta 2
   char Cidade2[] = "Rio de Janeiro"; // Nome da Cidade
   int Populacao2 = 6748000; // Sua População
   float Area2 =  1200.25; //  Área
   float PIB2 = 300.50; // PIB
   int Pontos2 = 30; //  Números de pontos Turísticos

printf("---------------------------------------\n"); // Coloquei isso pra ajudar a separar as cartas uma da outra
   printf("Carta 1:\n"); // Primeira Carta
   printf("Estado: %c\n", Estado1); // Esse printf seleciona o char e depois mostra qual Letra está nela
   printf("Codigo: %s\n", Codigo1); //Esse printf seleciona a String e depois mostra ela
   printf("Nome da Cidade: %s\n", Cidade1); // Esse printf seleciona a String e depois mostra ela
   printf("Populacao: %d\n", Populacao1); // Esse printf seleciona o número Inteiro, pode ser %d ou %i, e depois mostra ele
   printf("Area em KM: %f\n", Area1); // Esse printf seleciona o número flutuante (decimais) e depois mostra ele
   printf("PIB (Bilhoes): %f\n", PIB1); // Esse printf seleciona o número flutuante e depois mostra ele
   printf("Numeros de Pontos Turisticos: %d\n", Pontos1); // Esse printf seleciona o Número inteiro e depois mostra ela
printf("---------------------------------------\n"); 

printf("Carta 2:\n"); //Segunda Carta
   printf("Estado: %c\n", Estado2); 
   printf("Codigo: %s\n", Codigo2);
   printf("Nome da Cidade: %s\n", Cidade2);
   printf("Populacao: %d\n", Populacao2);
   printf("Area em KM: %f\n", Area2);
   printf("PIB (Bilhoes): %f\n", PIB2);
   printf("Numeros de Pontos Turisticos: %d\n", Pontos2);
printf("---------------------------------------\n");
// A segunda carta segue o mesmo padrão da Primeira Carta
    return 0;
}








 
