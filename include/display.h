#ifndef DISPLAY_H
#define DISPLAY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "grid.h"

// ANSI Color and Style Macros
#define BOLD "\033[1m"
#define ITALIC "\033[3m"
#define BLINK_SLOW "\033[5m"
#define BLINK_FAST "\033[6m"
#define GREY "\033[02m"
#define WHITE "\033[01m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define PURPLE "\033[35m"
#define BLUE "\033[34m"
#define RESET "\033[0m"
#define WHITE_BG "\033[47m"
#define BLACK_BG "\033[40m"

// Display Function Declarations
void displayGrid(void);
void showLoadingBar(void);
void displayLogo(void);

#endif // DISPLAY_H
