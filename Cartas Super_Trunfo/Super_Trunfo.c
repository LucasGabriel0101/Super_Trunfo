#include <stdio.h>

int main(){
   char Estado1 = 'A';
   char Codigo1[] = "A01";
   char Cidade1[] = "Sao Paulo";
   int Populacao1 = 12325000;
   float Area1 =  1521.11;
   float PIB1 = 699.28;
   int Pontos1 = 50;

   char Estado2 = 'B';
   char Codigo2[] = "B02";
   char Cidade2[] = "Rio de Janeiro";
   int Populacao2 = 6748000;
   float Area2 =  1200.25;
   float PIB2 = 300.50;
   int Pontos2 = 30;

printf("---------------------------------------\n");
   printf("Carta 1:\n");
   printf("Estado: %c\n", Estado1); 
   printf("Codigo: %s\n", Codigo1);
   printf("Nome da Cidade: %s\n", Cidade1);
   printf("Populacao: %d\n", Populacao1);
   printf("Area em KM: %f\n", Area1);
   printf("PIB (Bilhoes): %f\n", PIB1);
   printf("Numeros de Pontos Turisticos: %d\n", Pontos1);
printf("---------------------------------------\n");

printf("Carta 2:\n");
   printf("Estado: %c\n", Estado2); 
   printf("Codigo: %s\n", Codigo2);
   printf("Nome da Cidade: %s\n", Cidade2);
   printf("Populacao: %d\n", Populacao2);
   printf("Area em KM: %f\n", Area2);
   printf("PIB (Bilhoes): %f\n", PIB2);
   printf("Numeros de Pontos Turisticos: %d\n", Pontos2);
printf("---------------------------------------\n");

    return 0;
}





