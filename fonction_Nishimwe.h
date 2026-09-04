#ifndef FONCTION_NISHIMWE
#define FONCTION_NISHIMWE
#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<time.h>
//Caractere d'echappement
#define Gras "\033[1m"
#define Italic "\033[3m"
#define Blinklw "\033[5m"
#define  Blinkfs "\033[6m" //boucle pour le scintillement
#define Grey "\033[02m"
#define white "\033[01m"
#define rouge "\033[31m"
#define green "\033[32m"
#define jaune "\033[33m"
#define purple "\033[35m"
#define bleu "\033[34m"
#define end "\033[0m"
#define whitebg "\033[47m" //les backgrounds ne s'appliquent pas sur les tabulations
#define blackbg "\033[40m"
//Structures de donnees permettant de representer le quadrillage et les cases (valeur+etat)
typedef struct {
    int val;
    int etat; //0 si libre 1 sinon
}Case;

typedef struct
{
    Case tableau [9][9];
    
}Grille;

extern Grille grille;
int verifentree(char *posNi );
//Declaration des fonctions
void initialisationNi();
int verifNi();
void QuadrillageNi();
int victoireNi();
void Jouer(char *nom1Ni);
void barre_chargementNi();
void LogoNi();
#endif