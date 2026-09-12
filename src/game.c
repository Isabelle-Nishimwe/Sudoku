#include "game.h"

int verifyInput(char *cellPos) {
    if (strcmp(cellPos, "1") == 0 || strcmp(cellPos, "2") == 0 || strcmp(cellPos, "3") == 0 || strcmp(cellPos, "4") == 0 || strcmp(cellPos, "5") == 0 || strcmp(cellPos, "6") == 0 || strcmp(cellPos, "7") == 0 || strcmp(cellPos, "8") == 0 || strcmp(cellPos, "9") == 0 ||
        strcmp(cellPos, "10") == 0 || strcmp(cellPos, "11") == 0 || strcmp(cellPos, "12") == 0 || strcmp(cellPos, "13") == 0 || strcmp(cellPos, "14") == 0 || strcmp(cellPos, "15") == 0 || strcmp(cellPos, "16") == 0 || strcmp(cellPos, "17") == 0 || strcmp(cellPos, "18") == 0 ||
        strcmp(cellPos, "19") == 0 || strcmp(cellPos, "20") == 0 || strcmp(cellPos, "21") == 0 || strcmp(cellPos, "22") == 0 || strcmp(cellPos, "23") == 0 || strcmp(cellPos, "24") == 0 || strcmp(cellPos, "25") == 0 || strcmp(cellPos, "26") == 0 || strcmp(cellPos, "27") == 0 ||
        strcmp(cellPos, "28") == 0 || strcmp(cellPos, "29") == 0 || strcmp(cellPos, "30") == 0 || strcmp(cellPos, "31") == 0 || strcmp(cellPos, "32") == 0 || strcmp(cellPos, "33") == 0 || strcmp(cellPos, "34") == 0 || strcmp(cellPos, "35") == 0 || strcmp(cellPos, "36") == 0 ||
        strcmp(cellPos, "37") == 0 || strcmp(cellPos, "38") == 0 || strcmp(cellPos, "39") == 0 || strcmp(cellPos, "40") == 0 || strcmp(cellPos, "41") == 0 || strcmp(cellPos, "42") == 0 || strcmp(cellPos, "43") == 0 || strcmp(cellPos, "44") == 0 || strcmp(cellPos, "45") == 0 ||
        strcmp(cellPos, "46") == 0 || strcmp(cellPos, "47") == 0 || strcmp(cellPos, "48") == 0 || strcmp(cellPos, "49") == 0 || strcmp(cellPos, "50") == 0 || strcmp(cellPos, "50") == 0 || strcmp(cellPos, "52") == 0 || strcmp(cellPos, "53") == 0 || strcmp(cellPos, "54") == 0 ||
        strcmp(cellPos, "55") == 0 || strcmp(cellPos, "56") == 0 || strcmp(cellPos, "57") == 0 || strcmp(cellPos, "58") == 0 || strcmp(cellPos, "59") == 0 || strcmp(cellPos, "60") == 0 || strcmp(cellPos, "61") == 0 || strcmp(cellPos, "62") == 0 || strcmp(cellPos, "63") == 0 ||
        strcmp(cellPos, "64") == 0 || strcmp(cellPos, "65") == 0 || strcmp(cellPos, "66") == 0 || strcmp(cellPos, "67") == 0 || strcmp(cellPos, "68") == 0 || strcmp(cellPos, "69") == 0 || strcmp(cellPos, "70") == 0 || strcmp(cellPos, "71") == 0 || strcmp(cellPos, "72") == 0 ||
        strcmp(cellPos, "73") == 0 || strcmp(cellPos, "74") == 0 || strcmp(cellPos, "75") == 0 || strcmp(cellPos, "76") == 0 || strcmp(cellPos, "77") == 0 || strcmp(cellPos, "78") == 0 || strcmp(cellPos, "79") == 0 || strcmp(cellPos, "80") == 0 || strcmp(cellPos, "81") == 0
    )
        return 1;
    else
        return 0;
}

