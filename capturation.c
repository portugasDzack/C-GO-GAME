
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
/*
void make(int r , int c , char board[9][9]){
    int e,j,t;
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
int voisin[4];
voisinnage(voisin,r,c);
makecapture(j,t,r,c,board,group);
//printf("%d%d",c,r);


c=voisin[0]/10;
r=voisin[0]%10;
if((voisin[0] != 999) &(board[r][c] != '*') ){

//printf("%d",voisin[0]);

makecapture(j,t,r,c,board,group1);}


c=voisin[1]/10;
r=voisin[1]%10;
if ((voisin[1]!= 999 )&(board[r][c] != '*')){


//printf("%d",voisin[1]);

makecapture(j,t,r,c,board,group2);}


c=voisin[2]/10;
r=voisin[2]%10;
if ((voisin[2]!= 999) &(board[r][c] != '*'))
{
//printf("%d",voisin[2]);
makecapture(j,t,r,c,board,group3);}


c=voisin[3]/10;
r=voisin[3]%10;
if ( (voisin[3]!= 999 ) &(board[r][c] != '*')){


//printf("%d",voisin[3]);



makecapture(j,t,r,c,board,group4);}


}
*/




//la fonction qui donne les voisins , la valeur 999 ne signifie rien mais elle est donner ou il ya pas de voisin
void voisinnage(int voisinage[4],int r, int c ){


        //Pas la première ligne
        if (r != 0){
            voisinage[0]= (r-1)+c*10;
        }
        if (r == 0){
            voisinage[0]= 999;
        }
        //Pas la première colonne
        if (c != 0){
            voisinage[1]= r+(c-1)*10;
        }
        if (c == 0){
            voisinage[1]= 999;
        }
        //Pas la dernière ligne
        if (r != 8 ){
            voisinage[2]= (r+1)+c*10;}
        if (r == 8 ){
            voisinage[2]= 999;}
        // Pas la première colonne
        if (c !=8 ){
            voisinage[3]= r+(c+1)*10;
            }
         if (c ==8 ){
            voisinage[3]= 999;
            }
}


//la vfonction qui detecte si un element est deja dans le groupe pour ne pas le ajouter deux fois

void ingrp(int d,int A ,int groupe[60]){

int i;
d=0;
   for (i=0;i<60;i++){

    if (A ==groupe[i])
        {   d=1 ;
            break;
    }

}

}





// detecter les groupes des pionts du meme equipe et qui sont liee

void detectgrp(int j ,int t ,int r, int c , char board[9][9],int group[60]){

int voisinage[4];

int i=0,k=0,a,d=0;

int div;
char player=' ';
char g[60][2];
if (t%2==0){player ='O';}
if (t%2==1){player ='X ';}
//l'ajout du piont de coordonnes r et c dans la position 58 ,
group[58]= r+c*10;
voisinnage(voisinage,r,c);
//si on veut afficher les voisinnages
for (i=0;i<4;i++){
        for (k=0;k<60;k++){
                //si l'elemt et deja dans le groupe , on sort
    if ((voisinage[i] == group[k])  & voisinage[i] != 999 )
        {   d=1 ;
            break;
    }
}
        div=voisinage[i]/10;
        a=voisinage[i]%10;
        if ( (voisinage[i] != 999 ) & (board[a][div] == board[r][c] ) & (d != 1) & (board[a][div] != '*' ) ) {

            // itoa pour convertir un int en char

            itoa(voisinage[i],g[j],10);
            group[j]= voisinage[i];
            j=j+1;
            r = a;
            c = div;
            detectgrp(j,t,r,c,board,group);
        }
}
}

//la fonction qui execute la capture et utilise tous les autres fcts definie en haut
int makecapture(int j ,int t ,int r, int c , char board[9][9],int group[60]){
    //declaration des variables
int d = 0;
int p;
int count = 0 ;
int f=0;
int h;
int test[4];
int div;
int a;
//detection du groupe

detectgrp(j,t,r,c,board,group);

// on detect d'abord la longueur et on le stocke dans la variable count
for (p=0;p<60;p++){
  if (group[p]!= 2018){
        count++;
    }
}
for (p=0;p<count-1;p++){
        c=group[p]/10;
        r=group[p]%10;
        voisinnage(test,r,c);
        for(h=0;h<4;h++){
                div=test[h]/10;
                a=test[h]%10;
            if (board[a][div] == '*' ){
              f =  1;
              break;
            }
        }
        if (f==1){break;}
}
//le cas de r,c :
c=group[58]/10;
r=group[58]%10;
voisinnage(test,r,c);
for(h=0;h<4;h++){
                div=test[h]/10;
                a=test[h]%10;
            if (board[a][div] == '*' ){
              f = 1;
              break;
            }
             }
if (f==1){
   /*printf("pas de capture");*/
}
if (f==0){
   /* printf("il faut capturer");*/
   if ( count == 1){d=1;}
    if(count > 1) {d = count - 1;}
    for (p=0;p<count-1;p++){
        c=group[p]/10;
        r=group[p]%10;
        board[r][c] ='*';
  }
  board[group[58]%10][group[58]/10]='*';
}
// return le nombre des pieces captures
for (p=0;p<60;p++){
   group[p]=2018;}
   return d;
}
