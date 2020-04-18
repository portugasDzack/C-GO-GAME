#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void uservuserload(char board[9][9],char* filename){

//l'autorisation de lecture des caracteres ASCII
system("chcp 65001  > nul");
//la declaration des variables
int O_territory,X_territory;
char player1='O'; int score1=0;
char player2='X'; int score2=0;
int i=0,r,c,x,z,t=0,e=0,count=0,d=0,y=0,j=0,k=0;
int voisin[4];

FILE * fpointer;
char n[4];
/*char *timevalue;
//la recuperation de la date de la machine
timevalue = timefct();
int len=strlen(timevalue);
for (i=0;i<len;i++){
    if (timevalue[i]=='\n'){timevalue[i]=' ';}
    if (timevalue[i]==':'){timevalue[i]='_';}
}

strcat(timevalue ,".txt");
if (filename[0] == 'e'){
fpointer = fopen(timevalue,"w");}

*/

//l'initialisation de la grille

for (r=0;r<8;r++){
    for (c=0;c<=8;c++){

        board[r][c]='*';

    }

}

//l'intitialisation des groupes de capture et leurs remplissage , cing groupes chacun pour un voisin et le cinquieme pour le pion entre
int group[60];
int group1[60];
int group2[60];
int group3[60];
int group4[60];

//la valeur 2018 ne signifie rien
for (e=0;e<60;e++){
   group[e]=2018;
   group1[e]=2018;
   group2[e]=2018;
   group3[e]=2018;
   group4[e]=2018;

}

//le code pour ouvrir le fichier de la partie enregistre
char filename1[64]="C:\\Users\\Apollo\\Desktop\\jeugo\\saves\\";
const char * b = filename;
strcat(filename1,b);
    char str[MAXCHAR];
    fpointer = fopen(filename1,"r");
    if (fpointer == NULL){
        printf("Could not open file %s",filename1);
    }

//debut du jeu , la boucle tourne et arrette si k=2 cad les joueurs entrent pass successivement
while ((k != 2)){
    printf("\n\n");

   // le remplissage du goban par les valeurs deja enregistre .
     while ((fgets(str, MAXCHAR, fpointer) != NULL) & (y==0))

           {

           int  z = str[0];
                z=z-65;
            int x = str[1];
                x = x-48;

            if (t%2==0){board[x][z]='O';}
            if (t%2==1){board[x][z]='X';}


//executer la capturation pour les valeurs deja enregistres et le calcul du score
             voisinnage(voisin,x,z);
count = count + makecapture(j,t,x,z,board,group);
//printf("%d%d",c,r);


z=voisin[0]/10;
x=voisin[0]%10;
if((voisin[0] != 999) &(board[x][z] != '*') ){

//printf("%d",voisin[0]);

count = count + makecapture(j,t,x,z,board,group1);}


z=voisin[1]/10;
x=voisin[1]%10;
if ((voisin[1]!= 999 )&(board[x][z] != '*')){


//printf("%d",voisin[1]);

count = count + makecapture(j,t,x,z,board,group2);}


z=voisin[2]/10;
x=voisin[2]%10;
if ((voisin[2]!= 999) &(board[x][z] != '*'))
{
//printf("%d",voisin[2]);
count = count + makecapture(j,t,x,z,board,group3);}


z=voisin[3]/10;
x=voisin[3]%10;
if ( (voisin[3]!= 999 ) &(board[x][z] != '*')){


//printf("%d",voisin[3]);



count = count + makecapture(j,t,x,z,board,group4);}

z = str[0];
z=z-65;
x = str[1];
x=x-48;

if ( board[x][z] == 'X'){score1 = score1 + count; }

if (board[x][z] == 'O'){score2 = score2 + count; }
count=0;
            t++;

            }
//la fin de la recuperation des valeurs et le debut d'ajout dans le fichier enregistre

            if( y==0)
            {
            fclose(fpointer);
            fpointer = fopen(filename1,"a");
            grille(board);
            y=2;}

//les joueurs commence a donner des valeurs
    printf("\nturn %d  :",t);
    scanf("%s",n);


//extraction des valeurs int du char
int c = n[0];
c=c-65;
int r = n[1];
r=r-48;
//FIN DE PARTIE
if (n[0]=='5'){
    fclose(fpointer);
    d=10;
    break;
}
//verification de la validation du mouvement
while ((board[r][c] != '*' )) {

    printf("La valeur que vs avez entrer est invalide , svp entrer une autre valeur :  \n ");
    printf("\nturn %d  :",t);
    scanf("%s",n);
      c = n[0];
        c=c-65;
      r = n[1];
    r=r-48;
}

printf("\n\n\n");
system("CLS");

//detection de a qui le tour et remplissage de la grille
if (t%2==0){
if ((n[0]=='P') & (n[1]=='a') & (n[2]=='s') & (n[3]=='s')){score1++;k++;}
if ((n[0]!='P') & ( n[1]!='a') & (n[2]!='s') & (n[3]!='s')& (n[0]!='5')){

k=0;

        board[r][c]='O';
//ajout dans le fichier
fprintf(fpointer,"%c%c\n",n[0],n[1]);



} }
if ( t %  2 == 1){
if ((n[0]=='P') & (n[1]=='a') & (n[2]=='s') & (n[3]=='s')){score2++;k++;}

if ((n[0]!='P') & (n[1]!='a') & (n[2]!='s') & (n[3]!='s')& (n[0]!='5')) {board[r][c]='X';k=0;
fprintf(fpointer,"%c%c\n",n[0],n[1]);
}}

// entrer la valeur 5 pour enregistrer et quitter la partie
/*if (n[0]=='5'){
    fclose(fpointer);
    d=10;
    break;
}*/


if ((n[0]!='P') & (n[1]!='a') & (n[2]!='s') & (n[3]!='s'))
{

//la capture pour les cinqs groupes et l'ajout dans le score

voisinnage(voisin,r,c);
count = count + makecapture(j,t,r,c,board,group);
c=voisin[0]/10;
r=voisin[0]%10;
if((voisin[0] != 999) &(board[r][c] != '*') ){
count = count + makecapture(j,t,r,c,board,group1);}
c=voisin[1]/10;
r=voisin[1]%10;
if ((voisin[1]!= 999 )&(board[r][c] != '*')){
count = count + makecapture(j,t,r,c,board,group2);}
c=voisin[2]/10;
r=voisin[2]%10;
if ((voisin[2]!= 999) &(board[r][c] != '*'))
{
count = count + makecapture(j,t,r,c,board,group3);}
c=voisin[3]/10;
r=voisin[3]%10;
if ( (voisin[3]!= 999 ) &(board[r][c] != '*')){
count = count + makecapture(j,t,r,c,board,group4);}
int c = n[0];
c=c-65;
int r = n[1];
r=r-48;
//detection de a qui appartien le score ajoute si il ya capturation
if ( board[r][c] == 'X'){score1 = score1 + count; }
}
if (board[r][c] == 'O'){score2 = score2 + count; }
count=0;
grille(board);
// on ajoute t pour passer le tour
t++;
Color(15,0);
printf("\n le score 1 est : %d ",score1);
printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   le score 2 est : %d ",score2);
}


// d recoit le 10 si un des joueur veut quitter la partie alors il revient au main menu
if (d == 10){system("CLS");main(1);}
system("CLS");
system("CLS");
//declaration de la fin du jeu + l'affichage du score
printf(" \nLe jeu a terminer xD");
detect_territory(O_territory,X_territory,board);
score1 = score1 + X_territory;
score2 = score2 + O_territory;
}

