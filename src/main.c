#include <stdio.h>
#include <stdlib.h>
#include "grid.h"
#include "display.h"
#include "game.h"

int main(void) {
    system("clear"); // Terminal cleanup
    showLoadingBar();
    system("clear");

    int choice;
    char *playerName = malloc(50 * sizeof(char));
    do {
    LAHAUT:
        // system("clear");
        displayLogo();
        printf("\n\n\n");
        printf("\t\t\t\t" ITALIC BLUE "    MENU" RESET "\n");
        printf("\n\n\n");
        printf(BOLD WHITE "\t\t1. JOUER\n\t\t2. REGLE DU JEU ET DESCRIPTION\n\t\t3. QUITTER\n\n");
        printf("\t\t CHOIX :  " RESET);
        scanf("%d", &choice);
        system("clear");
        switch (choice) {
            case 1:
                system("clear");
                printf("\n\n\n");
                displayLogo();
                printf("\n\n\n");
                printf(BOLD GREY "Ton nom :) :  ");
                scanf("%s", playerName);
                printf(RESET "\n\n");
                system("clear");
                initGrid();
                displayGrid();
                play(playerName);
                break;

            case 2:
                system("clear");
                displayLogo();
                FILE *file = fopen("readme.txt", "r");
                if (file == NULL) {
                    file = fopen("README.MD", "r");
                }
                if (file == NULL) {
                    printf("ERREUR,le fichier est introuvable\n");
                    free(playerName);
                    return 0;
                } else {
                    char buffer[100];
                    while (fgets(buffer, sizeof(buffer), file) != NULL) {
                        printf("%s", buffer);
                    }
                }
                printf(GREEN "\n\t\tBonne Chance!" RESET "\n");
                printf("Appuyez sur la touche Entrée pour retourner au Menu\n");
                getchar();
                while (getchar() != '\n');
                fclose(file);
                break;

            case 3:
                system("clear");
                printf("À BIENTOT!!\n\n");
                break;

            default:
                system("clear");
                printf("Veuillez reeffectuer votre choix");
        }
    } while (choice != 3);

    // Free memory
    free(playerName);
    return 0;
}
