#include <stdio.h>

// DESAFIO SUPER TRUNFO AVENTUREIRO
// Objetivo: Criar Menus, utilizar if-else, swicth e deaful no switch

int main () {

// VARIÁVEIS CARTA 1
char Cidade1[50] = "São Paulo";
int Populacao1 = 12300000;
float Area1 = 1521.11;
float Pib1 = 699.28;
int Pontos1 = 50;
float Densidade1;

// VARIÁVEIS CARTA 2
char Cidade2[50] = "Rio de Janeiro";
int Populacao2 = 6000000;
float Area2 = 1200.25;
float Pib2 = 300.50;
int Pontos2 = 30;
float Densidade2;

//Cáculo de densidade demográfica
Densidade1 = Populacao1 / Area1;
Densidade2 = Populacao2 / Area2;

int opcao;

//MENU
printf ("\n SUPER TRUNFO NÍVEL AVENTUREIRO \n");
printf ("Escolha o atributo para comparacao: \n");
printf ("1 - Populacao\n");
printf ("2 - Area\n");
printf ("3 - PIB\n");
printf ("4 - Pontos Turisticos\n");
printf ("5 - Densidade Demografica\n");
printf ("Opcao: \n");
scanf ("%d", &opcao);

printf ("\n Comparação entre %s e %s\n", Cidade1, Cidade2);

switch (opcao) {

    case 1: // População
        printf ("Atributo: Populacao\n");
        printf ("%s: %d\n", Cidade1, Populacao1);
        printf ("%s: %d\n", Cidade2, Populacao2);

        if (Populacao1 > Populacao2)
            printf ("Vencedora: %s\n", Cidade1);
        else if (Populacao2 > Populacao1)
            printf ("Vencedora: %s\n", Cidade2);
        else
            printf ("Empate!\n");
        break;

    case 2: // Área
        printf ("Atributo: Area\n");
        printf ("%s: %.2f km2\n", Cidade1, Area1);
        printf ("%s: %.2f km2\n", Cidade2, Area2);

        if (Area1 > Area2)
            printf ("Vencedora: %s\n", Cidade1);
        else if (Area2 > Area1)
            printf ("Vencedora: %s\n", Cidade2);
        else
            printf ("Empate!\n");
        break;

    case 3: // PIB
        printf ("Atributo: PIB\n");
        printf ("%s: %.2f \n", Cidade1, Pib1);
        printf ("%s: %.2f \n", Cidade2, Pib2);

        if (Pib1 > Pib2)
            printf ("Vencedora: %s\n", Cidade1);
        else if (Area2 > Area1)
            printf ("Vencedora: %s\n", Cidade2);
        else
            printf ("Empate!\n");
        break;    

    case 4: // Pontos Turísticos
        printf ("Atributo: Pontos Turisticos\n");
        printf ("%s: %d \n", Cidade1, Pontos1);
        printf ("%s: %d \n", Cidade2, Pontos2);

        if (Pontos1 > Pontos2)
            printf ("Vencedora: %s\n", Cidade1);
        else if (Pontos2 > Pontos1)
            printf ("Vencedora: %s\n", Cidade2);
        else
            printf ("Empate!\n");
        break;    

    case 5: // Densidade Demográfica (regra invertida)
        printf ("Atributo: Densidade Demografica\n");
        printf ("%s: %.2f \n", Cidade1, Densidade1);
        printf ("%s: %.2f \n", Cidade2, Densidade2);

        if (Densidade1 < Densidade2)
            printf ("Vencedora: %s\n", Cidade1);
        else if (Densidade2 < Densidade1)
            printf ("Vencedora: %s\n", Cidade2);
        else
            printf ("Empate!\n");
        break;   


        break;

    default:
        printf ("Opcao invalida\n");

}

    return 0;

} 

