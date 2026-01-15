#include <stdio.h>

// DESAFIO SUPER TRUNFO MESTRE
// Objetivo: Escolha de 2 atributos, Comparação com múltiplos atributos, 
//           Soma dos atributos, tratamento de Empate, Menus Dinâmicos, Exibição clara do resultado.

int main (){

    // CARTAS PRÉ-CADASTRADAS
    char Cidade1[50] = "Sao Paulo";
    char Cidade2[50] = "Rio de Janeiro";

    int Populacao1 = 12300000;
    int Populacao2 = 6000000;

    float Area1 = 1521.00;
    float Area2 = 1200.25;

    float Pib1 = 699.28;
    float Pib2 = 300.50;

    int Pontos1 = 50;
    int Pontos2 = 30;

    float Densidade1 = Populacao1 / Area1;
    float Densidade2 = Populacao2 / Area2;

    // VARIÁVEIS DE CONTROLE

    int Atributo1, Atributo2;
    float Soma1 = 0, Soma2 = 0;

    float v1_c1 = 0, v1_c2 = 0;
    float v2_c1 = 0, v2_c2 = 0;

    int RegraInvertida1 = 0;
    int RegraInvertida2 = 0;


    // MENU DO PRIMEIRO ATRIBUTO

    printf ("\n SUPER TRUNFO NÍVEL MESTRE\n");
    printf ("Escolha o PRIMEIRO atributo: \n");
    printf ("1 - Populacao\n");
    printf ("2 - Area\n");
    printf ("3 - PIB \n");
    printf ("4 - Pontos Turisticos\n");
    printf ("5 - Densidade Demografica\n");
    printf ("Opcao: ");
    scanf ("%d", &Atributo1);

    switch (Atributo1) {

        case 1:
        v1_c1 = Populacao1;
        v1_c2 = Populacao2;
        break;

        case 2:
        v1_c1 = Area1;
        v1_c2 = Area2;
        break;

        case 3:
        v1_c1 = Pib1;
        v1_c2 = Pib2;
        break;

        case 4:
        v1_c1 = Pontos1;
        v1_c2 = Pontos2;
        break;

        case 5:
        v1_c1 = Densidade1;
        v1_c2 = Densidade2;
        RegraInvertida1 = 1;
        break;

        default:
        printf ("Opcao Invalida!\n");
        return 0;
        
    } 

    // MENU DINÂNICO DO SEGUNDO ATRIBUTO

    printf ("Escolha o SEGUNDO atributo (Diferente do Primeiro): \n");


    if (Atributo1 != 1) printf ("1 - Populacao\n");
    if (Atributo1 != 2) printf ("2 - Area\n");
    if (Atributo1 != 3) printf ("3 - PIB \n");
    if (Atributo1 != 4) printf ("4 - Pontos Turisticos\n");
    if (Atributo1 != 5) printf ("5 - Densidade Demografica\n");

    printf ("Opcao: ");
    scanf ("%d", &Atributo2);

    if (Atributo2 == Atributo1){
        printf ("Nao e permitido escolher o mesmo atributo duas vezes\n");
        return 0;
    }

    switch (Atributo2) {

        case 1:
        v2_c1 = Populacao1;
        v2_c2 = Populacao2;
        break;

        case 2:
        v2_c1 = Area1;
        v2_c2 = Area2;
        break;

        case 3:
        v2_c1 = Pib1;
        v2_c2 = Pib2;
        break;

        case 4:
        v2_c1 = Pontos1;
        v2_c2 = Pontos2;
        break;

        case 5:
        v2_c1 = Densidade1;
        v2_c2 = Densidade2;
        RegraInvertida2 = 1;
        break;

        default:
        printf ("Opcao Invalida!\n");
        return 0;
        
    }     

    // COMPARAÇÃO DO ATRIBUTO 1
    if (!RegraInvertida1) {
        if (v1_c1 > v1_c2) Soma1+= v1_c1;
        else if (v1_c2 > v1_c1) Soma2 += v1_c2;
    } else {
        if (v1_c1 < v1_c2) Soma1 += v1_c1; 
        else if (v1_c2 < v1_c1) Soma2 += v1_c2;
    }


    // COMPARAÇÃO DO ATRIBUTO 2
    if (!RegraInvertida2) {
        if (v2_c1 > v2_c2) Soma1+= v2_c1;
        else if (v2_c2 > v2_c1) Soma2 += v2_c2;
    } else {
        if (v2_c1 < v2_c2) Soma1 += v2_c1; 
        else if (v2_c2 < v2_c1) Soma2 += v2_c2;  
    }

    // RESULTADO FINAL
    printf ("\n RESULTADO FINAL\n");
    printf ("%s - Soma dos atributos: %.2f\n", Cidade1, Soma1);
    printf ("%s - Soma dos atributos: %.2f\n", Cidade2, Soma2);

if (Soma1 == Soma2)
    printf ("Resultado: Empate!\n");

else
    printf ("Vencedora: %s\n", (Soma1 > Soma2) ? Cidade1 : Cidade2);

return 0;    


}