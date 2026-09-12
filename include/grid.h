#ifndef GRID_H
#define GRID_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Data structure representing a cell (value + state)
typedef struct {
    int value; // Value of the cell (0 if empty)
    int state; // 0 if free/editable, 1 if fixed
} Cell;

// Data structure representing the grid (9x9 matrix of cells)
typedef struct {
    Cell board[9][9];
} Grid;

// Global grid variable
extern Grid grid;

// Function declarations
void initGrid(void);
int verifyGrid(void);

#endif // GRID_H
