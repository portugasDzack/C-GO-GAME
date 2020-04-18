#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int i=0;

int main(i)
{


    system("chcp 65001  > nul");
    int r,c;
    char board[10][10];

for (r=0;r<9;r++){
    for (c=0;c<=9;c++){

        board[r][c]='*';

    }


}
int n;


if( i == 1)
{
    /* Ajouter une musique de démarrage*/
    /*PlaySound(TEXT("music.wav"), NULL, SND_ASYNC); */}
printf("\n");
printf("\n");
printf("\n");
/*printf("\t\t\t\t\t\t\t\t+----------------------------------------------------------------+\n");
Color(4,0);
printf("\t\t\t\t\t\t\t\t|       # ####### #     #");
Color(2,0);
printf("    ######  #######");
Color(5,0);
printf("    #####   #######  |\n");
Color(4,0);
printf("\t\t\t\t\t\t\t\t|       # #       #     #");
Color(2,0);
printf("    #     # #          ");
Color(5,0);
printf("#     # #     #  |\n");
Color(12,0);
printf("\t\t\t\t\t\t\t\t|       # #       #     #");
Color(10,0);
printf("    #     # #          ");
Color(13,0);
printf("#       #     #  |\n");
Color(12,0);
printf("\t\t\t\t\t\t\t\t|       # #####   #     #    ");
Color(10,0);
printf("#     # #####      ");
Color(13,0);
printf("#  #### #     #  |\n");
Color(12,0);
printf("\t\t\t\t\t\t\t\t| #     # #       #     #    ");
Color(10,0);
printf("#     # #          ");
Color(13,0);
printf("#     # #     #  |\n");
Color(4,0);
printf("\t\t\t\t\t\t\t\t| #     # #       #     #    ");
Color(2,0);
printf("#     # #          ");
Color(5,0);
printf("#     # #     #  |\n");
Color(4,0);
printf("\t\t\t\t\t\t\t\t|  #####  #######  #####     ");
Color(2,0);
printf("######  #######     ");
Color(5,0);
printf("#####  #######  |\n");
printf("\t\t\t\t\t\t\t\t+----------------------------------------------------------------+\n"); Color(14,0);*/
logo();
printf("\t\t\t\t\t\t\t\t\t| Developped by : KHALIL zakaria & Rami rachid  |\n");
printf("\t\t\t\t\t\t\t\t\t+-----------------------------------------------+\n");

Color(4,0);
printf("\n");
printf("\n");
printf("\n");
printf("\t\t\t\t\t\t\t\t+----------------------------------------------------------------+\n");
printf("\t\t\t\t\t\t\t\t*               |                                                *\n");
printf("\t\t\t\t\t\t\t\t*       ");
Color(14,0);
printf("ID");
Color(4,0);
printf("      |           ");
Color(3,0);
printf("MENU");
Color(4,0);
printf("                                 *\n");
printf("\t\t\t\t\t\t\t\t*               |                                                *\n");
printf("\t\t\t\t\t\t\t\t+----------------------------------------------------------------+\n");
printf("\t\t\t\t\t\t\t\t*                                                                *\n");
printf("\t\t\t\t\t\t\t\t*       "); Color(14,0);
printf("1");
printf(" >");Color(4,0);
printf("     |");Color(3,0);
printf("           Commencer la partie");Color(4,0);
printf("                  *\n");
//2eme ligne
printf("\t\t\t\t\t\t\t\t*       "); Color(14,0);
printf("2");
printf(" >");Color(4,0);
printf("     |");Color(3,0);
printf("           Resoudre un probleme");Color(4,0);
printf("                 *\n");
//3eme ligne
printf("\t\t\t\t\t\t\t\t*       "); Color(14,0);
printf("3");
printf(" >");Color(4,0);
printf("     |");Color(3,0);
printf("           Les regles du jeu");Color(4,0);
printf("                    *\n");
//4eme ligne
printf("\t\t\t\t\t\t\t\t*       "); Color(14,0);
printf("4");
printf(" >");Color(4,0);
printf("     |");Color(3,0);
printf("           Parametres");Color(4,0);
printf("                           *\n");
printf("\t\t\t\t\t\t\t\t*       "); Color(14,0);
printf("5");
printf(" >");Color(4,0);
printf("     |");Color(3,0);
printf("           Quitter");Color(4,0);
printf("                              *\n");
printf("\t\t\t\t\t\t\t\t*                                                                *\n");
printf("\t\t\t\t\t\t\t\t+----------------------------------------------------------------+\n");

printf("\n");
printf("\n");
printf("\n");
printf("Choisir un ID  -->   ");
scanf("%d",&n);

switch(n) {

   case 1  :
       system("CLS");
       logo();
       printf("\t\t\t\t\t\t\t\t\t| Developped by : KHALIL zakaria & Rami rachid  |\n");
printf("\t\t\t\t\t\t\t\t\t+-----------------------------------------------+\n");
       Color(4,0);
printf("\n");
printf("\n");
printf("\n");
       printf("\t\t\t\t\t\t\t\t+----------------------------------------------------------------+\n");
printf("\t\t\t\t\t\t\t\t*                                                                *\n");
printf("\t\t\t\t\t\t\t\t*       "); Color(14,0);
printf("1");
printf(" >");Color(4,0);
printf("     |");Color(3,0);
printf("           Jouer contre utilisateur");Color(4,0);
printf("             *\n");
//2eme ligne
printf("\t\t\t\t\t\t\t\t*       "); Color(14,0);
printf("2");
printf(" >");Color(4,0);
printf("     |");Color(3,0);
printf("           Jouer contre ordinateur");Color(4,0);
printf("              *\n");
printf("\t\t\t\t\t\t\t\t*       "); Color(14,0);
printf("3");
printf(" >");Color(4,0);
printf("     |");Color(3,0);
printf("           Retour vers le menu ");Color(4,0);
printf("                 *\n");
printf("\t\t\t\t\t\t\t\t*                                                                *\n");
printf("\t\t\t\t\t\t\t\t+----------------------------------------------------------------+\n");
printf("\n");
printf("\n");
printf("\n");
printf("Choisir un ID  -->   ");
       scanf("%d",&n);
       if (n==1)
          {
              system("CLS");
              printf("\n");
              logo();
              printf("\t\t\t\t\t\t\t\t\t| Developped by : KHALIL zakaria & Rami rachid  |\n");
              printf("\t\t\t\t\t\t\t\t\t+-----------------------------------------------+\n");
              Color(4,0);
              printf("\n");
printf("\n");
printf("\n");

             printf("\t\t\t\t\t\t\t\t+----------------------------------------------------------------+\n");
printf("\t\t\t\t\t\t\t\t*                                                                *\n");
printf("\t\t\t\t\t\t\t\t*       "); Color(14,0);
printf("1");
printf(" >");Color(4,0);
printf("     |");Color(3,0);
printf("           Nouvelle partie");Color(4,0);
printf("                      *\n");
//2eme ligne
printf("\t\t\t\t\t\t\t\t*       "); Color(14,0);
printf("2");
printf(" >");Color(4,0);
printf("     |");Color(3,0);
printf("           charger une partie");Color(4,0);
printf("                   *\n");
printf("\t\t\t\t\t\t\t\t*       "); Color(14,0);
printf("3");
printf(" >");Color(4,0);
printf("     |");Color(3,0);
printf("           retour");Color(4,0);
printf("                               *\n");
printf("\t\t\t\t\t\t\t\t*                                                                *\n");
printf("\t\t\t\t\t\t\t\t+----------------------------------------------------------------+\n");
                printf("\n");

             printf("\n");
             printf("Choisir un ID  -->   ");
             scanf("%d",&n);

             if (n==1){system("CLS");

              uservuser(board);}
             if (n==2){


                getsaved();
                printf("\n");
                printf("Choisir un ID  -->   ");
                scanf("%d",&n);
                loadsaved(n);



                n=100;

             }
             if(n ==3){ system("CLS"); main(1);}
              }


       if (n==2)
         {    system("CLS");
              logo();
              printf("\t\t\t\t\t\t\t\t\t| Developped by : KHALIL zakaria & Rami rachid  |\n");
printf("\t\t\t\t\t\t\t\t\t+-----------------------------------------------+\n");
              Color(4,0);
              printf("\n");
printf("\n");
printf("\n");

             printf("\t\t\t\t\t\t\t\t+----------------------------------------------------------------+\n");
printf("\t\t\t\t\t\t\t\t*                                                                *\n");
printf("\t\t\t\t\t\t\t\t*       "); Color(14,0);
printf("1");
printf(" >");Color(4,0);
printf("     |");Color(3,0);
printf("           Niveau Débutant");Color(4,0);
printf("                       *\n");
//2eme ligne
printf("\t\t\t\t\t\t\t\t*       "); Color(14,0);
printf("2");
printf(" >");Color(4,0);
printf("     |");Color(3,0);
printf("           Niveau Facile");Color(4,0);
printf("                        *\n");
//3eme ligne
printf("\t\t\t\t\t\t\t\t*       "); Color(14,0);
printf("3");
printf(" >");Color(4,0);
printf("     |");Color(3,0);
printf("           Niveau Moyen");Color(4,0);
printf("                         *\n");
//4eme ligne
printf("\t\t\t\t\t\t\t\t*       "); Color(14,0);
printf("4");
printf(" >");Color(4,0);
printf("     |");Color(3,0);
printf("           niveau diificile");Color(4,0);
printf("                     *\n");
printf("\t\t\t\t\t\t\t\t*       "); Color(14,0);
printf("5");
printf(" >");Color(4,0);
printf("     |");Color(3,0);
printf("           Niveau Expert");Color(4,0);
printf("                        *\n");
printf("\t\t\t\t\t\t\t\t*       "); Color(14,0);
printf("6");
printf(" >");Color(4,0);
printf("     |");Color(3,0);
printf("           retour");Color(4,0);
printf("                               *\n");
printf("\t\t\t\t\t\t\t\t*                                                                *\n");
printf("\t\t\t\t\t\t\t\t+----------------------------------------------------------------+\n");
             printf("\n");

             printf("\n");
             printf("Choisir un ID  -->   ");
             scanf("%d",&n);


             if (n==1)
              {
                system("CLS");
                UservsAiMonkey(board);
              }
            if (n==2)
              {
             system("CLS");
             UservsAiFacile(board);
              }
            if (n==3)
              {
             system("CLS");
             UservsAiMoyen(board);
              }
              if (n==4)
              {
             system("CLS");
             UservsAidifficile(board);
              }
              if (n==5)
              {
             system("CLS");
             UservsAiExpert(board);
              }
               if(n == 6){
        system("CLS");
        main(1);

       }
         }
          if(n == 3){
        system("CLS");
        main(1);
       }

       break; /* optional */

   case 2  :
       system("CLS");
              logo();
              printf("\t\t\t\t\t\t\t\t\t| Developped by : KHALIL zakaria & Rami rachid  |\n");
printf("\t\t\t\t\t\t\t\t\t+-----------------------------------------------+\n");
              Color(4,0);
              printf("\n");
printf("\n");
printf("\n");

             printf("\t\t\t\t\t\t\t\t+----------------------------------------------------------------+\n");
printf("\t\t\t\t\t\t\t\t*                                                                *\n");
printf("\t\t\t\t\t\t\t\t*       "); Color(14,0);
printf("1");
printf(" >");Color(4,0);
printf("     |");Color(3,0);
printf("           Probleme 1");Color(4,0);
printf("                           *\n");
//2eme ligne
printf("\t\t\t\t\t\t\t\t*       "); Color(14,0);
printf("2");
printf(" >");Color(4,0);
printf("     |");Color(3,0);
printf("           Probleme 2");Color(4,0);
printf("                           *\n");
//3eme ligne
printf("\t\t\t\t\t\t\t\t*       "); Color(14,0);
printf("3");
printf(" >");Color(4,0);
printf("     |");Color(3,0);
printf("           Probleme 3");Color(4,0);
printf("                           *\n");
//4eme ligne
printf("\t\t\t\t\t\t\t\t*       "); Color(14,0);
printf("4");
printf(" >");Color(4,0);
printf("     |");Color(3,0);
printf("           Probleme 4");Color(4,0);
printf("                           *\n");
printf("\t\t\t\t\t\t\t\t*       "); Color(14,0);
printf("5");
printf(" >");Color(4,0);
printf("     |");Color(3,0);
printf("           Probleme 5");Color(4,0);
printf("                           *\n");
printf("\t\t\t\t\t\t\t\t*       "); Color(14,0);
printf("6");
printf(" >");Color(4,0);
printf("     |");Color(3,0);
printf("           Retour vers le menu");Color(4,0);
printf("                  *\n");
printf("\t\t\t\t\t\t\t\t*                                                                *\n");
printf("\t\t\t\t\t\t\t\t+----------------------------------------------------------------+\n");
       printf("\n");
       printf("\n");
       printf("\n");
       printf("Choisir un ID  -->   ");
       scanf("%d",&n);
        if(n == 6){
        system("CLS");
        main(1);
       }

       if (n==1){
        jouerprob1(board);

       }
        if (n==2){
        jouerprob2(board);

       }
        if (n==3){
        jouerprob3(board);

       }
        if (n==4){
        jouerprob4(board);

       }
       if (n==5){
        jouerprob5(board);

       }

       break; /* optional */
   case 3  :
       system("CLS");
              logo();
              printf("\t\t\t\t\t\t\t\t\t| Developped by : KHALIL zakaria & Rami rachid  |\n");
              printf("\t\t\t\t\t\t\t\t\t+-----------------------------------------------+\n");
       Color(12,0);

       printf("\n");
       printf("\n");
       printf("\n");

printf("\t\t\t\t\t\t\t\t+-------------------------------------------------------------------------+\n");
printf("\t\t\t\t\t\t\t\t*                                                                         *\n");
printf("\t\t\t\t\t\t\t\t*                                                                         *\n");
printf("\t\t\t\t\t\t\t\t* Au début de la partie, le goban est vide.Pour une partie à handicap,      *\n");
printf("\t\t\t\t\t\t\t\t* le premier tour de Noir consiste en la pose des pierres de handicap.    *\n");
printf("\t\t\t\t\t\t\t\t* Les joueurs déposent alternativement une pierre de leur couleur sur      *\n");
printf("\t\t\t\t\t\t\t\t* Une intersection libre du goban y compris les intersections qui se      *\n");
printf("\t\t\t\t\t\t\t\t* trouvent au bord du goban et retirent éventuellement les pierres qu      *\n");
printf("\t\t\t\t\t\t\t\t* ils viennent de capturer, Une fois placée sur le goban,il n'est plus     *\n");
printf("\t\t\t\t\t\t\t\t* il n'est plus autorisé de déplacer une pierre. Un joueur peut aussi       *\n");
printf("\t\t\t\t\t\t\t\t* passer son tour ou abandonner.Une pierre isolée ou plus généralement       *\n");
printf("\t\t\t\t\t\t\t\t* une chaine qui ne possède plus qu'une seule liberté est dite en atari     *\n");
printf("\t\t\t\t\t\t\t\t* si la chaîne perd cette dernière liberté, elle est capturée.elle est        *\n");
printf("\t\t\t\t\t\t\t\t* capturée. La chaine complète est retirée du goban et ajoutée au tas         *\n");
printf("\t\t\t\t\t\t\t\t* de prisonniers du joueur adverse.Si aucun des joueurs n'a abandonné,     *\n");
printf("\t\t\t\t\t\t\t\t* lapartie se termine après queles deux joueurs ontpassé consécutivement     *\n");
printf("\t\t\t\t\t\t\t\t* On comptabilise alors les points de chacun. Celui qui possède le plus    *\n");
printf("\t\t\t\t\t\t\t\t* de points gagne.Les pierres mortes sont alors retirées comme si elles    *\n");
printf("\t\t\t\t\t\t\t\t* avaient été capturées.La règle stipule que les disputes sur le statut       *\n");
printf("\t\t\t\t\t\t\t\t* vivant ou mort des groupes peuvent être résolues en continuantà jouer      *\n");
printf("\t\t\t\t\t\t\t\t* jusqu'à ce que les joueurs tombent d'accord. Les règles japonaise sont    *\n");
printf("\t\t\t\t\t\t\t\t* ainsi une longue liste de précédents dans des parties de tournoi, mais    *\n");
printf("\t\t\t\t\t\t\t\t* cela reste anecdotique pour la plupart des joueurs.Après l'élimination    *\n");
printf("\t\t\t\t\t\t\t\t* des pierres mortes,on compte les points afin de déterminer le gagnant,   *\n");
printf("\t\t\t\t\t\t\t\t*                                                                         *\n");
printf("\t\t\t\t\t\t\t\t*                                                                         *\n");
printf("\t\t\t\t\t\t\t\t*       "); Color(14,0);
printf("1");
printf(" >");Color(12,0);
printf("     |");Color(3,0);
printf("           Retour vers le menu ");Color(12,0);
printf("                          *\n");
printf("\t\t\t\t\t\t\t\t+-------------------------------------------------------------------------+\n");
printf("\n");
       printf("\n");
       printf("\n");
       printf("Choisir un ID  -->   ");
       scanf("%d",&n);

       if(n == 1){
        system("CLS");
        main();
       }


      break; /* optional */

   case 4  :
    system("CLS");
              logo();
              printf("\t\t\t\t\t\t\t\t\t| Developped by : KHALIL zakaria & Rami rachid  |\n");
              printf("\t\t\t\t\t\t\t\t\t+-----------------------------------------------+\n");
              printf("\n");
              printf("\n");
     Color(4,0);
printf("\t\t\t\t\t\t\t\t+-------------------------------------------------------------------------+\n");
printf("\t\t\t\t\t\t\t\t*                                                                         *\n");
printf("\t\t\t\t\t\t\t\t*                                                                         *\n");
printf("\t\t\t\t\t\t\t\t*       ");Color(14,0);
printf("1");
printf(" >");Color(4,0);
printf("     |");Color(3,0);
printf("           Arreter la music et retourner ");Color(4,0);
printf("                *\n");
printf("\t\t\t\t\t\t\t\t*       ");Color(14,0);
printf("2");
printf(" >");Color(4,0);
printf("     |");Color(3,0);
printf("           Retour");Color(4,0);
printf("                                        *\n");
printf("\t\t\t\t\t\t\t\t*                                                                         *\n");
printf("\t\t\t\t\t\t\t\t*                                                                         *\n");
printf("\t\t\t\t\t\t\t\t+-------------------------------------------------------------------------+\n");
       printf("\n");
       printf("\n");
       printf("Choisir un ID  -->   ");
       scanf("%d",&n);

    if (n == 1){
        system("CLS");
        PlaySound(TEXT("silence.wav"), NULL, SND_ASYNC);
        main(2);
          }

    if (n ==2){
            system("CLS");
        main(1);

    }
    break;
   case 5  :
      system("exit");
      break; /* optional */
   case 6 :
        system("CLS");
        uservuserload(board);



}
}



