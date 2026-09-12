#include "display.h"

// Function to display the game board grid
void displayGrid(void) {
    printf(BOLD ITALIC GREY "\t\t\t\t\t\t C'EST PARTI!!!   \n" RESET);
    printf("\n");

    // Row 0 (cells 1 to 9)
    printf(ITALIC GREY "\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" RESET, 1, 2, 3, 4, 5, 6, 7, 8, 9);
    printf(BOLD PURPLE "\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" RESET,
        grid.board[0][0].value, grid.board[0][1].value, grid.board[0][2].value,
        grid.board[0][3].value, grid.board[0][4].value, grid.board[0][5].value,
        grid.board[0][6].value, grid.board[0][7].value, grid.board[0][8].value);

    // Row 1 (cells 10 to 18)
    printf(ITALIC GREY "\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" RESET, 10, 11, 12, 13, 14, 15, 16, 17, 18);
    printf(BOLD PURPLE "\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" RESET,
        grid.board[1][0].value, grid.board[1][1].value, grid.board[1][2].value,
        grid.board[1][3].value, grid.board[1][4].value, grid.board[1][5].value,
        grid.board[1][6].value, grid.board[1][7].value, grid.board[1][8].value);

    // Row 2 (cells 19 to 27)
    printf(ITALIC GREY "\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" RESET, 19, 20, 21, 22, 23, 24, 25, 26, 27);
    printf(BOLD PURPLE "\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" RESET,
        grid.board[2][0].value, grid.board[2][1].value, grid.board[2][2].value,
        grid.board[2][3].value, grid.board[2][4].value, grid.board[2][5].value,
        grid.board[2][6].value, grid.board[2][7].value, grid.board[2][8].value);

    printf(GREY "\t\t___________________________________________________________\n" RESET);

    // Row 3 (cells 28 to 36)
    printf(ITALIC GREY "\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" RESET, 28, 29, 30, 31, 32, 33, 34, 35, 36);
    printf(BOLD PURPLE "\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" RESET,
        grid.board[3][0].value, grid.board[3][1].value, grid.board[3][2].value,
        grid.board[3][3].value, grid.board[3][4].value, grid.board[3][5].value,
        grid.board[3][6].value, grid.board[3][7].value, grid.board[3][8].value);

    // Row 4 (cells 37 to 45)
    printf(ITALIC GREY "\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" RESET, 37, 38, 39, 40, 41, 42, 43, 44, 45);
    printf(BOLD PURPLE "\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" RESET,
        grid.board[4][0].value, grid.board[4][1].value, grid.board[4][2].value,
        grid.board[4][3].value, grid.board[4][4].value, grid.board[4][5].value,
        grid.board[4][6].value, grid.board[4][7].value, grid.board[4][8].value);

    // Row 5 (cells 46 to 54)
    printf(ITALIC GREY "\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" RESET, 46, 47, 48, 49, 50, 51, 52, 53, 54);
    printf(BOLD PURPLE "\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" RESET,
        grid.board[5][0].value, grid.board[5][1].value, grid.board[5][2].value,
        grid.board[5][3].value, grid.board[5][4].value, grid.board[5][5].value,
        grid.board[5][6].value, grid.board[5][7].value, grid.board[5][8].value);

    printf(GREY "\t\t___________________________________________________________\n" RESET);

    // Row 6 (cells 55 to 63)
    printf(ITALIC GREY "\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" RESET, 55, 56, 57, 58, 59, 60, 61, 62, 63);
    printf(BOLD PURPLE "\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" RESET,
        grid.board[6][0].value, grid.board[6][1].value, grid.board[6][2].value,
        grid.board[6][3].value, grid.board[6][4].value, grid.board[6][5].value,
        grid.board[6][6].value, grid.board[6][7].value, grid.board[6][8].value);

    // Row 7 (cells 64 to 72)
    printf(ITALIC GREY "\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" RESET, 64, 65, 66, 67, 68, 69, 70, 71, 72);
    printf(BOLD PURPLE "\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" RESET,
        grid.board[7][0].value, grid.board[7][1].value, grid.board[7][2].value,
        grid.board[7][3].value, grid.board[7][4].value, grid.board[7][5].value,
        grid.board[7][6].value, grid.board[7][7].value, grid.board[7][8].value);

    // Row 8 (cells 73 to 81)
    printf(ITALIC GREY "\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" RESET, 73, 74, 75, 76, 77, 78, 79, 80, 81);
    printf(BOLD PURPLE "\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" RESET,
        grid.board[8][0].value, grid.board[8][1].value, grid.board[8][2].value,
        grid.board[8][3].value, grid.board[8][4].value, grid.board[8][5].value,
        grid.board[8][6].value, grid.board[8][7].value, grid.board[8][8].value);

    printf("\n\n\n");
}

// Function to display the loading bar animation
void showLoadingBar(void) {
    char loadingStr[400] = BOLD BLUE "Chargement en cours[" RESET;
    for (int i = 0; i < 6; i++) {
        if (i == 5) {
            strcat(loadingStr, BOLD BLUE "]" RESET);
        } else {
            strcat(loadingStr, WHITE_BG "  " RESET " ");
        }

        printf(BOLD RED "\t\t\t" BLINK_SLOW " BIENVENUE " RESET "\n\n\n");
        printf("\n");
        printf("%s", loadingStr);
        printf("\n");
        sleep(1);
        system("clear");
        fflush(stdout); // Clear output buffer
    }
    printf("\n");
}

// Function to display the Sudoku title logo banner
void displayLogo(void) {
    printf(BOLD WHITE_BG "\t\t\t                                " RESET "\n");
    printf("\t\t\t\t" BOLD PURPLE "   SUDOKU" RESET "\n");
    printf(BOLD WHITE_BG "\t\t\t                                " RESET "\n");
}
