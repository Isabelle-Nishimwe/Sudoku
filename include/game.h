#ifndef GAME_H
#define GAME_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "grid.h"
#include "display.h"
#include "victory.h"

int verifyInput(char *cellPos);
void play(char *playerName);

#endif // GAME_H
