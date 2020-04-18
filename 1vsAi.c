#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int UservsAiMonkey(char board[9][9]){
//Declaration des variables
int groupe[60];
int i,j,e,r,c,t,k=0,score1=0,score2=0;
char Player = ' ';
char n[4];
int voisin[4];
int count=0;
// declaration des groupes et initialisation
int group[60];
int group1[60];
int group2[60];
int group3[60];
int group4[60];
//2018 ne signifie rien
for (e=0;e<60;e++){
   group[e]=2018;
   group1[e]=2018;
   group2[e]=2018;
   group3[e]=2018;
   group4[e]=2018;

}

//Remplissage initial de la grille

for (r=0;r<8;r++){
    for (c=0;c<=8;c++){

        board[r][c]='*';

    }
}

//determination d'une valeur aleatoire entre 1 et 2 pour determiner qui commence le premier
int alea1=0;
srand(time(NULL));
alea1=(rand())%2;
if (alea1 == 1){
    e=1;
    printf("l'Ordinateur commence ");
}
else  {e=0; printf("le joueur commence ");}
grille(board);

//debut du jeu , la boucle tourne et arrette si k=2 cad les joueurs entrent pass successivement
while ((k != 2)){

//le tour du joueur
if (e%2 == 0){ Player='X';
printf("\nTon tour : ");
scanf ("%s",n);
printf("\n");

if ( (n[0]=='P') & (n[1]=='a') & (n[2]=='s') & (n[3]=='s')){score1++;k++;}
if ( (n[0]!='P') & ( n[1]!='a') & (n[2]!='s') & (n[3]!='s')){
int c = n[0];
c=c-65;
int r = n[1];
r=r-48;
while ((board[r][c] != '*' )) {

    printf("La valeur que vs avez entrer est invalide , svp entrer une autre valeur :  \n ");
    printf("\Ton tour %d  :");
    scanf("%s",n);
     c = n[0];
        c=c-65;
     r = n[1];
    r=r-48;


}
board[r][c]= Player ;

//le code de la capturation


voisinnage(voisin,r,c);
score1 = score1 +makecapture(j,t,r,c,board,group);



c=voisin[0]/10;
r=voisin[0]%10;
if((voisin[0] != 999) &(board[r][c] != '*') ){

score1 = score1 + makecapture(j,t,r,c,board,group1);}


c=voisin[1]/10;
r=voisin[1]%10;
if ((voisin[1]!= 999 )&(board[r][c] != '*')){




score1 = score1 +makecapture(j,t,r,c,board,group2);}


c=voisin[2]/10;
r=voisin[2]%10;
if ((voisin[2]!= 999) &(board[r][c] != '*'))
{

score1 = score1 +makecapture(j,t,r,c,board,group3);}


c=voisin[3]/10;
r=voisin[3]%10;
if ( (voisin[3]!= 999 ) &(board[r][c] != '*')){






score1 = score1 +makecapture(j,t,r,c,board,group4,score1,score2);}
 }}
if ((e%2 == 1) & (n[0]=='P') & (n[1]=='a') & (n[2]=='s') & (n[3]=='s') ){score2++;k++;}
if ((e%2 == 1) & (n[0]!='P') & ( n[1]!='a') & (n[2]!='s') & (n[3]!='s')){ Player='O';
system("CLS");

// Attribuer des valeurs aleatoires au Ai
srand(time(NULL));
r=(rand())%9;
c=(rand())%9;
while (board[r][c] != '*' ){
srand(time(NULL));
r=(rand())%9;
c=(rand())%9;
}

// des valeur qui sont deja pas prisent :

board[r][c] = 'O' ;
//le code de la capturation


voisinnage(voisin,r,c);
score2 = score2 + makecapture(j,t,r,c,board,group);



c=voisin[0]/10;
r=voisin[0]%10;
if((voisin[0] != 999) &(board[r][c] != '*') ){



score2 = score2 + makecapture(j,t,r,c,board,group1);}


c=voisin[1]/10;
r=voisin[1]%10;
if ((voisin[1]!= 999 )&(board[r][c] != '*')){


score2 = score2 + makecapture(j,t,r,c,board,group2);}


c=voisin[2]/10;
r=voisin[2]%10;
if ((voisin[2]!= 999) &(board[r][c] != '*'))
{

score2 = score2 + makecapture(j,t,r,c,board,group3);}


c=voisin[3]/10;
r=voisin[3]%10;
if ( (voisin[3]!= 999 ) &(board[r][c] != '*')){




score2 = score2 + makecapture(j,t,r,c,board,group4);}

}

e++;
system("CLS");
grille(board);
printf("\n le score 1 est : %d ",score1);
printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t le score 2 est : %d ",score2);
}
//indication que le jeu a terminer .
printf("\nLe jeu a termine ");
return 0;
}






