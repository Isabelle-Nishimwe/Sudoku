#include"fonction_Nishimwe.h"
Grille grille;

int main(){

system("clear");//Nettoyage du terminale
barre_chargementNi();
system("clear");
 int choix;
char* nom1Ni=malloc(50*sizeof(char));
do{
LAHAUT:
//system("clear");
LogoNi(); 
printf("\n\n\n");
printf("\t\t\t\t"Italic bleu"    MENU"end"\n");
printf("\n\n\n");
printf(Gras white "\t\t1. JOUER\n\t\t2. REGLE DU JEU ET DESCRIPTION\n\t\t3. QUITTER\n\n");
printf("\t\t CHOIX :  "end);
scanf("%d",&choix);
system("clear");
switch(choix){
    case 1:
       
        system("clear");
        printf("\n\n\n");
        LogoNi();
        printf("\n\n\n");
        printf(Gras Grey"Ton nom :) :  ");
        scanf("%s",nom1Ni);
        printf(end"\n\n");
        system("clear"); 
        initialisationNi();
        QuadrillageNi();
        Jouer(nom1Ni);       
        break;
    
 

    case 2:
        system("clear");
        LogoNi();
         FILE *fichier=fopen("readme.txt","r");
        if(fichier==NULL){
            printf("ERREUR,le fichier est introuvable\n");
            return 0;
        }else{
        char carac[100];
       while(fgets(carac,sizeof(carac),fichier)!=NULL){
        printf("%s",carac);
           }  
        }       
        printf(green"\n\t\tBonne Chance!"end"\n");
        printf("Appuyez sur la touche Entrée pour retourner au Menu\n");
            getchar();
            while(getchar()!='\n');
        break;
    case 3:
        system("clear");
        printf("À BIENTOT!!\n\n");
        break;
    default:
    system("clear");
    printf("Veuillez reeffectuer votre choix");
   
}
}while(choix!=3);
//Liberation de la memoire
free(nom1Ni);




}
