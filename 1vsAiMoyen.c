#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>


void UservsAiMoyen(char board[9][9]){


//Declaration des variables

int groupe[60];

int i,j,e,r,c,t,k=0,h=0,a,b,count=0;
char Player = ' ';
char n[4];
int o;
int voisinsdef[4];
int f;
int score1=0;
int score2=0;


int voisin[4];
// declaration des groupes et initialisation
int group[60];
int group1[60];
int group2[60];
int group3[60];
int group4[60];

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

int alea1=0;
srand(time(NULL));
alea1=(rand())%2;

if (alea1 == 1){
    e=1;
    system("CLS");
    printf("l'Ordinateur commence ");
}
else  {e=0;
system("CLS");
printf("le joueur commence ");}
grille(board);


while( (k!=2) ){


//Le joueur

if (e%2 == 0){ Player='X';
printf("\nTon tour : ");
scanf ("%s",n);
printf("\n");
if ( (n[0]=='P') & (n[1]=='a') & (n[2]=='s') & (n[3]=='s')){score1++;k++;}
if ( (n[0]!='P') & ( n[1]!='a') & (n[2]!='s') & (n[3]!='s')) {
int c = n[0];
c=c-65;
int r = n[1];
r=r-48;
/*while ((board[r][c] != '*' )) {

    printf("La valeur que vs avez entrer est invalide , svp entrer une autre valeur :  \n ");
    printf("Tontour %d  :");
    scanf("%s",n);
     c = n[0];
        c=c-65;
     r = n[1];
    r=r-48;


}*/
board[r][c]= 'X' ;
//le code de la capturation
voisinnage(voisin,r,c);
score1 = score1 + makecapture(j,t,r,c,board,group);



c=voisin[0]/10;
r=voisin[0]%10;
if((voisin[0] != 999) &(board[r][c] != '*') ){



score1 = score1 + makecapture(j,t,r,c,board,group1);}


c=voisin[1]/10;
r=voisin[1]%10;
if ((voisin[1]!= 999 )&(board[r][c] != '*')){




score1 = score1 + makecapture(j,t,r,c,board,group2);}


c=voisin[2]/10;
r=voisin[2]%10;
if ((voisin[2]!= 999) &(board[r][c] != '*'))
{

score1 = score1 + makecapture(j,t,r,c,board,group3);}


c=voisin[3]/10;
r=voisin[3]%10;
if ( (voisin[3]!= 999 ) &(board[r][c] != '*')){


score1 = score1 + makecapture(j,t,r,c,board,group4);}
 } }
// l'ordinateur
if ((e%2 == 1) & (n[0]=='P') & (n[1]=='a') & (n[2]=='s') & (n[3]=='s') ){score2++;k++;}
if ((e%2 == 1)){ Player='O';
system("CLS");

//si l'ordinateur est perdant , il defend
if (score1 < score2){
    //AIsmartDefence(o,board);


a = o%10;
b = o/10;
voisinnage(voisinsdef,a,b);
printf("on est dans l' ai smart");
for (f=0;f<4;f++){

        b = voisinsdef[f]/10;printf("la valeur de b : %d",b);
        a = voisinsdef[f]%10;printf("la valeur de a : %d",a);

    if ((board[a][b] == '*') & (voisinsdef[f] != 999) ){
        o = a + b * 10;
        board[a][b] = 'O'; r=a ; c=b;
        break;
    }

}
}

//si il gagne il pose les points strategiques
if (score1 >= score2){
     printf("le tour de l ordi");




if ( (h==0) & (board[0][0] == '*')) {board[0][0] = 'O' ; h = 1; r=0;c=0;}
if ( (h==0) & (board[8][0] == '*')) {board[8][0] = 'O' ; h = 1; r=8;c=0;}
if ( (h==0) & (board[0][8] == '*')) {board[0][8] = 'O' ; h = 1; r=0;c=8;}
if ( (h==0) & (board[8][8] == '*')) {board[8][8] = 'O' ; h = 1; r=8;c=8;}

/* teste les bords non adjacents aux coins : */
for (i=2;i<=5;i++) {if ( (h==0) & (board[i][0] == '*')) {board[i][0] = 'O' ; h = 1; r=i;c=0;}}
for (i=2;i<=5;i++) {if ( (h==0) & (board[i][8] == '*')) {board[i][8] = 'O' ; h = 1; r=i;c=8;}}
for (i=2;i<=5;i++) {if ( (h==0) & (board[0][i] == '*')) {board[0][i] = 'O' ; h = 1; r=0;c=i;}}
for (i=2;i<=5;i++) {if ( (h==0) & (board[8][i] == '*')) {board[7][i] = 'O' ; h = 1; r=8;c=i;}}

/* teste les cases centrales : */
for (i=2;i<=5;i++)
 { for (j=2;j<=5;j++) {
if ( (h==0) & (board[i][j] == '*')) {board[i][j] = 'O' ; h = 1; r=i;c=j; } }}

/* teste les cases lignes 1 et 7 et colonnes 1 et 7 : */

for (i=2;i<=5;i++) {if ( (h==0) & (board[i][1] == '*')) {board[i][1] = 'O' ; h = 1; r=i;c=1;}}
for (i=2;i<=5;i++) {if ( (h==0) & (board[i][7] == '*')) {board[i][7] = 'O' ; h = 1; r=i;c=7;}}
for (i=2;i<=5;i++) {if ( (h==0) & (board[1][i] == '*')) {board[1][i] = 'O' ; h = 1; r=1;c=i;}}
for (i=2;i<=5;i++) {if ( (h==0) & (board[7][i] == '*')) {board[7][i] = 'O' ; h = 1; r=7;c=i;}}


/* en dernier recourt, teste les cases adjacentes aux coins */
if ( (h==0) & (board[1][0] == '*')) {board[1][0] = 'O' ; h = 1; r=1;c=0;}
if ( (h==0) & (board[0][1] == '*')) {board[0][1] = 'O' ; h = 1; r=0;c=1;}
if ( (h==0) & (board[6][0] == '*')) {board[7][0] = 'O' ; h = 1; r=7;c=0;}
if ( (h==0) & (board[0][6] == '*')) {board[0][7] = 'O' ; h = 1; r=0;c=7;}
if ( (h==0) & (board[7][1] == '*')) {board[8][1] = 'O' ; h = 1; r=8;c=1;}
if ( (h==0) & (board[1][7] == '*')) {board[1][8] = 'O' ; h = 1; r=1;c=8;}
if ( (h==0) & (board[6][7] == '*')) {board[7][8] = 'O' ; h = 1; r=7;c=8;}
if ( (h==0) & (board[7][6] == '*')) {board[8][7] = 'O' ; h = 1; r=8;c=7;}

if ( (h==0) & (board[1][1] == '*')) {board[1][1] = 'O' ; h = 1; r=1;c=1;}
if ( (h==0) & (board[6][1] == '*')) {board[7][1] = 'O' ; h = 1; r=7;c=1;}
if ( (h==0) & (board[1][6] == '*')) {board[1][7] = 'O' ; h = 1; r=1;c=7;}
if ( (h==0) & (board[6][6] == '*')) {board[7][7] = 'O' ; h = 1; r=7;c=7;}

o = r + c * 10;

}
h=0;
}
/*
a=r;
b=c;*/

voisinnage(voisin,r,c);
c=voisin[0]/10;
r=voisin[0]%10;
if((voisin[0] != 999) &(board[r][c] != '*') ){



count = count + makecapture(j,t,r,c,board,group1);}


c=voisin[1]/10;
r=voisin[1]%10;
if ((voisin[1]!= 999 )&(board[r][c] != '*')){




count = count +  makecapture(j,t,r,c,board,group2);}


c=voisin[2]/10;
r=voisin[2]%10;
if ((voisin[2]!= 999) &(board[r][c] != '*'))
{

count = count + makecapture(j,t,r,c,board,group3);}


c=voisin[3]/10;
r=voisin[3]%10;
if ( (voisin[3]!= 999 ) &(board[r][c] != '*')){




count = count + makecapture(j,t,r,c,board,group4);}

if ( board[a][b] == 'X'){score1 = score1 + count; }

if (board[a][b] == 'O'){score2 = score2 + count; }
count=0;

system("CLS");
grille(board);
printf("\n le score 1 est : %d ",score1);
printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t le score 2 est : %d ",score2);
e++;


}




}
