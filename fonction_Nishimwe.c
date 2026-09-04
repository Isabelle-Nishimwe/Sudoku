#include"fonction_Nishimwe.h"

//Fonction d'initialisation des pions de la matrice
void initialisationNi(){
  
    //quelques cases occupés
    srand(time(NULL));
    int nombre = rand()%11+10;

    /*for (int i=0; i< nombre;i++){
        int col=rand()%9;
        int line=rand()%9;
        grille[line][col]=rand()%10; //valeur alléatoire dans la case
      }*/
      for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
          grille.tableau[i][j].etat=0;
        }
      }
      grille.tableau [0][1].val = rand()%10+1;
      grille.tableau[0][1].etat=1;
      grille.tableau [3][2].val = rand()%10+1;
      grille.tableau [3][2].etat=1;
      grille.tableau [4][7].val = rand()%10+1;
      grille.tableau [4][7].etat=1;
      grille.tableau [5][3].val = rand()%10+1;
      grille.tableau [5][3].etat=1;


    }
    



//Fonction de verification des valeurs en entree

int verifNi( ){
    for(int i=0;i<9;i++){
      for (int j=0;j<9;j++){
        if(grille.tableau[i][j].val==0)
          return 0;
      }
    }

    return 1;
  
}

// Fonction d'affichage du quadrillage de jeu
void QuadrillageNi() {
    printf(Gras Italic Grey "\t\t\t\t\t\t C'EST PARTI!!!   \n" end);
    printf("\n");

    //  Ligne 0 (cases 1 à 9) 
    printf(Italic Grey "\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" end, 1,2,3,4,5,6,7,8,9);
    printf(Gras purple "\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" end,
        grille.tableau[0][0].val, grille.tableau[0][1].val, grille.tableau[0][2].val,
        grille.tableau[0][3].val, grille.tableau[0][4].val, grille.tableau[0][5].val,
        grille.tableau[0][6].val, grille.tableau[0][7].val, grille.tableau[0][8].val);

    //  Ligne 1 (cases 10 à 18) 
    printf(Italic Grey "\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" end, 10,11,12,13,14,15,16,17,18);
    printf(Gras purple "\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" end,
        grille.tableau[1][0].val, grille.tableau[1][1].val, grille.tableau[1][2].val,
        grille.tableau[1][3].val, grille.tableau[1][4].val, grille.tableau[1][5].val,
        grille.tableau[1][6].val, grille.tableau[1][7].val, grille.tableau[1][8].val);

    //  Ligne 2 (cases 19 à 27) 
    printf(Italic Grey "\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" end, 19,20,21,22,23,24,25,26,27);
    printf(Gras purple "\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" end,
        grille.tableau[2][0].val, grille.tableau[2][1].val, grille.tableau[2][2].val,
        grille.tableau[2][3].val, grille.tableau[2][4].val, grille.tableau[2][5].val,
        grille.tableau[2][6].val, grille.tableau[2][7].val, grille.tableau[2][8].val);

    printf(Grey "\t\t___________________________________________________________\n" end);

    //  Ligne 3 (cases 28 à 36) 
    printf(Italic Grey "\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" end, 28,29,30,31,32,33,34,35,36);
    printf(Gras purple"\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" end,
        grille.tableau[3][0].val, grille.tableau[3][1].val, grille.tableau[3][2].val,
        grille.tableau[3][3].val, grille.tableau[3][4].val, grille.tableau[3][5].val,
        grille.tableau[3][6].val, grille.tableau[3][7].val, grille.tableau[3][8].val);

    //  Ligne 4 (cases 37 à 45) 
    printf(Italic Grey "\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" end, 37,38,39,40,41,42,43,44,45);
    printf(Gras purple "\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" end,
        grille.tableau[4][0].val, grille.tableau[4][1].val, grille.tableau[4][2].val,
        grille.tableau[4][3].val, grille.tableau[4][4].val, grille.tableau[4][5].val,
        grille.tableau[4][6].val, grille.tableau[4][7].val, grille.tableau[4][8].val);

    //  Ligne 5 (cases 46 à 54) 
    printf(Italic Grey "\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" end, 46,47,48,49,50,51,52,53,54);
    printf(Gras purple"\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" end,
        grille.tableau[5][0].val, grille.tableau[5][1].val, grille.tableau[5][2].val,
        grille.tableau[5][3].val, grille.tableau[5][4].val, grille.tableau[5][5].val,
        grille.tableau[5][6].val, grille.tableau[5][7].val, grille.tableau[5][8].val);

    printf(Grey "\t\t___________________________________________________________\n" end);

    //  Ligne 6 (cases 55 à 63)
    printf(Italic Grey "\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" end, 55,56,57,58,59,60,61,62,63);
    printf(Gras purple "\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" end,
        grille.tableau[6][0].val, grille.tableau[6][1].val, grille.tableau[6][2].val,
        grille.tableau[6][3].val, grille.tableau[6][4].val, grille.tableau[6][5].val,
        grille.tableau[6][6].val, grille.tableau[6][7].val, grille.tableau[6][8].val);

    //  Ligne 7 (cases 64 à 72) 
    printf(Italic Grey "\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" end, 64,65,66,67,68,69,70,71,72);
    printf(Gras purple "\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" end,
        grille.tableau[7][0].val, grille.tableau[7][1].val, grille.tableau[7][2].val,
        grille.tableau[7][3].val, grille.tableau[7][4].val, grille.tableau[7][5].val,
        grille.tableau[7][6].val, grille.tableau[7][7].val, grille.tableau[7][8].val);

    //  Ligne 8 (cases 73 à 81) 
    printf(Italic Grey "\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" end, 73,74,75,76,77,78,79,80,81);
    printf(Gras purple"\t\t  %2d    %2d    %2d   | %2d    %2d    %2d   | %2d    %2d    %2d  \n" end,
        grille.tableau[8][0].val, grille.tableau[8][1].val, grille.tableau[8][2].val,
        grille.tableau[8][3].val, grille.tableau[8][4].val, grille.tableau[8][5].val,
        grille.tableau[8][6].val, grille.tableau[8][7].val, grille.tableau[8][8].val);

    printf("\n\n\n");
}
//Fonction permettant d'evaluer la victoire ou pas
// Fonction permettant d'évaluer la victoire ou pas
int victoireNi() {

    // vérification ligne
    for (int k = 0; k < 9; k++) {
        for (int i = 0; i < 9; i++) {
            for (int j = i + 1; j < 9; j++) {
                if (grille.tableau[k][i].val == grille.tableau[k][j].val
                    && grille.tableau[k][i].val != 0
                    && grille.tableau[k][j].val != 0)
                    return 1;
            }
        }
    }

    // vérification colonne
    for (int k = 0; k < 9; k++) {
        for (int i = 0; i < 9; i++) {
            for (int j = i + 1; j < 9; j++) {
                if (grille.tableau[i][k].val == grille.tableau[j][k].val
                    && grille.tableau[i][k].val != 0
                    && grille.tableau[j][k].val != 0)
                    return 2;
            }
        }
    }

    //verification première cadrant
    for (int k = 0; k < 3; k++) {
        for (int j=k+1;j<3;j++){
                if ((grille.tableau[k][k].val == grille.tableau[j][j].val
                    && grille.tableau[k][k].val != 0
                    && grille.tableau[j][j].val != 0 )||
                    (grille.tableau[2][0].val == grille.tableau[0][2].val
                        && grille.tableau[2][0].val != 0
                        && grille.tableau[0][2].val != 0) 
                        ||(grille.tableau[1][1].val == grille.tableau[0][2].val
                        && grille.tableau[1][1].val != 0
                        && grille.tableau[0][2].val != 0) 
                        || (grille.tableau[1][1].val == grille.tableau[2][0].val
                        && grille.tableau[1][1].val != 0
                        && grille.tableau[2][0].val != 0) ) 
                    return 3;
        
                }
    }
     // Cadran 2 
    if((grille.tableau[0][3].val==grille.tableau[1][4].val
            && grille.tableau[0][3].val!=0 && grille.tableau[1][4].val!=0)
        ||(grille.tableau[0][3].val==grille.tableau[2][5].val
            && grille.tableau[0][3].val!=0 && grille.tableau[2][5].val!=0)
        ||(grille.tableau[1][4].val==grille.tableau[2][5].val
            && grille.tableau[1][4].val!=0 && grille.tableau[2][5].val!=0)
        ||(grille.tableau[0][5].val==grille.tableau[1][4].val
            && grille.tableau[0][5].val!=0 && grille.tableau[1][4].val!=0)
        ||(grille.tableau[0][5].val==grille.tableau[2][3].val
            && grille.tableau[0][5].val!=0 && grille.tableau[2][3].val!=0)
        ||(grille.tableau[2][3].val==grille.tableau[1][4].val
            && grille.tableau[2][3].val!=0 && grille.tableau[1][4].val!=0)
        )
    return 4;

    // Cadran 3 (rows 0-2, cols 6-8)
    if((grille.tableau[0][6].val==grille.tableau[1][7].val
            && grille.tableau[0][6].val!=0 && grille.tableau[1][7].val!=0)
        ||(grille.tableau[0][6].val==grille.tableau[2][8].val
            && grille.tableau[0][6].val!=0 && grille.tableau[2][8].val!=0)
        ||(grille.tableau[1][7].val==grille.tableau[2][8].val
            && grille.tableau[1][7].val!=0 && grille.tableau[2][8].val!=0)
        ||(grille.tableau[0][8].val==grille.tableau[1][7].val
            && grille.tableau[0][8].val!=0 && grille.tableau[1][7].val!=0)
        ||(grille.tableau[0][8].val==grille.tableau[2][6].val
            && grille.tableau[0][8].val!=0 && grille.tableau[2][6].val!=0)
        ||(grille.tableau[2][6].val==grille.tableau[1][7].val
            && grille.tableau[2][6].val!=0 && grille.tableau[1][7].val!=0)
        )
    return 5;

    // Cadran 4 (rows 3-5, cols 0-2)
    if((grille.tableau[3][0].val==grille.tableau[4][1].val
            && grille.tableau[3][0].val!=0 && grille.tableau[4][1].val!=0)
        ||(grille.tableau[3][0].val==grille.tableau[5][2].val
            && grille.tableau[3][0].val!=0 && grille.tableau[5][2].val!=0)
        ||(grille.tableau[4][1].val==grille.tableau[5][2].val
            && grille.tableau[4][1].val!=0 && grille.tableau[5][2].val!=0)
        ||(grille.tableau[3][2].val==grille.tableau[4][1].val
            && grille.tableau[3][2].val!=0 && grille.tableau[4][1].val!=0)
        ||(grille.tableau[3][2].val==grille.tableau[5][0].val
            && grille.tableau[3][2].val!=0 && grille.tableau[5][0].val!=0)
        ||(grille.tableau[5][0].val==grille.tableau[4][1].val
            && grille.tableau[5][0].val!=0 && grille.tableau[4][1].val!=0)
        )
    return 6;

    // Cadran 5 (rows 3-5, cols 3-5)
    if((grille.tableau[3][3].val==grille.tableau[4][4].val
            && grille.tableau[3][3].val!=0 && grille.tableau[4][4].val!=0)
        ||(grille.tableau[3][3].val==grille.tableau[5][5].val
            && grille.tableau[3][3].val!=0 && grille.tableau[5][5].val!=0)
        ||(grille.tableau[4][4].val==grille.tableau[5][5].val
            && grille.tableau[4][4].val!=0 && grille.tableau[5][5].val!=0)
        ||(grille.tableau[3][5].val==grille.tableau[4][4].val
            && grille.tableau[3][5].val!=0 && grille.tableau[4][4].val!=0)
        ||(grille.tableau[3][5].val==grille.tableau[5][3].val
            && grille.tableau[3][5].val!=0 && grille.tableau[5][3].val!=0)
        ||(grille.tableau[5][3].val==grille.tableau[4][4].val
            && grille.tableau[5][3].val!=0 && grille.tableau[4][4].val!=0)
        )
    return 7;

    // Cadran 6 (rows 3-5, cols 6-8)
    if((grille.tableau[3][6].val==grille.tableau[4][7].val
            && grille.tableau[3][6].val!=0 && grille.tableau[4][7].val!=0)
        ||(grille.tableau[3][6].val==grille.tableau[5][8].val
            && grille.tableau[3][6].val!=0 && grille.tableau[5][8].val!=0)
        ||(grille.tableau[4][7].val==grille.tableau[5][8].val
            && grille.tableau[4][7].val!=0 && grille.tableau[5][8].val!=0)
        ||(grille.tableau[3][8].val==grille.tableau[4][7].val
            && grille.tableau[3][8].val!=0 && grille.tableau[4][7].val!=0)
        ||(grille.tableau[3][8].val==grille.tableau[5][6].val
            && grille.tableau[3][8].val!=0 && grille.tableau[5][6].val!=0)
        ||(grille.tableau[5][6].val==grille.tableau[4][7].val
            && grille.tableau[5][6].val!=0 && grille.tableau[4][7].val!=0)
        )
    return 8;

    // Cadran 7 (rows 6-8, cols 0-2)
    if((grille.tableau[6][0].val==grille.tableau[7][1].val
            && grille.tableau[6][0].val!=0 && grille.tableau[7][1].val!=0)
        ||(grille.tableau[6][0].val==grille.tableau[8][2].val
            && grille.tableau[6][0].val!=0 && grille.tableau[8][2].val!=0)
        ||(grille.tableau[7][1].val==grille.tableau[8][2].val
            && grille.tableau[7][1].val!=0 && grille.tableau[8][2].val!=0)
        ||(grille.tableau[6][2].val==grille.tableau[7][1].val
            && grille.tableau[6][2].val!=0 && grille.tableau[7][1].val!=0)
        ||(grille.tableau[6][2].val==grille.tableau[8][0].val
            && grille.tableau[6][2].val!=0 && grille.tableau[8][0].val!=0)
        ||(grille.tableau[8][0].val==grille.tableau[7][1].val
            && grille.tableau[8][0].val!=0 && grille.tableau[7][1].val!=0)
        )
    return 9;

    // Cadran 8 (rows 6-8, cols 3-5)
    if((grille.tableau[6][3].val==grille.tableau[7][4].val
            && grille.tableau[6][3].val!=0 && grille.tableau[7][4].val!=0)
        ||(grille.tableau[6][3].val==grille.tableau[8][5].val
            && grille.tableau[6][3].val!=0 && grille.tableau[8][5].val!=0)
        ||(grille.tableau[7][4].val==grille.tableau[8][5].val
            && grille.tableau[7][4].val!=0 && grille.tableau[8][5].val!=0)
        ||(grille.tableau[6][5].val==grille.tableau[7][4].val
            && grille.tableau[6][5].val!=0 && grille.tableau[7][4].val!=0)
        ||(grille.tableau[6][5].val==grille.tableau[8][3].val
            && grille.tableau[6][5].val!=0 && grille.tableau[8][3].val!=0)
        ||(grille.tableau[8][3].val==grille.tableau[7][4].val
            && grille.tableau[8][3].val!=0 && grille.tableau[7][4].val!=0)
        )
    return 10;

    // Cadran 9 (rows 6-8, cols 6-8)
    if((grille.tableau[6][6].val==grille.tableau[7][7].val
            && grille.tableau[6][6].val!=0 && grille.tableau[7][7].val!=0)
        ||(grille.tableau[6][6].val==grille.tableau[8][8].val
            && grille.tableau[6][6].val!=0 && grille.tableau[8][8].val!=0)
        ||(grille.tableau[7][7].val==grille.tableau[8][8].val
            && grille.tableau[7][7].val!=0 && grille.tableau[8][8].val!=0)
        ||(grille.tableau[6][8].val==grille.tableau[7][7].val
            && grille.tableau[6][8].val!=0 && grille.tableau[7][7].val!=0)
        ||(grille.tableau[6][8].val==grille.tableau[8][6].val
            && grille.tableau[6][8].val!=0 && grille.tableau[8][6].val!=0)
        ||(grille.tableau[8][6].val==grille.tableau[7][7].val
            && grille.tableau[8][6].val!=0 && grille.tableau[7][7].val!=0)
        )
    return 11;

  

    

    return 0;
}
int verifentree(char *posNi ){
    if(strcmp(posNi,"1")==0||strcmp(posNi,"2")==0|| strcmp(posNi,"3")==0||strcmp(posNi,"4")==0||strcmp(posNi,"5")==0||strcmp(posNi,"6")==0||strcmp(posNi,"7")==0||strcmp(posNi,"8")==0||strcmp(posNi,"9")==0 ||
       strcmp(posNi,"10")==0||strcmp(posNi,"11")==0|| strcmp(posNi,"12")==0||strcmp(posNi,"13")==0||strcmp(posNi,"14")==0||strcmp(posNi,"15")==0||strcmp(posNi,"16")==0||strcmp(posNi,"17")==0||strcmp(posNi,"18")==0 ||
       strcmp(posNi,"19")==0||strcmp(posNi,"20")==0|| strcmp(posNi,"21")==0||strcmp(posNi,"22")==0||strcmp(posNi,"23")==0||strcmp(posNi,"24")==0||strcmp(posNi,"25")==0||strcmp(posNi,"26")==0||strcmp(posNi,"27")==0 ||
       strcmp(posNi,"28")==0||strcmp(posNi,"29")==0|| strcmp(posNi,"30")==0||strcmp(posNi,"31")==0||strcmp(posNi,"32")==0||strcmp(posNi,"33")==0||strcmp(posNi,"34")==0||strcmp(posNi,"35")==0||strcmp(posNi,"36")==0 ||
       strcmp(posNi,"37")==0||strcmp(posNi,"38")==0|| strcmp(posNi,"39")==0||strcmp(posNi,"40")==0||strcmp(posNi,"41")==0||strcmp(posNi,"42")==0||strcmp(posNi,"43")==0||strcmp(posNi,"44")==0||strcmp(posNi,"45")==0 ||
       strcmp(posNi,"46")==0||strcmp(posNi,"47")==0|| strcmp(posNi,"48")==0||strcmp(posNi,"49")==0||strcmp(posNi,"50")==0||strcmp(posNi,"50")==0||strcmp(posNi,"52")==0||strcmp(posNi,"53")==0||strcmp(posNi,"54")==0 ||
       strcmp(posNi,"55")==0||strcmp(posNi,"56")==0|| strcmp(posNi,"57")==0||strcmp(posNi,"58")==0||strcmp(posNi,"59")==0||strcmp(posNi,"60")==0||strcmp(posNi,"61")==0||strcmp(posNi,"62")==0||strcmp(posNi,"63")==0 ||
       strcmp(posNi,"64")==0||strcmp(posNi,"65")==0|| strcmp(posNi,"66")==0||strcmp(posNi,"67")==0||strcmp(posNi,"68")==0||strcmp(posNi,"69")==0||strcmp(posNi,"70")==0||strcmp(posNi,"71")==0||strcmp(posNi,"72")==0 ||
       strcmp(posNi,"73")==0||strcmp(posNi,"74")==0|| strcmp(posNi,"75")==0||strcmp(posNi,"76")==0||strcmp(posNi,"77")==0||strcmp(posNi,"78")==0||strcmp(posNi,"79")==0||strcmp(posNi,"80")==0||strcmp(posNi,"81")==0
  )
     return 1;
    else
        return 0;
}

