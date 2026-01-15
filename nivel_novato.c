#include <stdio.h>

// Desafio Super Trunfo
// Cadastro de Cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main (){

    // VARIÁVEIS CARTA 1
    char Estado1 [3];
    char CodigoCarta1 [4];
    char Cidade1 [50];
    int Populacao1;
    float AreaKm1;
    float PIB1;
    int NumPontosTuristicos1;
    float Densidade1;
    float PIBPerCapita1;

    // VARIÁVEIS CARTA 2
    char Estado2 [3];
    char CodigoCarta2 [4];
    char Cidade2 [50];
    int Populacao2;
    float AreaKm2;
    float PIB2;
    int NumPontosTuristicos2;
    float Densidade2;
    float PIBPerCapita2;

    // ENTRADA DE DADOS - CARTA 1
    printf ("DESAFIO SUPER TRUNFO - NIVEL NOVATO\n");
    printf ("DADOS CARTA 1\n");

    printf ("Digite o Estado: \n");
    scanf ("%2s", Estado1);

    printf ("Digite o Codigo da Carta: \n");
    scanf (" %3s", CodigoCarta1);

    printf ("Digite o Nome da Cidade: \n");
    scanf (" %49[^\n]", Cidade1);

    printf ("Populacao: \n");
    scanf ("%d", &Populacao1);

    printf ("Area em Km2: \n");
    scanf ("%f", &AreaKm1);

    printf ("PIB: \n");
    scanf ("%f", &PIB1);

    printf ("Numero de Pontos Turisticos: \n");
    scanf ("%d", &NumPontosTuristicos1);


// ENTRADA DE DADOS - CARTA 2

    printf ("DADOS CARTA 2\n");

    printf ("Digite o Estado: \n");
    scanf ("%2s", Estado2);

    printf ("Digite o Codigo da Carta: \n");
    scanf (" %3s", CodigoCarta2);

    printf ("Digite o Nome da Cidade: \n");
    scanf (" %49[^\n]", Cidade2);

    printf ("Populacao: \n");
    scanf ("%d", &Populacao2);

    printf ("Area em Km2: \n");
    scanf ("%f", &AreaKm2);

    printf ("PIB: \n");
    scanf ("%f", &PIB2);

    printf ("Numero de Pontos Turisticos: \n");
    scanf ("%d", &NumPontosTuristicos2);
 

// CÁLCULOS

Densidade1 = Populacao1 / AreaKm1;
Densidade2 = Populacao2 / AreaKm2;

PIBPerCapita1 = PIB1 / AreaKm1;
PIBPerCapita2 = PIB2 / AreaKm2;

// EXIBIÇÃO DAS CARTAS
printf ("\n CARTA 1\n");
printf ("Cidade: %s (%s)\n", Cidade1, Estado1);
printf ("Populacao: %d\n", Populacao1);
printf ("Densidade Populacional: %.2f\n", Densidade1);
printf ("PIB per Capita: %.6f\n", PIBPerCapita1);

printf ("\n CARTA 2\n");
printf ("Cidade: %s (%s)\n", Cidade2, Estado2);
printf ("Populacao: %d\n", Populacao2);
printf ("Densidade Populacional: %.2f\n", Densidade2);
printf ("PIB per Capita: %.6f\n", PIBPerCapita2);

// COMPARAÇÃO

printf ("\n COMPARACAO DE CARTAS (ATRIBUTO x POPULAÇÃO)\n");

if (Populacao1 > Populacao2) {
    printf ("Resultado: Carta 1 (%s) venceu\n", Cidade1);
} else if (Populacao2 > Populacao1) {
    printf ("Resultado: Carta 2 (%s) venceu!\n", Cidade2);
} else {
    printf ("Resultado: Empate!\n");
}

return 0;

}