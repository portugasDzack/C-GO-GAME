#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <dirent.h>





//ce fichier contient les fonctions support que le code utilise




//la fonction qui donne le couleur

void Color(int Textcolor , int BackgroundColor){
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,BackgroundColor*16+Textcolor);

}

//la fonction de l'aleatoire

void AIdumb(char board[9][9],int o){
int r,c;
srand(time(NULL));
r=(rand())%9;
c=(rand())%9;
while (board[r][c] != '*' ){
srand(time(NULL));
r=(rand())%9;
c=(rand())%9;
}
printf("%d%d",r,c);
o = (r + c*10 );
board[r][c] = 'O';
}

//la fonction de l'intelligence qui permet d'atatcker

void AIsmartAttack(int o,char board[9][9],char n[3]){
int a,b,f;
int voisinsatt[4];
int c = n[0];
c=c-65;
int r = n[1];
r=r-48;
voisinnage(voisinsatt,r,c);
printf("on est dans l' ai smart");
for (f=0;f<4;f++){

        b = voisinsatt[f]/10;
        a  = voisinsatt[f]%10;
    if ((board[a][b] == '*') & (voisinsatt[f] != 999) ){
        o = (a + b*10 );
        board[a][b] = 'O';
        break;
    }

}
}

//la fonction de l'intelligence qui permet le defence
void AIsmartDefence(int o,char board[9][9]){
int a,b,f;
int voisinsdef[4];
a=o%10;
b=o/10;
voisinnage(voisinsdef,a,b);
printf("on est dans l' ai smart");
for (f=0;f<4;f++){

        b = voisinsdef[f]/10;
        a = voisinsdef[f]%10;
    if ((board[a][b] == '*') & (voisinsdef[f] != 999) ){
        o = (a + b*10 );
        board[a][b] = 'O';
        break;
    }

}
}


//la fonction qui donne les points strqtegiques

void strategicpoints(int o,char board[9][9],int r,int c){

int h=0,i,j;

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


//la fonction qui determine le territoire
void detect_territory(int O_territory,int X_territory,char board[9][9])
{


     int voisins[4];
     int r,c,i;

   for (r=0;r<9;r++){
    for (c=0;c<9;c++){
            if (board[r][c]='*')
            {
               voisinnage( voisins,r,c);
               for (i=0;i<4;i++){ if (board[voisins[i]%10][voisins[i]/10]== 'O'){ O_territory++ ; break; }
                                  if (board[voisins[i]%10][voisins[i]/10]== 'X'){ X_territory++ ; break; }

}
}
}
}
}

//la fonction qui donne le temps

char timefct()
{
    time_t current_time;
    char* c_time_string;

    /* Obtain current time. */
    current_time = time(NULL);

    if (current_time == ((time_t)-1))
    {
        (void) fprintf(stderr, "Failure to obtain the current time.\n");
        exit(EXIT_FAILURE);
    }

    /* Convert to local time format. */
    c_time_string = ctime(&current_time);

    if (c_time_string == NULL)
    {
        (void) fprintf(stderr, "Failure to convert the current time.\n");
        exit(EXIT_FAILURE);
    }

    /* Print to stdout. ctime() has already added a terminating newline character. */
   // (void) printf("Current time is %s", c_time_string);
    return c_time_string;
}



//la fonction qui apporte les fichiers deja enregistre

void getsaved(){


DIR *dir;
struct dirent *ent;
int a=1;


if ((dir = opendir ("C:\\Users\\Apollo\\Desktop\\jeugo\\saves\\")) != NULL) {

         system("CLS");
         logo();
         printf("\n\n\n");
         printf("\t\t\t\t\t\t\t\t+----------------------------------------------------------------+\n");
printf("\t\t\t\t\t\t\t\t*                                                                *\n");
  // print all the files and directories within directory
  while ((ent = readdir (dir)) != NULL) {

        if ( (a !=1 ) & ( a != 2) )
       {
        printf ("\t\t\t\t\t\t\t\t*       %d |  %s                       *\n",a-2, ent->d_name);
    }
    a++;
  }
  printf("\t\t\t\t\t\t\t\t*                                                                *\n");
  printf("\t\t\t\t\t\t\t\t+----------------------------------------------------------------+\n");
  closedir (dir);
} /*else {
  // could not open directory
  perror ("");
  return EXIT_FAILURE;
}*/
}


//la fonction qui charger le fichier choisie
void loadsaved(n){

int r,c;
    char board[10][10];

for (r=0;r<9;r++){
    for (c=0;c<=9;c++){

        board[r][c]='*';

    }
}
int a=1;
DIR *dir;

struct dirent *ent;
if ((dir = opendir ("C:\\Users\\Apollo\\Desktop\\jeugo\\saves")) != NULL) {
        system("CLS");
  /* print all the files and directories within directory */
  while ((ent = readdir (dir)) != NULL) {

       if ( (a !=1 ) & ( a != 2) )
     {
         if ((a-2)== n) {

         uservuserload(board,ent->d_name);

         }
     }
    a++;
  }
  closedir (dir);
} else {
  /* could not open directory */
  perror ("");
  return EXIT_FAILURE;
}



}


//la fonction qui determine si la valeur entre est valide

char valide(char board[9][9],int r , int c , int t ,char n[4]){
int d;
while ((board[r][c] != '*' )) {
    printf("la valeur de r est : %d ",r);
    printf("la valeur de c est : %d ",c);
    printf("La valeur que vs avez entrer est invalide , svp entrer une autre valeur :  \n ");
    printf("\nturn %d  :",t);
    scanf("%s",n);
      c = n[0];
        c=c-65;
      r = n[1];
    r=r-48;
    printf("la valeur de r est : %d ",r);
    printf("la valeur de c est : %d ",c);

}
d=r+c*10;
return n;
}

