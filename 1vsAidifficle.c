#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void UservsAidifficile(char board[9][9]){


//Declaration des variables

int groupe[60];

int i,j,e,r,a,b,c,t,k=0,h=0,count=0;
char Player = ' ';
char n[4];
int o;

int score1 = 10;
int score2 = 8;

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


while (k!=2){


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
while ((board[r][c] != '*' )) {
    printf("la valeur de r est : %d ",r);
    printf("la valeur de c est : %d ",c);
    printf("La valeur que vs avez entrer est invalide , svp entrer une autre valeur :  \n ");
    printf("Tontour %d  :");
    scanf("%s",n);
     c = n[0];
        c=c-65;
     r = n[1];
    r=r-48;
    printf("la valeur de r est : %d ",r);
    printf("la valeur de c est : %d ",c);

}
board[r][c]= Player ;

 }
}

// l'ordinateur
if ((e%2 == 1) & (n[0]=='P') & (n[1]=='a') & (n[2]=='s') & (n[3]=='s') ){score2++;k++;}
if ((e%2 == 1) & (n[0]!='P') & ( n[1]!='a') & (n[2]!='s') & (n[3]!='s')){ Player='O';
system("CLS");

//si l'ordinateur est perdant , il attacke
if (score1 > score2){
    AIsmartAttack(o,board);
}
//si lordinateur est gangnant il defend
if (score1 < score2){
    AIsmartDefence(o,board);
}
//s'il y a egalite il prend les points strategiques
if (score1 == score2){
/* teste les 4 coins : */
strategicpoints(o,board,r,c);
}
}
h=0;

//le code de la capturation

a=r;
b=c;

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
