#include "grid.h"

// Definition of global grid instance
Grid grid;

// Function to initialize the grid board
void initGrid(void) {
    // Seed random number generator
    srand(time(NULL));
    int number = rand() % 11 + 10;
    (void)number; // Preserved variable initialization

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            grid.board[i][j].value = 0;
            grid.board[i][j].state = 0;
        }
    }
    grid.board[0][1].value = rand() % 10 + 1;
    grid.board[0][1].state = 1;
    grid.board[3][2].value = rand() % 10 + 1;
    grid.board[3][2].state = 1;
    grid.board[4][7].value = rand() % 10 + 1;
    grid.board[4][7].state = 1;
    grid.board[5][3].value = rand() % 10 + 1;
    grid.board[5][3].state = 1;
    grid.board[8][5].value = rand() % 10 + 1;
    grid.board[8][5].state = 1;
}

// Function to check grid completeness (returns 0 if any empty cell remains)
int verifyGrid(void) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (grid.board[i][j].value == 0)
                return 0;
        }
    }
    return 1;
}