// Fundamental game loop logic
void play(char *playerName) {
    char cellPos[10];
    int number;
    while (verifyGrid() == 0) {
        ICI:
        system("clear");
        displayGrid();
        printf("%s,entres le numero de la case: ", playerName);
        scanf("%s", cellPos);
        if (verifyInput(cellPos) != 1) {
            printf("Numero de case inexistante\n");
            sleep(1);
            system("clear");
            goto ICI;
        }
        printf("Entres le chiffre: ");
        scanf("%d", &number);
        if (number < 0 || number > 9) {
            printf("Entrez un chiffre compris entre 0 et 9\n");
            sleep(1);
            system("clear");
            goto ICI;
        }
         
        // Placement logic for board cells
        if (grid.board[0][0].state == 0 && strcmp(cellPos, "1") == 0) {
            grid.board[0][0].value = number;
            grid.board[0][0].state = 1;
        }
        else if (grid.board[0][1].state == 0 && strcmp(cellPos, "2") == 0) {
            grid.board[0][1].value = number;
            grid.board[0][1].state = 1;
        }
        else if (grid.board[0][2].state == 0 && strcmp(cellPos, "3") == 0) {
            grid.board[0][2].value = number;
            grid.board[0][2].state = 1;
        }
        else if (grid.board[0][3].state == 0 && strcmp(cellPos, "4") == 0) {
            grid.board[0][3].value = number;
            grid.board[0][3].state = 1;
        }
        else if (grid.board[0][4].state == 0 && strcmp(cellPos, "5") == 0) {
            grid.board[0][4].value = number;
            grid.board[0][4].state = 1;
        }
        else if (grid.board[0][5].state == 0 && strcmp(cellPos, "6") == 0) {
            grid.board[0][5].value = number;
            grid.board[0][5].state = 1;
        }
        else if (grid.board[0][6].state == 0 && strcmp(cellPos, "7") == 0) {
            grid.board[0][6].value = number;
            grid.board[0][6].state = 1;
        }
        else if (grid.board[0][7].state == 0 && strcmp(cellPos, "8") == 0) {
            grid.board[0][7].value = number;
            grid.board[0][7].state = 1;
        }
        else if (grid.board[0][8].state == 0 && strcmp(cellPos, "9") == 0) {
            grid.board[0][8].value = number;
            grid.board[0][8].state = 1;
        }
        else if (grid.board[1][0].state == 0 && strcmp(cellPos, "10") == 0) {
            grid.board[1][0].value = number;
            grid.board[1][0].state = 1;
        }
        else if (grid.board[1][1].state == 0 && strcmp(cellPos, "11") == 0) {
            grid.board[1][1].value = number;
            grid.board[1][1].state = 1;
        }
        else if (grid.board[1][2].state == 0 && strcmp(cellPos, "12") == 0) {
            grid.board[1][2].value = number;
            grid.board[1][2].state = 1;
        }
        else if (grid.board[1][3].state == 0 && strcmp(cellPos, "13") == 0) {
            grid.board[1][3].value = number;
            grid.board[1][3].state = 1;
        }
        else if (grid.board[1][4].state == 0 && strcmp(cellPos, "14") == 0) {
            grid.board[1][4].value = number;
            grid.board[1][4].state = 1;
        }
        else if (grid.board[1][5].state == 0 && strcmp(cellPos, "15") == 0) {
            grid.board[1][5].value = number;
            grid.board[1][5].state = 1;
        }
        else if (grid.board[1][6].state == 0 && strcmp(cellPos, "16") == 0) {
            grid.board[1][6].value = number;
            grid.board[1][6].state = 1;
        }
        else if (grid.board[1][7].state == 0 && strcmp(cellPos, "17") == 0) {
            grid.board[1][7].value = number;
            grid.board[1][7].state = 1;
        }
        else if (grid.board[1][8].state == 0 && strcmp(cellPos, "18") == 0) {
            grid.board[1][8].value = number;
            grid.board[1][8].state = 1;
        }
        else if (grid.board[2][0].state == 0 && strcmp(cellPos, "19") == 0) {
            grid.board[2][0].value = number;
            grid.board[2][0].state = 1;
        }
        else if (grid.board[2][1].state == 0 && strcmp(cellPos, "20") == 0) {
            grid.board[2][1].value = number;
            grid.board[2][1].state = 1;
        }
        else if (grid.board[2][2].state == 0 && strcmp(cellPos, "21") == 0) {
            grid.board[2][2].value = number;
            grid.board[2][2].state = 1;
        }
        else if (grid.board[2][3].state == 0 && strcmp(cellPos, "22") == 0) {
            grid.board[2][3].value = number;
            grid.board[2][3].state = 1;
        }
        else if (grid.board[2][4].state == 0 && strcmp(cellPos, "23") == 0) {
            grid.board[2][4].value = number;
            grid.board[2][4].state = 1;
        }
        else if (grid.board[2][5].state == 0 && strcmp(cellPos, "24") == 0) {
            grid.board[2][5].value = number;
            grid.board[2][5].state = 1;
        }
        else if (grid.board[2][6].state == 0 && strcmp(cellPos, "25") == 0) {
            grid.board[2][6].value = number;
            grid.board[2][6].state = 1;
        }
        else if (grid.board[2][7].state == 0 && strcmp(cellPos, "26") == 0) {
            grid.board[2][7].value = number;
            grid.board[2][7].state = 1;
        }
        else if (grid.board[2][8].state == 0 && strcmp(cellPos, "27") == 0) {
            grid.board[2][8].value = number;
            grid.board[2][8].state = 1;
        }
        else if (grid.board[3][0].state == 0 && strcmp(cellPos, "28") == 0) {
            grid.board[3][0].value = number;
            grid.board[3][0].state = 1;
        }
        else if (grid.board[3][1].state == 0 && strcmp(cellPos, "29") == 0) {
            grid.board[3][1].value = number;
            grid.board[3][1].state = 1;
        }
        else if (grid.board[3][2].state == 0 && strcmp(cellPos, "30") == 0) {
            grid.board[3][2].value = number;
            grid.board[3][2].state = 1;
        }
        else if (grid.board[3][3].state == 0 && strcmp(cellPos, "31") == 0) {
            grid.board[3][3].value = number;
            grid.board[3][3].state = 1;
        }
        else if (grid.board[3][4].state == 0 && strcmp(cellPos, "32") == 0) {
            grid.board[3][4].value = number;
            grid.board[3][4].state = 1;
        }
        else if (grid.board[3][5].state == 0 && strcmp(cellPos, "33") == 0) {
            grid.board[3][5].value = number;
            grid.board[3][5].state = 1;
        }
        else if (grid.board[3][6].state == 0 && strcmp(cellPos, "34") == 0) {
            grid.board[3][6].value = number;
            grid.board[3][6].state = 1;
        }
        else if (grid.board[3][7].state == 0 && strcmp(cellPos, "35") == 0) {
            grid.board[3][7].value = number;
            grid.board[3][7].state = 1;
        }
        else if (grid.board[3][8].state == 0 && strcmp(cellPos, "36") == 0) {
            grid.board[3][8].value = number;
            grid.board[3][8].state = 1;
        }
        else if (grid.board[4][0].state == 0 && strcmp(cellPos, "37") == 0) {
            grid.board[4][0].value = number;
            grid.board[4][0].state = 1;
        }
        else if (grid.board[4][1].state == 0 && strcmp(cellPos, "38") == 0) {
            grid.board[4][1].value = number;
            grid.board[4][1].state = 1;
        }
        else if (grid.board[4][2].state == 0 && strcmp(cellPos, "39") == 0) {
            grid.board[4][2].value = number;
            grid.board[4][2].state = 1;
        }
        else if (grid.board[4][3].state == 0 && strcmp(cellPos, "40") == 0) {
            grid.board[4][3].value = number;
            grid.board[4][3].state = 1;
        }
        else if (grid.board[4][4].state == 0 && strcmp(cellPos, "41") == 0) {
            grid.board[4][4].value = number;
            grid.board[4][4].state = 1;
        }
        else if (grid.board[4][5].state == 0 && strcmp(cellPos, "42") == 0) {
            grid.board[4][5].value = number;
            grid.board[4][5].state = 1;
        }
        else if (grid.board[4][6].state == 0 && strcmp(cellPos, "43") == 0) {
            grid.board[4][6].value = number;
            grid.board[4][6].state = 1;
        }
        else if (grid.board[4][7].state == 0 && strcmp(cellPos, "44") == 0) {
            grid.board[4][7].value = number;
            grid.board[4][7].state = 1;
        }
        else if (grid.board[4][8].state == 0 && strcmp(cellPos, "45") == 0) {
            grid.board[4][8].value = number;
            grid.board[4][8].state = 1;
        }
        else if (grid.board[5][0].state == 0 && strcmp(cellPos, "46") == 0) {
            grid.board[5][0].value = number;
            grid.board[5][0].state = 1;
        }
        else if (grid.board[5][1].state == 0 && strcmp(cellPos, "47") == 0) {
            grid.board[5][1].value = number;
            grid.board[5][1].state = 1;
        }
        else if (grid.board[5][2].state == 0 && strcmp(cellPos, "48") == 0) {
            grid.board[5][2].value = number;
            grid.board[5][2].state = 1;
        }
        else if (grid.board[5][3].state == 0 && strcmp(cellPos, "49") == 0) {
            grid.board[5][3].value = number;
            grid.board[5][3].state = 1;
        }
        else if (grid.board[5][4].state == 0 && strcmp(cellPos, "50") == 0) {
            grid.board[5][4].value = number;
            grid.board[5][4].state = 1;
        }
        else if (grid.board[5][5].state == 0 && strcmp(cellPos, "51") == 0) {
            grid.board[5][5].value = number;
            grid.board[5][5].state = 1;
        }
        else if (grid.board[5][6].state == 0 && strcmp(cellPos, "52") == 0) {
            grid.board[5][6].value = number;
            grid.board[5][6].state = 1;
        }
        else if (grid.board[5][7].state == 0 && strcmp(cellPos, "53") == 0) {
            grid.board[5][7].value = number;
            grid.board[5][7].state = 1;
        }
        else if (grid.board[5][8].state == 0 && strcmp(cellPos, "54") == 0) {
            grid.board[5][8].value = number;
            grid.board[5][8].state = 1;
        }
        else if (grid.board[6][0].state == 0 && strcmp(cellPos, "55") == 0) {
            grid.board[6][0].value = number;
            grid.board[6][0].state = 1;
        }
        else if (grid.board[6][1].state == 0 && strcmp(cellPos, "56") == 0) {
            grid.board[6][1].value = number;
            grid.board[6][1].state = 1;
        }
        else if (grid.board[6][2].state == 0 && strcmp(cellPos, "57") == 0) {
            grid.board[6][2].value = number;
            grid.board[6][2].state = 1;
        }
        else if (grid.board[6][3].state == 0 && strcmp(cellPos, "58") == 0) {
            grid.board[6][3].value = number;
            grid.board[6][3].state = 1;
        }
        else if (grid.board[6][4].state == 0 && strcmp(cellPos, "59") == 0) {
            grid.board[6][4].value = number;
            grid.board[6][4].state = 1;
        }
        else if (grid.board[6][5].state == 0 && strcmp(cellPos, "60") == 0) {
            grid.board[6][5].value = number;
            grid.board[6][5].state = 1;
        }
        else if (grid.board[6][6].state == 0 && strcmp(cellPos, "61") == 0) {
            grid.board[6][6].value = number;
            grid.board[6][6].state = 1;
        }
        else if (grid.board[6][7].state == 0 && strcmp(cellPos, "62") == 0) {
            grid.board[6][7].value = number;
            grid.board[6][7].state = 1;
        }
        else if (grid.board[6][8].state == 0 && strcmp(cellPos, "63") == 0) {
            grid.board[6][8].value = number;
            grid.board[6][8].state = 1;
        }
        else if (grid.board[7][0].state == 0 && strcmp(cellPos, "64") == 0) {
            grid.board[7][0].value = number;
            grid.board[7][0].state = 1;
        }
        else if (grid.board[7][1].state == 0 && strcmp(cellPos, "65") == 0) {
            grid.board[7][1].value = number;
            grid.board[7][1].state = 1;
        }
        else if (grid.board[7][2].state == 0 && strcmp(cellPos, "66") == 0) {
            grid.board[7][2].value = number;
            grid.board[7][2].state = 1;
        }
        else if (grid.board[7][3].state == 0 && strcmp(cellPos, "67") == 0) {
            grid.board[7][3].value = number;
            grid.board[7][3].state = 1;
        }
        else if (grid.board[7][4].state == 0 && strcmp(cellPos, "68") == 0) {
            grid.board[7][4].value = number;
            grid.board[7][4].state = 1;
        }
        else if (grid.board[7][5].state == 0 && strcmp(cellPos, "69") == 0) {
            grid.board[7][5].value = number;
            grid.board[7][5].state = 1;
        }
        else if (grid.board[7][6].state == 0 && strcmp(cellPos, "70") == 0) {
            grid.board[7][6].value = number;
            grid.board[7][6].state = 1;
        }
        else if (grid.board[7][7].state == 0 && strcmp(cellPos, "71") == 0) {
            grid.board[7][7].value = number;
            grid.board[7][7].state = 1;
        }
        else if (grid.board[7][8].state == 0 && strcmp(cellPos, "72") == 0) {
            grid.board[7][8].value = number;
            grid.board[7][8].state = 1;
        }
        else if (grid.board[8][0].state == 0 && strcmp(cellPos, "73") == 0) {
            grid.board[8][0].value = number;
            grid.board[8][0].state = 1;
        }
        else if (grid.board[8][1].state == 0 && strcmp(cellPos, "74") == 0) {
            grid.board[8][1].value = number;
            grid.board[8][1].state = 1;
        }
        else if (grid.board[8][2].state == 0 && strcmp(cellPos, "75") == 0) {
            grid.board[8][2].value = number;
            grid.board[8][2].state = 1;
        }
        else if (grid.board[8][3].state == 0 && strcmp(cellPos, "76") == 0) {
            grid.board[8][3].value = number;
            grid.board[8][3].state = 1;
        }
        else if (grid.board[8][4].state == 0 && strcmp(cellPos, "77") == 0) {
            grid.board[8][4].value = number;
            grid.board[8][4].state = 1;
        }
        else if (grid.board[8][5].state == 0 && strcmp(cellPos, "78") == 0) {
            grid.board[8][5].value = number;
            grid.board[8][5].state = 1;
        }
        else if (grid.board[8][6].state == 0 && strcmp(cellPos, "79") == 0) {
            grid.board[8][6].value = number;
            grid.board[8][6].state = 1;
        }
        else if (grid.board[8][7].state == 0 && strcmp(cellPos, "80") == 0) {
            grid.board[8][7].value = number;
            grid.board[8][7].state = 1;
        }
        else if (grid.board[8][8].state == 0 && strcmp(cellPos, "81") == 0) {
            grid.board[8][8].value = number;
            grid.board[8][8].state = 1;
        }
        else {
            printf("Case occupée ou numéro invalide\n");
            sleep(1);
            system("clear");
            goto ICI;
        }

        int t;
        t = checkVictory();
        if (t == 1) {
            system("clear");
            printf("\n\n" WHITE_BG YELLOW "%s ,Vous avez perdu la partie doublon detecter en ligne !" RESET "\n", playerName);
            displayGrid();
            initGrid();
            printf("\n\nAppuyez sur Entree pour continuer\n");
            getchar();
            while (getchar() != '\n');
            break;
        }
        else if (t == 2) {
            system("clear");
            printf("\n\n" WHITE_BG YELLOW "%s ,Vous avez perdue la partie doublon detecter en colonne !" RESET "\n", playerName);
            displayGrid();
            printf("\n\nAppuyez sur Entree pour continuer\n");
            getchar();
            while (getchar() != '\n');
            initGrid();
            break;
        }
        else if (t == 3) {
            system("clear");
            printf("\n\n" WHITE_BG YELLOW "%s ,Vous avez perdue la partie doublon detecter en 1er quadrant !" RESET "\n", playerName);
            displayGrid();
            initGrid();
            printf("\n\nAppuyez sur Entree pour continuer\n");
            getchar();
            while (getchar() != '\n');
            break;
        }
        else if (t == 4) {
            system("clear");
            printf("\n\n" WHITE_BG YELLOW "%s ,Vous avez perdue la partie doublon detecter en 2eme cadrant !" RESET "\n", playerName);
            displayGrid();
            initGrid();
            printf("\n\nAppuyez sur Entree pour continuer\n");
            getchar();
            while (getchar() != '\n');
            break;
        }
        else if (t == 5) {
            system("clear");
            printf("\n\n" WHITE_BG YELLOW "%s ,Vous avez perdue la partie doublon detecter en 3eme cadrant !" RESET "\n", playerName);
            displayGrid();
            initGrid();
            printf("\n\nAppuyez sur Entree pour continuer\n");
            getchar();
            while (getchar() != '\n');
            break;
        }
        else if (t == 6) {
            system("clear");
            printf("\n\n" WHITE_BG YELLOW "%s ,Vous avez perdue la partie doublon detecter en 4eme cadrant !" RESET "\n", playerName);
            displayGrid();
            initGrid();
            printf("\n\nAppuyez sur Entree pour continuer\n");
            getchar();
            while (getchar() != '\n');
            break;
        }
        else if (t == 7) {
            system("clear");
            printf("\n\n" WHITE_BG YELLOW "%s ,Vous avez perdue la partie doublon detecter en 5eme cadrant !" RESET "\n", playerName);
            displayGrid();
            initGrid();
            printf("\n\nAppuyez sur Entree pour continuer\n");
            getchar();
            while (getchar() != '\n');
            break;
        }
        else if (t == 8) {
            system("clear");
            printf("\n\n" WHITE_BG YELLOW "%s ,Vous avez perdue la partie doublon detecter en 6eme cadrant !" RESET "\n", playerName);
            displayGrid();
            initGrid();
            printf("\n\nAppuyez sur Entree pour continuer\n");
            getchar();
            while (getchar() != '\n');
            break;
        }
        else if (t == 9) {
            system("clear");
            printf("\n\n" WHITE_BG YELLOW "%s ,Vous avez perdue la partie doublon detecter en 7eme cadrant !" RESET "\n", playerName);
            displayGrid();
            initGrid();
            printf("\n\nAppuyez sur Entree pour continuer\n");
            getchar();
            while (getchar() != '\n');
            break;
        }
        else if (t == 10) {
            system("clear");
            printf("\n\n" WHITE_BG YELLOW "%s ,Vous avez perdue la partie doublon detecter en 8eme cadrant !" RESET "\n", playerName);
            displayGrid();
            initGrid();
            printf("\n\nAppuyez sur Entree pour continuer\n");
            getchar();
            while (getchar() != '\n');
            break;
        }
        else if (t == 11) {
            system("clear");
            printf("\n\n" WHITE_BG YELLOW "%s ,Vous avez perdue la partie doublon detecter en 9eme cadrant !" RESET "\n", playerName);
            displayGrid();
            initGrid();
            printf("\n\nAppuyez sur Entree pour continuer\n");
            getchar();
            while (getchar() != '\n');
            break;
        }
    }

    printf("\n\n" BOLD BLACK_BG " %s , Termine!!" RESET "\n", playerName);
}
