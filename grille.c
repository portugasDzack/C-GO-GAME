#include <stdio.h>
#include <stdlib.h>
#include <windows.h>




void grille(char board[9][9]){

Color(7,0);
int r,c;
char player = ' ';
char lettres[]="\t\t\t\t\t\t\t\t    A        B        C        D        E        F        G        H        I ";
printf("\n");
puts(lettres);
Color(4,0);
printf("\n");

for (r=0;r<=8;r++){
    for (c=0;c<=8;c++){
       if (c==0){

            Color(7,0);
            if ((c==0)&(r==3))
            {printf("entrer 7 pour terminer le jeu \t\t\t\t\t%d ",r);}
            if ((c==0)&(r!=3))
            {printf("\t\t\t\t\t\t\t\t%d ",r);}
            Color(4,0);
            if (board[r][c]=='X')
           { Color(3,0);printf("  %c",board[r][c]);Color(4,0);printf("----");}
           if (board[r][c]=='O')
           { Color(14,0);printf("  %c",board[r][c]);Color(4,0);printf("----");}
           if (board[r][c]=='*')
           { Color(4,0);printf("  %c",board[r][c]);Color(4,0);printf("----");}

        }
             if (c==8){
                     if (board[r][c]=='X')
           {printf("----");Color(3,0);printf("%c",board[r][c]);Color(4,0);}
               if (board[r][c] =='O')
           {printf("----");Color(14,0);printf("%c",board[r][c]);Color(4,0);}
           if (board[r][c]=='*')
           {printf("----");Color(4,0);printf("%c",board[r][c]);Color(4,0);}

         }
         if (c>0 & c<8){
             if (board[r][c]=='X')  {
             printf("----");Color(3,0);printf("%c",board[r][c]);Color(4,0);printf("----");}
             if (board[r][c]=='O'){
             printf("----");Color(14,0);printf("%c",board[r][c]);Color(4,0);printf("----");}
             if (board[r][c]=='*')  {
             printf("----");Color(4,0);printf("%c",board[r][c]);Color(4,0);printf("----");}




               }
    }


        if (r!=8){
         printf("\n");
         printf("\t\t\t\t\t\t\t\t    |        |        |        |        |        |        |        |        |");
         printf("\n");
         printf("\t\t\t\t\t\t\t\t    |        |        |        |        |        |        |        |        |");
         printf("\n");
         printf("\t\t\t\t\t\t\t\t    |        |        |        |        |        |        |        |        |");
         printf("\n");

         }

    }


}