//Fonction fondamentale de gestion du jeu
void Jouer(char *nom1Ni){
    char posNi[10];
    int nombre;
    while(verifNi()== 0){
        ICI:
        system("clear");
        QuadrillageNi();
        printf("%s,entres le numero de la case: ",nom1Ni);
        scanf("%s",posNi);
        if(verifentree(posNi)!=1){
                    printf("Numero de case inexistante\n");
                    sleep(1);
                    system("clear");
                    goto ICI;
                }
        printf("Entres le chiffre: ");
        scanf("%d",&nombre);
        if(nombre < 0 || nombre > 9){
            printf("Entrez un chiffre compris entre 0 et 9\n");
                    sleep(1);
                    system("clear");
                    goto ICI;
        }
         
        //logique d'ancrage du nombre dans la case choisie
        if(grille.tableau[0][0].etat==0 && strcmp(posNi,"1")==0){
        grille.tableau[0][0].val = nombre;
        grille.tableau[0][0].etat = 1;
        }
        else if(grille.tableau[0][1].etat==0 && strcmp(posNi,"2")==0){
        grille.tableau[0][1].val = nombre;
        grille.tableau[0][1].etat = 1;
        }
        else if(grille.tableau[0][2].etat==0 && strcmp(posNi,"3")==0){
        grille.tableau[0][2].val = nombre;
        grille.tableau[0][2].etat = 1;
        }
        else if(grille.tableau[0][3].etat==0 && strcmp(posNi,"4")==0){
        grille.tableau[0][3].val = nombre;
        grille.tableau[0][3].etat = 1;
        }
        else if(grille.tableau[0][4].etat==0 && strcmp(posNi,"5")==0){
        grille.tableau[0][4].val = nombre;
        grille.tableau[0][4].etat = 1;
        }
        else if(grille.tableau[0][5].etat==0 && strcmp(posNi,"6")==0){
        grille.tableau[0][5].val = nombre;
        grille.tableau[0][5].etat = 1;
        }
        else if(grille.tableau[0][6].etat==0 && strcmp(posNi,"7")==0){
        grille.tableau[0][6].val = nombre;
        grille.tableau[0][6].etat = 1;
        }
        else if(grille.tableau[0][7].etat==0 && strcmp(posNi,"8")==0){
        grille.tableau[0][7].val = nombre;
        grille.tableau[0][7].etat = 1;
        }
        else if(grille.tableau[0][8].etat==0 && strcmp(posNi,"9")==0){
        grille.tableau[0][8].val = nombre;
        grille.tableau[0][8].etat = 1;
        }
        else if(grille.tableau[1][0].etat==0 && strcmp(posNi,"10")==0){
        grille.tableau[1][0].val = nombre;
        grille.tableau[1][0].etat = 1;
        }
        else if(grille.tableau[1][1].etat==0 && strcmp(posNi,"11")==0){
        grille.tableau[1][1].val = nombre;
        grille.tableau[1][1].etat = 1;
        }
        else if(grille.tableau[1][2].etat==0 && strcmp(posNi,"12")==0){
        grille.tableau[1][2].val = nombre;
        grille.tableau[1][2].etat = 1;
        }
        else if(grille.tableau[1][3].etat==0 && strcmp(posNi,"13")==0){
        grille.tableau[1][3].val = nombre;
        grille.tableau[1][3].etat = 1;
        }
        else if(grille.tableau[1][4].etat==0 && strcmp(posNi,"14")==0){
        grille.tableau[1][4].val = nombre;
        grille.tableau[1][4].etat = 1;
        }
        else if(grille.tableau[1][5].etat==0 && strcmp(posNi,"15")==0){
        grille.tableau[1][5].val = nombre;
        grille.tableau[1][5].etat = 1;
        }
        else if(grille.tableau[1][6].etat==0 && strcmp(posNi,"16")==0){
        grille.tableau[1][6].val = nombre;
        grille.tableau[1][6].etat = 1;
        }
        else if(grille.tableau[1][7].etat==0 && strcmp(posNi,"17")==0){
        grille.tableau[1][7].val = nombre;
        grille.tableau[1][7].etat = 1;
        }
        else if(grille.tableau[1][8].etat==0 && strcmp(posNi,"18")==0){
        grille.tableau[1][8].val = nombre;
        grille.tableau[1][8].etat = 1;
        }
        else if(grille.tableau[2][0].etat==0 && strcmp(posNi,"19")==0){
        grille.tableau[2][0].val = nombre;
        grille.tableau[2][0].etat = 1;
        }
        else if(grille.tableau[2][1].etat==0 && strcmp(posNi,"20")==0){
        grille.tableau[2][1].val = nombre;
        grille.tableau[2][1].etat = 1;
        }
        else if(grille.tableau[2][2].etat==0 && strcmp(posNi,"21")==0){
        grille.tableau[2][2].val = nombre;
        grille.tableau[2][2].etat = 1;
        }
        else if(grille.tableau[2][3].etat==0 && strcmp(posNi,"22")==0){
        grille.tableau[2][3].val = nombre;
        grille.tableau[2][3].etat = 1;
        }
        else if(grille.tableau[2][4].etat==0 && strcmp(posNi,"23")==0){
        grille.tableau[2][4].val = nombre;
        grille.tableau[2][4].etat = 1;
        }
        else if(grille.tableau[2][5].etat==0 && strcmp(posNi,"24")==0){
        grille.tableau[2][5].val = nombre;
        grille.tableau[2][5].etat = 1;
        }
        else if(grille.tableau[2][6].etat==0 && strcmp(posNi,"25")==0){
        grille.tableau[2][6].val = nombre;
        grille.tableau[2][6].etat = 1;
        }
        else if(grille.tableau[2][7].etat==0 && strcmp(posNi,"26")==0){
        grille.tableau[2][7].val = nombre;
        grille.tableau[2][7].etat = 1;
        }
        else if(grille.tableau[2][8].etat==0 && strcmp(posNi,"27")==0){
        grille.tableau[2][8].val = nombre;
        grille.tableau[2][8].etat = 1;
        }
        else if(grille.tableau[3][0].etat==0 && strcmp(posNi,"28")==0){
        grille.tableau[3][0].val = nombre;
        grille.tableau[3][0].etat = 1;
        }
        else if(grille.tableau[3][1].etat==0 && strcmp(posNi,"29")==0){
        grille.tableau[3][1].val = nombre;
        grille.tableau[3][1].etat = 1;
        }
        else if(grille.tableau[3][2].etat==0 && strcmp(posNi,"30")==0){
        grille.tableau[3][2].val = nombre;
        grille.tableau[3][2].etat = 1;
        }
        else if(grille.tableau[3][3].etat==0 && strcmp(posNi,"31")==0){
        grille.tableau[3][3].val = nombre;
        grille.tableau[3][3].etat = 1;
        }
        else if(grille.tableau[3][4].etat==0 && strcmp(posNi,"32")==0){
        grille.tableau[3][4].val = nombre;
        grille.tableau[3][4].etat = 1;
        }
        else if(grille.tableau[3][5].etat==0 && strcmp(posNi,"33")==0){
        grille.tableau[3][5].val = nombre;
        grille.tableau[3][5].etat = 1;
        }
        else if(grille.tableau[3][6].etat==0 && strcmp(posNi,"34")==0){
        grille.tableau[3][6].val = nombre;
        grille.tableau[3][6].etat = 1;
        }
        else if(grille.tableau[3][7].etat==0 && strcmp(posNi,"35")==0){
        grille.tableau[3][7].val = nombre;
        grille.tableau[3][7].etat = 1;
        }
        else if(grille.tableau[3][8].etat==0 && strcmp(posNi,"36")==0){
        grille.tableau[3][8].val = nombre;
        grille.tableau[3][8].etat = 1;
        }
        else if(grille.tableau[4][0].etat==0 && strcmp(posNi,"37")==0){
        grille.tableau[4][0].val = nombre;
        grille.tableau[4][0].etat = 1;
        }
        else if(grille.tableau[4][1].etat==0 && strcmp(posNi,"38")==0){
        grille.tableau[4][1].val = nombre;
        grille.tableau[4][1].etat = 1;
        }
        else if(grille.tableau[4][2].etat==0 && strcmp(posNi,"39")==0){
        grille.tableau[4][2].val = nombre;
        grille.tableau[4][2].etat = 1;
        }
        else if(grille.tableau[4][3].etat==0 && strcmp(posNi,"40")==0){
        grille.tableau[4][3].val = nombre;
        grille.tableau[4][3].etat = 1;
        }
        else if(grille.tableau[4][4].etat==0 && strcmp(posNi,"41")==0){
        grille.tableau[4][4].val = nombre;
        grille.tableau[4][4].etat = 1;
        }
        else if(grille.tableau[4][5].etat==0 && strcmp(posNi,"42")==0){
        grille.tableau[4][5].val = nombre;
        grille.tableau[4][5].etat = 1;
        }
        else if(grille.tableau[4][6].etat==0 && strcmp(posNi,"43")==0){
        grille.tableau[4][6].val = nombre;
        grille.tableau[4][6].etat = 1;
        }
        else if(grille.tableau[4][7].etat==0 && strcmp(posNi,"44")==0){
        grille.tableau[4][7].val = nombre;
        grille.tableau[4][7].etat = 1;
        }
        else if(grille.tableau[4][8].etat==0 && strcmp(posNi,"45")==0){
        grille.tableau[4][8].val = nombre;
        grille.tableau[4][8].etat = 1;
        }
        else if(grille.tableau[5][0].etat==0 && strcmp(posNi,"46")==0){
        grille.tableau[5][0].val = nombre;
        grille.tableau[5][0].etat = 1;
        }
        else if(grille.tableau[5][1].etat==0 && strcmp(posNi,"47")==0){
        grille.tableau[5][1].val = nombre;
        grille.tableau[5][1].etat = 1;
        }
        else if(grille.tableau[5][2].etat==0 && strcmp(posNi,"48")==0){
        grille.tableau[5][2].val = nombre;
        grille.tableau[5][2].etat = 1;
        }
        else if(grille.tableau[5][3].etat==0 && strcmp(posNi,"49")==0){
        grille.tableau[5][3].val = nombre;
        grille.tableau[5][3].etat = 1;
        }
        else if(grille.tableau[5][4].etat==0 && strcmp(posNi,"50")==0){
        grille.tableau[5][4].val = nombre;
        grille.tableau[5][4].etat = 1;
        }
        else if(grille.tableau[5][5].etat==0 && strcmp(posNi,"51")==0){
        grille.tableau[5][5].val = nombre;
        grille.tableau[5][5].etat = 1;
        }
        else if(grille.tableau[5][6].etat==0 && strcmp(posNi,"52")==0){
        grille.tableau[5][6].val = nombre;
        grille.tableau[5][6].etat = 1;
        }
        else if(grille.tableau[5][7].etat==0 && strcmp(posNi,"53")==0){
        grille.tableau[5][7].val = nombre;
        grille.tableau[5][7].etat = 1;
        }
        else if(grille.tableau[5][8].etat==0 && strcmp(posNi,"54")==0){
        grille.tableau[5][8].val = nombre;
        grille.tableau[5][8].etat = 1;
        }
        else if(grille.tableau[6][0].etat==0 && strcmp(posNi,"55")==0){
        grille.tableau[6][0].val = nombre;
        grille.tableau[6][0].etat = 1;
        }
        else if(grille.tableau[6][1].etat==0 && strcmp(posNi,"56")==0){
        grille.tableau[6][1].val = nombre;
        grille.tableau[6][1].etat = 1;
        }
        else if(grille.tableau[6][2].etat==0 && strcmp(posNi,"57")==0){
        grille.tableau[6][2].val = nombre;
        grille.tableau[6][2].etat = 1;
        }
        else if(grille.tableau[6][3].etat==0 && strcmp(posNi,"58")==0){
        grille.tableau[6][3].val = nombre;
        grille.tableau[6][3].etat = 1;
        }
        else if(grille.tableau[6][4].etat==0 && strcmp(posNi,"59")==0){
        grille.tableau[6][4].val = nombre;
        grille.tableau[6][4].etat = 1;
        }
        else if(grille.tableau[6][5].etat==0 && strcmp(posNi,"60")==0){
        grille.tableau[6][5].val = nombre;
        grille.tableau[6][5].etat = 1;
        }
        else if(grille.tableau[6][6].etat==0 && strcmp(posNi,"61")==0){
        grille.tableau[6][6].val = nombre;
        grille.tableau[6][6].etat = 1;
        }
        else if(grille.tableau[6][7].etat==0 && strcmp(posNi,"62")==0){
        grille.tableau[6][7].val = nombre;
        grille.tableau[6][7].etat = 1;
        }
        else if(grille.tableau[6][8].etat==0 && strcmp(posNi,"63")==0){
        grille.tableau[6][8].val = nombre;
        grille.tableau[6][8].etat = 1;
        }
        else if(grille.tableau[7][0].etat==0 && strcmp(posNi,"64")==0){
        grille.tableau[7][0].val = nombre;
        grille.tableau[7][0].etat = 1;
        }
        else if(grille.tableau[7][1].etat==0 && strcmp(posNi,"65")==0){
        grille.tableau[7][1].val = nombre;
        grille.tableau[7][1].etat = 1;
        }
        else if(grille.tableau[7][2].etat==0 && strcmp(posNi,"66")==0){
        grille.tableau[7][2].val = nombre;
        grille.tableau[7][2].etat = 1;
        }
        else if(grille.tableau[7][3].etat==0 && strcmp(posNi,"67")==0){
        grille.tableau[7][3].val = nombre;
        grille.tableau[7][3].etat = 1;
        }
        else if(grille.tableau[7][4].etat==0 && strcmp(posNi,"68")==0){
        grille.tableau[7][4].val = nombre;
        grille.tableau[7][4].etat = 1;
        }
        else if(grille.tableau[7][5].etat==0 && strcmp(posNi,"69")==0){
        grille.tableau[7][5].val = nombre;
        grille.tableau[7][5].etat = 1;
        }
        else if(grille.tableau[7][6].etat==0 && strcmp(posNi,"70")==0){
        grille.tableau[7][6].val = nombre;
        grille.tableau[7][6].etat = 1;
        }
        else if(grille.tableau[7][7].etat==0 && strcmp(posNi,"71")==0){
        grille.tableau[7][7].val = nombre;
        grille.tableau[7][7].etat = 1;
        }
        else if(grille.tableau[7][8].etat==0 && strcmp(posNi,"72")==0){
        grille.tableau[7][8].val = nombre;
        grille.tableau[7][8].etat = 1;
        }
        else if(grille.tableau[8][0].etat==0 && strcmp(posNi,"73")==0){
        grille.tableau[8][0].val = nombre;
        grille.tableau[8][0].etat = 1;
        }
        else if(grille.tableau[8][1].etat==0 && strcmp(posNi,"74")==0){
        grille.tableau[8][1].val = nombre;
        grille.tableau[8][1].etat = 1;
        }
        else if(grille.tableau[8][2].etat==0 && strcmp(posNi,"75")==0){
        grille.tableau[8][2].val = nombre;
        grille.tableau[8][2].etat = 1;
        }
        else if(grille.tableau[8][3].etat==0 && strcmp(posNi,"76")==0){
        grille.tableau[8][3].val = nombre;
        grille.tableau[8][3].etat = 1;
        }
        else if(grille.tableau[8][4].etat==0 && strcmp(posNi,"77")==0){
        grille.tableau[8][4].val = nombre;
        grille.tableau[8][4].etat = 1;
        }
        else if(grille.tableau[8][5].etat==0 && strcmp(posNi,"78")==0){
        grille.tableau[8][5].val = nombre;
        grille.tableau[8][5].etat = 1;
        }
        else if(grille.tableau[8][6].etat==0 && strcmp(posNi,"79")==0){
        grille.tableau[8][6].val = nombre;
        grille.tableau[8][6].etat = 1;
        }
        else if(grille.tableau[8][7].etat==0 && strcmp(posNi,"80")==0){
        grille.tableau[8][7].val = nombre;
        grille.tableau[8][7].etat = 1;
        }
        else if(grille.tableau[8][8].etat==0 && strcmp(posNi,"81")==0){
        grille.tableau[8][8].val = nombre;
        grille.tableau[8][8].etat = 1;
        }
        else {
        printf("Case occupée ou numéro invalide\n");
        sleep(1);
        system("clear");
        goto ICI;
        }
         int t;
         t=victoireNi();
        if(t==1){
            system("clear");
            printf("\n\n"whitebg jaune"%s ,Vous avez perdu la partie doublon detecter en ligne !"end"\n",nom1Ni);           
            QuadrillageNi();
            initialisationNi();  
            printf("\n\nAppuyez sur Entree pour continuer\n");
            getchar();
            while(getchar()!='\n'); 
                      
            break;

        }
        else if(t==2){
          system("clear");
            printf("\n\n"whitebg jaune"%s ,Vous avez perdue la partie doublon detecter en colonne !"end"\n",nom1Ni);           
            QuadrillageNi();
            initialisationNi(); 
            printf("\n\nAppuyez sur Entree pour continuer\n");
            getchar();
            while(getchar()!='\n');            
            break;
        }
        else if(t==3){
          system("clear");
            printf("\n\n"whitebg jaune"%s ,Vous avez perdue la partie doublon detecter en 1er quadrant !"end"\n",nom1Ni);           
            QuadrillageNi();
            initialisationNi(); 
            printf("\n\nAppuyez sur Entree pour continuer\n");
            getchar();
            while(getchar()!='\n'); 
                        
            break;
        }
        else if(t==4){
          system("clear");
            printf("\n\n"whitebg jaune"%s ,Vous avez perdue la partie doublon detecter en 2eme cadrant !"end"\n",nom1Ni);           
            QuadrillageNi();
            initialisationNi();
            printf("\n\nAppuyez sur Entree pour continuer\n");
            getchar();
            while(getchar()!='\n');             
            break;
        }
        else if(t==5){
          system("clear");
            printf("\n\n"whitebg jaune"%s ,Vous avez perdue la partie doublon detecter en 3eme cadrant !"end"\n",nom1Ni);           
            QuadrillageNi();
            initialisationNi();
            printf("\n\nAppuyez sur Entree pour continuer\n");
            getchar();
            while(getchar()!='\n');             
            break;
        }

        else if(t==6){
          system("clear");
          printf("\n\n"whitebg jaune"%s ,Vous avez perdue la partie doublon detecter en 4eme cadrant !"end"\n",nom1Ni);           
          QuadrillageNi();
          initialisationNi();
          printf("\n\nAppuyez sur Entree pour continuer\n");
          getchar();
          while(getchar()!='\n');             
          break;
                  }
          else if(t==7){
           system("clear");
          printf("\n\n"whitebg jaune"%s ,Vous avez perdue la partie doublon detecter en 5eme cadrant !"end"\n",nom1Ni);           
          QuadrillageNi();
          initialisationNi();
          printf("\n\nAppuyez sur Entree pour continuer\n");
          getchar();
          while(getchar()!='\n');             
          break;
                  }
          else if(t==8){
                    system("clear");
          printf("\n\n"whitebg jaune"%s ,Vous avez perdue la partie doublon detecter en 6eme cadrant !"end"\n",nom1Ni);           
          QuadrillageNi();
          initialisationNi();
          printf("\n\nAppuyez sur Entree pour continuer\n");
          getchar();
          while(getchar()!='\n');             
          break;
                  }
          else if(t==9){
                    system("clear");
          printf("\n\n"whitebg jaune"%s ,Vous avez perdue la partie doublon detecter en 7eme cadrant !"end"\n",nom1Ni);           
          QuadrillageNi();
          initialisationNi();
          printf("\n\nAppuyez sur Entree pour continuer\n");
          getchar();
          while(getchar()!='\n');             
          break;
                  }
          else if(t==10){
                    system("clear");
          printf("\n\n"whitebg jaune"%s ,Vous avez perdue la partie doublon detecter en 8eme cadrant !"end"\n",nom1Ni);           
          QuadrillageNi();
          initialisationNi();
          printf("\n\nAppuyez sur Entree pour continuer\n");
          getchar();
          while(getchar()!='\n');             
          break;
                  }
          else if(t==11){
                    system("clear");
          printf("\n\n"whitebg jaune"%s ,Vous avez perdue la partie doublon detecter en 9eme cadrant !"end"\n",nom1Ni);           
          QuadrillageNi();
          initialisationNi();
          printf("\n\nAppuyez sur Entree pour continuer\n");
          getchar();
          while(getchar()!='\n');             
          break;
        }
    }
    
    printf("\n\n"Gras blackbg" %s , Termine!!"end"\n",nom1Ni);
    
}



//Fonctions d'affichage et d'embellisement
void barre_chargementNi(){
  char chaineNi[400]= Gras bleu "Chargement en cours["end;
     for(int i=0;i<6;i++){
        if(i==5){
            strcat(chaineNi,Gras bleu"]"end );
        }else{
            strcat(chaineNi,whitebg"  "end" ");
        }

       printf(Gras rouge "\t\t\t"Blinklw" BIENVENUE "end"\n\n\n");
       printf("\n");
       printf("%s",chaineNi);
       printf("\n");
       sleep(1);
       system("clear");
        fflush(stdout);//Vider le tampon(permet l'affichage sur le terminale)
     }
     printf("\n");

}
void LogoNi(){
    printf(Gras whitebg"\t\t\t                                "end"\n");
    printf("\t\t\t\t"Gras purple"   SUDOKU"end"\n");
    printf(Gras whitebg"\t\t\t                                "end"\n");
}
