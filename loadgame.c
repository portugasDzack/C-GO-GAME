#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void uservuser(char board[9][9]){


//l'autorisation de lecture des caracteres ASCII

//la declaration des variables
system("chcp 65001  > nul");
int O_territory,X_territory;
char player1='O'; int score1=0;
char player2='X'; int score2=0;
int i=0,r,c,t=0,e=0,count=0,d;
char n[4];




for (r=0;r<8;r++){
    for (c=0;c<=8;c++){

        board[r][c]='*';

    }


}

grille(board);
//l'intitialisation des groupes de capture et leurs remplissage , cing groupes chacun pour un voisin et le cinquieme pour le pion entre
int group[60];
int group1[60];
int group2[60];
int group3[60];
int group4[60];
int j,k=0;
j =0;
r = 1;
c = 5;

for (e=0;e<60;e++){
   group[e]=2018;
   group1[e]=2018;
   group2[e]=2018;
   group3[e]=2018;
   group4[e]=2018;

}
int voisin[4];

FILE * fpointer;
char *timevalue;
timevalue = timefct();
int len=strlen(timevalue);
for (i=0;i<len;i++){
    if (timevalue[i]=='\n'){timevalue[i]='p';}
     if (timevalue[i]==':'){timevalue[i]='_';}
}
//la fonction qui donne le nom du fichier cree
strcat(timevalue ,".txt");
const char*b=timevalue;
char g[25]=".//saves//";
strcat(g,b);

//creation du fichier
fpointer = fopen(g,"w");


//debut du jeu
while ((k != 2)){
    printf("\n");
    printf("\n");


     printf("\nturn %d  :",t);
     scanf("%s",n);








int c = n[0];
c=c-65;
int r = n[1];
r=r-48;


//le test si la valeur est valide
while ((board[r][c] != '*' )) {

    printf("La valeur que vs avez entrer est invalide , svp entrer une autre valeur :  \n ");
    printf("\nturn %d  :",t);
    scanf("%s",n);
     c = n[0];
        c=c-65;
     r = n[1];
    r=r-48;


}
printf("\n");
printf("\n");
printf("\n");
system("CLS");
if (t%2==0){
if ((n[0]=='P') & (n[1]=='a') & (n[2]=='s') & (n[3]=='s')){score1++;k++;}
if ((n[0]!='P') & ( n[1]!='a') & (n[2]!='s') & (n[3]!='s') & (n[0]!='5')){board[r][c]='O';

//ajout dans le fichier
fprintf(fpointer,"%c%c\n",n[0],n[1]);


} }
if ( t %  2 == 1){
if ((n[0]=='P') & (n[1]=='a') & (n[2]=='s') & (n[3]=='s')){score2++;k++;}

if ((n[0]!='P') & (n[1]!='a') & (n[2]!='s') & (n[3]!='s') & (n[0]!='5')) {board[r][c]='X';
fprintf(fpointer,"%c%c\n",n[0],n[1]);
}}


if (n[0]=='5'){

    fclose(fpointer);
    d=10;

    break;

}

if ((n[0]!='P') & (n[1]!='a') & (n[2]!='s') & (n[3]!='s'))
{



//la capturation

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

if ( board[r][c] == 'X'){score1 = score1 + count; }
}
if (board[r][c] == 'O'){score2 = score2 + count; }
count=0;

grille(board);



t++;
Color(15,0);
// le score
printf("\n le score 1 est : %d ",score1);
printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   le score 2 est : %d ",score2);
}

if (d==10){system("CLS");main(1);}
system("CLS");
//fin de jeu et affichage du score
printf(" \nLe jeu a terminer xD");
detect_territory(O_territory,X_territory,board);
score1 = score1 + X_territory;
score2 = score2 + O_territory;

}
