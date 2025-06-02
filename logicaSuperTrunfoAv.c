#include <stdio.h>

int main() {
    // Dados da carta 1
    char Estado1;
    char Codigo1[4];
    char Cidade1[50];
    int Populacao1;
    float Area1;
    float Pib1;
    int PontosT1;
    float Densidade1;
    float PerCapita1;

    // Dados da carta 2
    char Estado2;
    char Codigo2[4];
    char Cidade2[50];
    int Populacao2;
    float Area2;
    float Pib2;
    int PontosT2;
    float Densidade2;
    float PerCapita2;

    int opcao;

    // Entrada da carta 1
    printf("Carta 1\n");
    printf("Estado: \n");
    scanf(" %c", &Estado1);
    printf("Código: \n");
    scanf("%s", Codigo1);
    printf("Cidade: \n");
    scanf(" %[^\n]", Cidade1);
    printf("População: \n");
    scanf("%d", &Populacao1);
    printf("Área: \n");
    scanf("%f", &Area1);
    printf("PIB: \n");
    scanf("%f", &Pib1);
    printf("Pontos Turísticos: \n");
    scanf("%d", &PontosT1);

    Densidade1 = Populacao1 / Area1;
    PerCapita1 = Pib1 / Populacao1;

    // Entrada da carta 2
    printf("Carta 2\n");
    printf("Estado: \n");
    scanf(" %c", &Estado2);
    printf("Código:\n");
    scanf("%s", Codigo2);
    printf("Cidade: \n");
    scanf(" %[^\n]", Cidade2);
    printf("População: \n");
    scanf("%d", &Populacao2);
    printf("Área: \n");
    scanf("%f", &Area2);
    printf("PIB: \n");
    scanf("%f", &Pib2);
    printf("Pontos Turísticos: \n");
    scanf("%d", &PontosT2);

    Densidade2 = Populacao2 / Area2;
    PerCapita2 = Pib2 / Populacao2;

    // Menu 
    printf("Escolha uma opção para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional (Menor Valor Vence)\n");
    printf("6 - PIB Per Capita\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:
            if (Populacao1 > Populacao2)
            {
                printf("Carta 1 venceu!\n");
            }
            else if (Populacao2 > Populacao1)
            {
                printf("Carta 2 venceu!\n");
            }
            else
            {
                printf("Empate!\n");
            }
            break;

        case 2:
            if (Area1 > Area2)
            {
                printf("Carta 1 venceu!\n");
            }
            else if (Area2 > Area1)
            {
                printf("Carta 2 venceu!\n");
            }
            else
            {
                printf("Empate!\n");
            }
            break;

        case 3:
            if (Pib1 > Pib2)
            {
                printf("Carta 1 venceu!\n");
            }
            else if (Pib2 > Pib1)
            {
                printf("Carta 2 venceu!\n");
            }
            else
            {
                printf("Empate!\n");
            }
            break;

        case 4:
            if (PontosT1 > PontosT2)
            {
                printf("Carta 1 venceu!\n");
            }
            else if (PontosT2 > PontosT1)
            {
                printf("Carta 2 venceu!\n");
            }
            else
            {
                printf("Empate!\n");
            }
            break;

        case 5:
            if (Densidade1 < Densidade2)
            {
                printf("Carta 1 venceu!\n");
            }
            else if (Densidade2 < Densidade1)
            {
                printf("Carta 2 venceu!\n");
            }
            else
            {
                printf("Empate!\n");
            }
            break;

        case 6:
            if (PerCapita1 > PerCapita2)
            {
                printf("Carta 1 venceu!\n");
            }
            else if (PerCapita2 > PerCapita1)
            {
                printf("Carta 2 venceu!\n");
            }
            else
            {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}