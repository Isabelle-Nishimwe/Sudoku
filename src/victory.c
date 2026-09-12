#include "victory.h"

// Function to evaluate duplicate numbers in rows, columns, and 3x3 blocks
int checkVictory(void) {
    // Check rows
    for (int k = 0; k < 9; k++) {
        for (int i = 0; i < 9; i++) {
            for (int j = i + 1; j < 9; j++) {
                if (grid.board[k][i].value == grid.board[k][j].value
                    && grid.board[k][i].value != 0
                    && grid.board[k][j].value != 0)
                    return 1;
            }
        }
    }

    // Check columns
    for (int k = 0; k < 9; k++) {
        for (int i = 0; i < 9; i++) {
            for (int j = i + 1; j < 9; j++) {
                if (grid.board[i][k].value == grid.board[j][k].value
                    && grid.board[i][k].value != 0
                    && grid.board[j][k].value != 0)
                    return 2;
            }
        }
    }

    // Quadrant 1
    for (int k = 0; k < 3; k++) {
        for (int m = 0; m < 3; m++) {
            for (int i = 0; i < 3; i++) {
                for (int j = m + 1; j < 3; j++) {
                    if (grid.board[k][m].value == grid.board[i][j].value
                        && grid.board[k][m].value != 0
                        && grid.board[i][j].value != 0)
                        return 3;
                }
            }
        }
    }

    // Quadrant 2
    for (int k = 0; k < 3; k++) {
        for (int m = 3; m < 6; m++) {
            for (int i = 0; i < 3; i++) {
                for (int j = m + 1; j < 6; j++) {
                    if (grid.board[k][m].value == grid.board[i][j].value
                        && grid.board[k][m].value != 0
                        && grid.board[i][j].value != 0)
                        return 4;
                }
            }
        }
    }

    // Quadrant 3
    for (int k = 0; k < 3; k++) {
        for (int m = 6; m < 9; m++) {
            for (int i = 0; i < 3; i++) {
                for (int j = m + 1; j < 9; j++) {
                    if (grid.board[k][m].value == grid.board[i][j].value
                        && grid.board[k][m].value != 0
                        && grid.board[i][j].value != 0)
                        return 5;
                }
            }
        }
    }

    // Quadrant 4
    for (int k = 3; k < 6; k++) {
        for (int m = 0; m < 3; m++) {
            for (int i = 3; i < 6; i++) {
                for (int j = m + 1; j < 3; j++) {
                    if (grid.board[k][m].value == grid.board[i][j].value
                        && grid.board[k][m].value != 0
                        && grid.board[i][j].value != 0)
                        return 6;
                }
            }
        }
    }

    // Quadrant 5
    for (int k = 3; k < 6; k++) {
        for (int m = 3; m < 6; m++) {
            for (int i = 3; i < 6; i++) {
                for (int j = m + 1; j < 6; j++) {
                    if (grid.board[k][m].value == grid.board[i][j].value
                        && grid.board[k][m].value != 0
                        && grid.board[i][j].value != 0)
                        return 7;
                }
            }
        }
    }

    // Quadrant 6
    for (int k = 3; k < 6; k++) {
        for (int m = 6; m < 9; m++) {
            for (int i = 3; i < 6; i++) {
                for (int j = m + 1; j < 9; j++) {
                    if (grid.board[k][m].value == grid.board[i][j].value
                        && grid.board[k][m].value != 0
                        && grid.board[i][j].value != 0)
                        return 8;
                }
            }
        }
    }

    // Quadrant 7
    for (int k = 6; k < 9; k++) {
        for (int m = 0; m < 3; m++) {
            for (int i = 6; i < 9; i++) {
                for (int j = m + 1; j < 3; j++) {
                    if (grid.board[k][m].value == grid.board[i][j].value
                        && grid.board[k][m].value != 0
                        && grid.board[i][j].value != 0)
                        return 9;
                }
            }
        }
    }

    // Quadrant 8
    for (int k = 6; k < 9; k++) {
        for (int m = 3; m < 6; m++) {
            for (int i = 6; i < 9; i++) {
                for (int j = m + 1; j < 6; j++) {
                    if (grid.board[k][m].value == grid.board[i][j].value
                        && grid.board[k][m].value != 0
                        && grid.board[i][j].value != 0)
                        return 10;
                }
            }
        }
    }

    // Quadrant 9
    for (int k = 6; k < 9; k++) {
        for (int m = 6; m < 9; m++) {
            for (int i = 6; i < 9; i++) {
                for (int j = m + 1; j < 9; j++) {
                    if (grid.board[k][m].value == grid.board[i][j].value
                        && grid.board[k][m].value != 0
                        && grid.board[i][j].value != 0)
                        return 10;
                }
            }
        }
    }

    return 0;
}
