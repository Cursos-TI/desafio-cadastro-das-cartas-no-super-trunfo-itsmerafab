#include <stdio.h>
#include <string.h>

int main (){

char estado1, estado2;
char codigo1[4], codigo2[4];
char cidade1[20], cidade2[20];
int populacao1, populacao2;
float area1, area2, pib1, pib2;
int turisticos1, turisticos2;

//informações da carta 1
printf ("Informaçoes da carta 1: \n");

printf ("\nPrimeira letra do estado da carta 1: \n");
scanf (" %c", &estado1);

printf ("Código da carta 1: \n");
scanf ("%3s", codigo1);

printf ("Nome da cidade da carta 1: \n");
scanf(" %[^\n]", cidade1);

printf ("População da carta 1: \n");
scanf ("%d", &populacao1);
 
printf ("Area (em km²) da carta 1: \n");
scanf ("%f", &area1);

printf ("PIB da carta 1: \n");
scanf ("%f", &pib1);

printf ("Número de pontos turísticos na cidade da carta 1: \n");
scanf ("%d", &turisticos1);

//informaçoes carta 2

printf ("\nInformaçoes da carta 2: \n");

printf ("Primeira letra do estado da carta 2: \n");
scanf (" %c", &estado2);

printf ("Código da carta 2: \n");
scanf ("%3s", codigo2);

printf ("Nome da cidade da carta 2: \n");
scanf(" %[^\n]", cidade2);

printf ("População da carta 2: \n");
scanf ("%d", &populacao2);
 
printf ("Area (em km²) da carta 2: \n");
scanf ("%f", &area2);

printf ("PIB da carta 2: \n");
scanf ("%f", &pib2);

printf ("Número de pontos turísticos na cidade da carta 2: \n");
scanf ("%d", &turisticos2);
 
//resultado das cartas

printf ("\n-------- Resultado das cartas -------- \n");

printf ("\nCarta 1 \n");
printf ("Estado: %c\n", estado1 );
printf ("Codigo %s\n", codigo1 );
printf ("Cidade %s\n", cidade1 );
printf ("População %d\n", populacao1 );
printf ("Área: %.2fkm²\n", area1 );
printf ("PIB: %.2f\n", pib1);
printf ("Pontos turísticos: %d\n", turisticos1);

printf ("\nCarta 2 \n");
printf ("Estado: %c\n", estado2);
printf ("Codigo %s\n", codigo2);
printf ("Cidade %s\n", cidade2);
printf ("População %d\n", populacao2);
printf ("Área: %.2fkm²\n", area2);
printf ("PIB: %.2f\n", pib2);
printf ("Pontos turísticos: %d\n", turisticos2);



return 0;

}