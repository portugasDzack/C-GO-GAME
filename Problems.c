#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void jouerprob1(char board[10][10]){

char player1='0';
char player2='X';
int r,c,t,e=0;

char n[3];
for (r=0;r<9;r++){
    for (c=0;c<=9;c++){

        board[r][c]='*';

    }


}

board[2][1]=player1;
board[2][2]=player1;
board[2][3]=player1;
board[2][4]=player1;
board[2][5]=player1;

board[3][1]=player2;
board[3][2]=player2;
board[3][3]=player2;
board[3][4]=player2;
board[3][5]=player2;
board[3][6]=player2;
board[2][6]=player2;
board[1][6]=player2;
board[5][1]=player2;

grille(board);

for (t=0;t<100;t++){
    printf("\n");
    printf("\n");


    printf("\nturn %d  :",t);
    scanf("%s",n);
   printf("\n");
   printf("\n");
   printf("\n");

int c = n[0];
c=c-65;
int r = n[1];
r=r-48;

if ( t==0 & r==0 & c==4 ){
    system("CLS");
board[r][c]=player2
;board[0][3]=player1;

printf("\n");
}
else if ( t==1& r==0 & c==5 ){
system("CLS");
board[r][c]=player2;
board[1][4]=player1;
}
else if ( t==2& r==1 & c==2 ){
    system("CLS");
board[r][c]=player2;
board[1][1]=player1;
printf("\n");
}
else if ( t==3 & r==2 & c==0 ){
    system("CLS");
board[r][c]=player2;
board[1][0]=player1;
printf("\n");
}
else if ( t==4& r==0 & c==1 ){
    system("CLS");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");

printf("                                          `..--::::::--..`                             \n");
printf("                                  `-:/osyhhhddddddddddddhhhyso/:-`                      \n");
printf("                             `-/oyhhddddddddddddddddddddddddddddhhyo/-`                 \n");
printf("                          ./shhddddddddddddddddddddddddddddddddddddddhhs/.                 \n");
printf("                       -+yhddddddddddddddddddddddddddddddddddddddddddddddhy+-                 \n");
printf("                    `/yhddddddddddddddddddddddddddddddddddddddddddddddddddddhy/`              \n");
printf("                  -ohddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh+.              \n");
printf("                -ohddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddho-              \n");
printf("              .ohddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddho.              \n");
printf("            `/hddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh/` \n");
printf("           .sdddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddds.  \n");
printf("          :hddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh:   \n");
printf("        /hddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh/     \n");
printf("        +dddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd/     \n");
printf("       /ddddddddddddddddddddddddddddddddddddddddddddhhhyhhhhhhdddddddddddddddddddddddddddddd/      \n");
printf("      :dddddddddddddddddddddddddddddddddddddddddddddy.``````.oddddddddddddddddddddddddddddddh:    \n");
printf("     .hddddddddddddddddddddddddddddddddddddddddddddds        +dddddddddddddddddddddddddddddddh.   \n");
printf("     sddddddddddddddddddddddddddddddddddddddddddddddy````````+dddddddddddddddddddddddddddddddds   \n");
printf("    -dddddddddddddddddddddddddddddddddddddddddddddddhyyyyyyyyhdddddddddddddddhhhhhhdddddddddddd-   \n");
printf("    sddddddd+::::::::yddddd+:::::::odddddy::::::::ody::::::::sdd+:::::::+hy+:-....-:ohddddddddds   \n");
printf("   .dddddddds        /ddddh`       `hdddd:       `yds        +dd:       -:`          `+ddddddddd`  \n");
printf("   /ddddddddd:       `hddd+         odddy        +dds        +dd:                      +dddddddd:  \n");
printf("   odddddddddh`       /ddd.         .ddd/       .hdds        +dd:         .:/:`        .ddddddddo  \n");
printf("   sdddddddddd+       `hds           ydh`       sddds        +dd:        /ddddh`       `dddddddds  \n");
printf("   sddddddddddd.       +d:    `s     :d+       :dddds        +dd:        hddddd-       `dddddddds  \n");
printf("   sdddddddddddy       `y     /d-    `h.      `hdddds        +dd:       `dddddd-       `dddddddds  \n");
printf("   odddddddddddd/       .    `hds     -       oddddds        +dd:       `dddddd-       `dddddddd+  \n");
printf("   /ddddddddddddh`           :ddd.           -dddddds        +dd:       `dddddd-       `dddddddd:  \n");
printf("   .dddddddddddddo          `ydddo          `ydddddds        +dd:       `dddddd-       `dddddddd`  \n");
printf("    sddddddddddddd-         :ddddh`         +ddddddds        +dd:       `dddddd-       `ddddddds   \n");
printf("    -dddddddddddddy.........yddddd+........-hdddddddy........odd/........dddddd:.......-ddddddd-   \n");
printf("     sdddddddddddddhhhhhhhhhddddddhhhhhhhhhhdddddddddhhhhhhhhhddhhhhhhhhhddddddhhhhhhhhhdddddds    \n");
printf("     .hddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh.    \n");
printf("      :dddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd:     \n");
printf("       /dddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd/      \n");
printf("        +dddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd/      \n");
printf("         /hddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh/       \n");
printf("          :hddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddy:        \n");
printf("           .sdddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddds.         \n");
printf("            `/hddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh/`          \n");
printf("              .ohddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddho.            \n");
printf("                -ohddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddho.              \n");
printf("                  -ohddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh+.                \n");
printf("                    `/yhddddddddddddddddddddddddddddddddddddddddddddddddddddhy/`                  \n");
printf("                       -+yhddddddddddddddddddddddddddddddddddddddddddddddhy+-                     \n");
printf("                          ./shhddddddddddddddddddddddddddddddddddddddhhs/.                        \n");
printf("                             `-/oyhhddddddddddddddddddddddddddddhhyo/-`                           \n");
printf("                                  `-:/osyhhhhdddddddddddhhhyso/:-`                                \n");
printf("                                          `..--::::::--..` \n");

printf("\n");

break;
}
else {

    printf(" Game Over ! " );
e=0;
break;
}
if (e =!0){
grille(board);}


}
}
void jouerprob2(char board[10][10]){

char player1='N';
char player2='B';
int r,c,t,e=0;

char n[3];
for (r=0;r<9;r++){
    for (c=0;c<=9;c++){

        board[r][c]='*';

    }


}
board[0][2]=player1;
board[1][2]=player1;
board[1][5]=player1;
board[2][2]=player1;
board[2][6]=player1;
board[3][3]=player1;
board[3][5]=player1;
board[4][3]=player1;
board[5][2]=player1;
board[5][3]=player1;
board[5][5]=player1;

board[0][3]=player2;
board[1][3]=player2;
board[2][3]=player2;
board[2][4]=player2;
board[3][2]=player2;
board[4][2]=player2;
board[5][1]=player2;
board[6][3]=player2;
board[6][1]=player2;
board[6][2]=player2;
grille(board);

for (t=0;t<100;t++){
    printf("\n");
    printf("\n");


    printf("\nturn %d  :",t);
    scanf("%s",n);
   printf("\n");
   printf("\n");
   printf("\n");

int c = n[0];
c=c-65;
int r = n[1];
r=r-48;

if ( t==0 & r==2 & c==1 ){
    system("CLS");
board[r][c]=player1
;board[3][1]=player2;

printf("\n");
}
else if ( t==1& r==0 & c==1 ){
system("CLS");
board[r][c]=player1;
board[1][0]=player1;
}
else if ( t==2& r==3 & c==0){
    system("CLS");
board[r][c]=player2;
board[4][1]=player2;
printf("\n");
}
else if ( t==3 & r==3 & c==4 ){
    system("CLS");
board[r][c]=player1;
board[0][2]=player2;
printf("\n");
}
    else if ( t==4 & r==2 & c==5 ){
    system("CLS");
board[r][c]=player1;
board[0][0]=player2;
printf("\n");
}
else if ( t==5 & r==1 & c==1 ){
    system("CLS");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");

printf("                                          `..--::::::--..`                             \n");
printf("                                  `-:/osyhhhddddddddddddhhhyso/:-`                      \n");
printf("                             `-/oyhhddddddddddddddddddddddddddddhhyo/-`                 \n");
printf("                          ./shhddddddddddddddddddddddddddddddddddddddhhs/.                 \n");
printf("                       -+yhddddddddddddddddddddddddddddddddddddddddddddddhy+-                 \n");
printf("                    `/yhddddddddddddddddddddddddddddddddddddddddddddddddddddhy/`              \n");
printf("                  -ohddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh+.              \n");
printf("                -ohddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddho-              \n");
printf("              .ohddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddho.              \n");
printf("            `/hddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh/` \n");
printf("           .sdddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddds.  \n");
printf("          :hddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh:   \n");
printf("        /hddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh/     \n");
printf("        +dddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd/     \n");
printf("       /ddddddddddddddddddddddddddddddddddddddddddddhhhyhhhhhhdddddddddddddddddddddddddddddd/      \n");
printf("      :dddddddddddddddddddddddddddddddddddddddddddddy.``````.oddddddddddddddddddddddddddddddh:    \n");
printf("     .hddddddddddddddddddddddddddddddddddddddddddddds        +dddddddddddddddddddddddddddddddh.   \n");
printf("     sddddddddddddddddddddddddddddddddddddddddddddddy````````+dddddddddddddddddddddddddddddddds   \n");
printf("    -dddddddddddddddddddddddddddddddddddddddddddddddhyyyyyyyyhdddddddddddddddhhhhhhdddddddddddd-   \n");
printf("    sddddddd+::::::::yddddd+:::::::odddddy::::::::ody::::::::sdd+:::::::+hy+:-....-:ohddddddddds   \n");
printf("   .dddddddds        /ddddh`       `hdddd:       `yds        +dd:       -:`          `+ddddddddd`  \n");
printf("   /ddddddddd:       `hddd+         odddy        +dds        +dd:                      +dddddddd:  \n");
printf("   odddddddddh`       /ddd.         .ddd/       .hdds        +dd:         .:/:`        .ddddddddo  \n");
printf("   sdddddddddd+       `hds           ydh`       sddds        +dd:        /ddddh`       `dddddddds  \n");
printf("   sddddddddddd.       +d:    `s     :d+       :dddds        +dd:        hddddd-       `dddddddds  \n");
printf("   sdddddddddddy       `y     /d-    `h.      `hdddds        +dd:       `dddddd-       `dddddddds  \n");
printf("   odddddddddddd/       .    `hds     -       oddddds        +dd:       `dddddd-       `dddddddd+  \n");
printf("   /ddddddddddddh`           :ddd.           -dddddds        +dd:       `dddddd-       `dddddddd:  \n");
printf("   .dddddddddddddo          `ydddo          `ydddddds        +dd:       `dddddd-       `dddddddd`  \n");
printf("    sddddddddddddd-         :ddddh`         +ddddddds        +dd:       `dddddd-       `ddddddds   \n");
printf("    -dddddddddddddy.........yddddd+........-hdddddddy........odd/........dddddd:.......-ddddddd-   \n");
printf("     sdddddddddddddhhhhhhhhhddddddhhhhhhhhhhdddddddddhhhhhhhhhddhhhhhhhhhddddddhhhhhhhhhdddddds    \n");
printf("     .hddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh.    \n");
printf("      :dddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd:     \n");
printf("       /dddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd/      \n");
printf("        +dddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd/      \n");
printf("         /hddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh/       \n");
printf("          :hddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddy:        \n");
printf("           .sdddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddds.         \n");
printf("            `/hddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh/`          \n");
printf("              .ohddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddho.            \n");
printf("                -ohddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddho.              \n");
printf("                  -ohddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh+.                \n");
printf("                    `/yhddddddddddddddddddddddddddddddddddddddddddddddddddddhy/`                  \n");
printf("                       -+yhddddddddddddddddddddddddddddddddddddddddddddddhy+-                     \n");
printf("                          ./shhddddddddddddddddddddddddddddddddddddddhhs/.                        \n");
printf("                             `-/oyhhddddddddddddddddddddddddddddhhyo/-`                           \n");
printf("                                  `-:/osyhhhhdddddddddddhhhyso/:-`                                \n");
printf("                                          `..--::::::--..` \n");

printf("\n");

break;
}
else {

    printf(" Game Over ! " );
e=0;
break;
}
if (e =!0){
grille(board);}


}
}

void jouerprob3(char board[10][10]){

char player1='N';
char player2='B';
int r,c,t,e=0;

char n[3];
for (r=0;r<9;r++){
    for (c=0;c<=9;c++){

        board[r][c]='*';

    }


}
board[1][2]=player1;
board[1][3]=player1;
board[2][3]=player1;
board[3][3]=player1;
board[4][3]=player1;
board[5][3]=player1;
board[6][1]=player1;
board[6][2]=player1;
board[6][4]=player1;

board[0][1]=player2;
board[1][1]=player2;
board[2][2]=player2;
board[3][2]=player2;
board[5][1]=player2;
board[5][2]=player2;


grille(board);

for (t=0;t<100;t++){
    printf("\n");
    printf("\n");


    printf("\nturn %d  :",t);
    scanf("%s",n);
   printf("\n");
   printf("\n");
   printf("\n");

int c = n[0];
c=c-65;
int r = n[1];
r=r-48;

if ( t==0 & r==3 & c==0 ){
    system("CLS");
board[r][c]=player1
;board[4][0]=player2;

printf("\n");
}
else if ( t==1 & r==3 & c==1 ){
system("CLS");
board[r][c]=player1;
board[4][2]=player1;
}
else if ( t==2 & r==2 & c==1){
    system("CLS");
board[r][c]=player2;
board[1][0]=player2;
printf("\n");
}
else if ( t==3 & r==0 & c==2 ){
    system("CLS");


printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");

printf("                                          `..--::::::--..`                             \n");
printf("                                  `-:/osyhhhddddddddddddhhhyso/:-`                      \n");
printf("                             `-/oyhhddddddddddddddddddddddddddddhhyo/-`                 \n");
printf("                          ./shhddddddddddddddddddddddddddddddddddddddhhs/.                 \n");
printf("                       -+yhddddddddddddddddddddddddddddddddddddddddddddddhy+-                 \n");
printf("                    `/yhddddddddddddddddddddddddddddddddddddddddddddddddddddhy/`              \n");
printf("                  -ohddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh+.              \n");
printf("                -ohddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddho-              \n");
printf("              .ohddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddho.              \n");
printf("            `/hddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh/` \n");
printf("           .sdddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddds.  \n");
printf("          :hddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh:   \n");
printf("        /hddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh/     \n");
printf("        +dddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd/     \n");
printf("       /ddddddddddddddddddddddddddddddddddddddddddddhhhyhhhhhhdddddddddddddddddddddddddddddd/      \n");
printf("      :dddddddddddddddddddddddddddddddddddddddddddddy.``````.oddddddddddddddddddddddddddddddh:    \n");
printf("     .hddddddddddddddddddddddddddddddddddddddddddddds        +dddddddddddddddddddddddddddddddh.   \n");
printf("     sddddddddddddddddddddddddddddddddddddddddddddddy````````+dddddddddddddddddddddddddddddddds   \n");
printf("    -dddddddddddddddddddddddddddddddddddddddddddddddhyyyyyyyyhdddddddddddddddhhhhhhdddddddddddd-   \n");
printf("    sddddddd+::::::::yddddd+:::::::odddddy::::::::ody::::::::sdd+:::::::+hy+:-....-:ohddddddddds   \n");
printf("   .dddddddds        /ddddh`       `hdddd:       `yds        +dd:       -:`          `+ddddddddd`  \n");
printf("   /ddddddddd:       `hddd+         odddy        +dds        +dd:                      +dddddddd:  \n");
printf("   odddddddddh`       /ddd.         .ddd/       .hdds        +dd:         .:/:`        .ddddddddo  \n");
printf("   sdddddddddd+       `hds           ydh`       sddds        +dd:        /ddddh`       `dddddddds  \n");
printf("   sddddddddddd.       +d:    `s     :d+       :dddds        +dd:        hddddd-       `dddddddds  \n");
printf("   sdddddddddddy       `y     /d-    `h.      `hdddds        +dd:       `dddddd-       `dddddddds  \n");
printf("   odddddddddddd/       .    `hds     -       oddddds        +dd:       `dddddd-       `dddddddd+  \n");
printf("   /ddddddddddddh`           :ddd.           -dddddds        +dd:       `dddddd-       `dddddddd:  \n");
printf("   .dddddddddddddo          `ydddo          `ydddddds        +dd:       `dddddd-       `dddddddd`  \n");
printf("    sddddddddddddd-         :ddddh`         +ddddddds        +dd:       `dddddd-       `ddddddds   \n");
printf("    -dddddddddddddy.........yddddd+........-hdddddddy........odd/........dddddd:.......-ddddddd-   \n");
printf("     sdddddddddddddhhhhhhhhhddddddhhhhhhhhhhdddddddddhhhhhhhhhddhhhhhhhhhddddddhhhhhhhhhdddddds    \n");
printf("     .hddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh.    \n");
printf("      :dddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd:     \n");
printf("       /dddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd/      \n");
printf("        +dddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd/      \n");
printf("         /hddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh/       \n");
printf("          :hddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddy:        \n");
printf("           .sdddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddds.         \n");
printf("            `/hddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh/`          \n");
printf("              .ohddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddho.            \n");
printf("                -ohddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddho.              \n");
printf("                  -ohddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh+.                \n");
printf("                    `/yhddddddddddddddddddddddddddddddddddddddddddddddddddddhy/`                  \n");
printf("                       -+yhddddddddddddddddddddddddddddddddddddddddddddddhy+-                     \n");
printf("                          ./shhddddddddddddddddddddddddddddddddddddddhhs/.                        \n");
printf("                             `-/oyhhddddddddddddddddddddddddddddhhyo/-`                           \n");
printf("                                  `-:/osyhhhhdddddddddddhhhyso/:-`                                \n");
printf("                                          `..--::::::--..` \n");

printf("\n");

break;
}
else {

    printf(" Game Over ! " );
e=0;
break;
}
if (e =!0){
grille(board);}


}
}
void jouerprob4(char board[10][10]){

char player1='N';
char player2='B';
int r,c,t,e=0;

char n[3];
for (r=0;r<9;r++){
    for (c=0;c<=9;c++){

        board[r][c]='*';

    }


}

board[0][4]=player1;
board[2][1]=player1;
board[2][3]=player1;
board[2][4]=player1;
board[2][5]=player1;
board[3][1]=player1;
board[3][2]=player1;
board[4][1]=player1;
board[4][3]=player1;
board[5][2]=player1;
board[6][0]=player1;
board[6][2]=player1;
board[6][3]=player1;
board[7][1]=player1;
board[7][3]=player1;
board[8][1]=player1;

board[0][3]=player2;
board[1][1]=player2;
board[1][2]=player2;
board[2][2]=player2;
board[3][3]=player2;
board[3][4]=player2;
board[4][4]=player2;
board[5][3]=player2;
board[5][4]=player2;
board[6][4]=player2;
board[7][2]=player2;
board[7][4]=player2;
board[8][0]=player2;
board[8][2]=player2;
board[8][3]=player2;
board[9][0]=player2;
board[9][1]=player2;
board[9][2]=player2;


grille(board);


for (t=0;t<100;t++){
    printf("\n");
    printf("\n");


    printf("\nturn %d  :",t);
    scanf("%s",n);
   printf("\n");
   printf("\n");
   printf("\n");

int c = n[0];
c=c-65;
int r = n[1];
r=r-48;


 if ( t==0 & r==5 & c==0 ){
    system("CLS");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");

printf("                                          `..--::::::--..`                             \n");
printf("                                  `-:/osyhhhddddddddddddhhhyso/:-`                      \n");
printf("                             `-/oyhhddddddddddddddddddddddddddddhhyo/-`                 \n");
printf("                          ./shhddddddddddddddddddddddddddddddddddddddhhs/.                 \n");
printf("                       -+yhddddddddddddddddddddddddddddddddddddddddddddddhy+-                 \n");
printf("                    `/yhddddddddddddddddddddddddddddddddddddddddddddddddddddhy/`              \n");
printf("                  -ohddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh+.              \n");
printf("                -ohddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddho-              \n");
printf("              .ohddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddho.              \n");
printf("            `/hddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh/` \n");
printf("           .sdddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddds.  \n");
printf("          :hddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh:   \n");
printf("        /hddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh/     \n");
printf("        +dddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd/     \n");
printf("       /ddddddddddddddddddddddddddddddddddddddddddddhhhyhhhhhhdddddddddddddddddddddddddddddd/      \n");
printf("      :dddddddddddddddddddddddddddddddddddddddddddddy.``````.oddddddddddddddddddddddddddddddh:    \n");
printf("     .hddddddddddddddddddddddddddddddddddddddddddddds        +dddddddddddddddddddddddddddddddh.   \n");
printf("     sddddddddddddddddddddddddddddddddddddddddddddddy````````+dddddddddddddddddddddddddddddddds   \n");
printf("    -dddddddddddddddddddddddddddddddddddddddddddddddhyyyyyyyyhdddddddddddddddhhhhhhdddddddddddd-   \n");
printf("    sddddddd+::::::::yddddd+:::::::odddddy::::::::ody::::::::sdd+:::::::+hy+:-....-:ohddddddddds   \n");
printf("   .dddddddds        /ddddh`       `hdddd:       `yds        +dd:       -:`          `+ddddddddd`  \n");
printf("   /ddddddddd:       `hddd+         odddy        +dds        +dd:                      +dddddddd:  \n");
printf("   odddddddddh`       /ddd.         .ddd/       .hdds        +dd:         .:/:`        .ddddddddo  \n");
printf("   sdddddddddd+       `hds           ydh`       sddds        +dd:        /ddddh`       `dddddddds  \n");
printf("   sddddddddddd.       +d:    `s     :d+       :dddds        +dd:        hddddd-       `dddddddds  \n");
printf("   sdddddddddddy       `y     /d-    `h.      `hdddds        +dd:       `dddddd-       `dddddddds  \n");
printf("   odddddddddddd/       .    `hds     -       oddddds        +dd:       `dddddd-       `dddddddd+  \n");
printf("   /ddddddddddddh`           :ddd.           -dddddds        +dd:       `dddddd-       `dddddddd:  \n");
printf("   .dddddddddddddo          `ydddo          `ydddddds        +dd:       `dddddd-       `dddddddd`  \n");
printf("    sddddddddddddd-         :ddddh`         +ddddddds        +dd:       `dddddd-       `ddddddds   \n");
printf("    -dddddddddddddy.........yddddd+........-hdddddddy........odd/........dddddd:.......-ddddddd-   \n");
printf("     sdddddddddddddhhhhhhhhhddddddhhhhhhhhhhdddddddddhhhhhhhhhddhhhhhhhhhddddddhhhhhhhhhdddddds    \n");
printf("     .hddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh.    \n");
printf("      :dddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd:     \n");
printf("       /dddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd/      \n");
printf("        +dddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd/      \n");
printf("         /hddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh/       \n");
printf("          :hddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddy:        \n");
printf("           .sdddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddds.         \n");
printf("            `/hddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh/`          \n");
printf("              .ohddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddho.            \n");
printf("                -ohddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddho.              \n");
printf("                  -ohddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh+.                \n");
printf("                    `/yhddddddddddddddddddddddddddddddddddddddddddddddddddddhy/`                  \n");
printf("                       -+yhddddddddddddddddddddddddddddddddddddddddddddddhy+-                     \n");
printf("                          ./shhddddddddddddddddddddddddddddddddddddddhhs/.                        \n");
printf("                             `-/oyhhddddddddddddddddddddddddddddhhyo/-`                           \n");
printf("                                  `-:/osyhhhhdddddddddddhhhyso/:-`                                \n");
printf("                                          `..--::::::--..` \n");

printf("\n");

break;
}
else {

    printf(" Game Over ! " );
e=0;
break;
}
if (e =!0){
grille(board);}


}
}
void jouerprob5(char board[10][10]){

char player1='N';
char player2='B';
int r,c,t,e=0;

char n[3];
for (r=0;r<9;r++){
    for (c=0;c<=9;c++){

        board[r][c]='*';

    }


}

board[1][2]=player2;
board[2][0]=player2;
board[2][2]=player2;
board[3][1]=player2;


board[1][3]=player1;
board[2][3]=player1;
board[3][2]=player1;
board[3][4]=player1;
board[4][2]=player1;
board[6][2]=player1;




grille(board);



for (t=0;t<100;t++){
    printf("\n");
    printf("\n");


    printf("\nturn %d  :",t);
    scanf("%s",n);
   printf("\n");
   printf("\n");
   printf("\n");

int c = n[0];
c=c-65;
int r = n[1];
r=r-48;

if ( t==0 & r==0 & c==1 ){
    system("CLS");
board[r][c]=player1
;board[1][1]=player2;

printf("\n");
}
else if ( t==1 & r==0 & c==2 ){
system("CLS");
board[r][c]=player1;
board[4][1]=player1;
}
else if ( t==2 & r==5 & c==1){
    system("CLS");
board[r][c]=player2;
board[4][0]=player2;
printf("\n");
}
else if ( t==3 & r==1 & c==0 ){
    system("CLS");

printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");

printf("                                          `..--::::::--..`                             \n");
printf("                                  `-:/osyhhhddddddddddddhhhyso/:-`                      \n");
printf("                             `-/oyhhddddddddddddddddddddddddddddhhyo/-`                 \n");
printf("                          ./shhddddddddddddddddddddddddddddddddddddddhhs/.                 \n");
printf("                       -+yhddddddddddddddddddddddddddddddddddddddddddddddhy+-                 \n");
printf("                    `/yhddddddddddddddddddddddddddddddddddddddddddddddddddddhy/`              \n");
printf("                  -ohddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh+.              \n");
printf("                -ohddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddho-              \n");
printf("              .ohddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddho.              \n");
printf("            `/hddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh/` \n");
printf("           .sdddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddds.  \n");
printf("          :hddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh:   \n");
printf("        /hddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh/     \n");
printf("        +dddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd/     \n");
printf("       /ddddddddddddddddddddddddddddddddddddddddddddhhhyhhhhhhdddddddddddddddddddddddddddddd/      \n");
printf("      :dddddddddddddddddddddddddddddddddddddddddddddy.``````.oddddddddddddddddddddddddddddddh:    \n");
printf("     .hddddddddddddddddddddddddddddddddddddddddddddds        +dddddddddddddddddddddddddddddddh.   \n");
printf("     sddddddddddddddddddddddddddddddddddddddddddddddy````````+dddddddddddddddddddddddddddddddds   \n");
printf("    -dddddddddddddddddddddddddddddddddddddddddddddddhyyyyyyyyhdddddddddddddddhhhhhhdddddddddddd-   \n");
printf("    sddddddd+::::::::yddddd+:::::::odddddy::::::::ody::::::::sdd+:::::::+hy+:-....-:ohddddddddds   \n");
printf("   .dddddddds        /ddddh`       `hdddd:       `yds        +dd:       -:`          `+ddddddddd`  \n");
printf("   /ddddddddd:       `hddd+         odddy        +dds        +dd:                      +dddddddd:  \n");
printf("   odddddddddh`       /ddd.         .ddd/       .hdds        +dd:         .:/:`        .ddddddddo  \n");
printf("   sdddddddddd+       `hds           ydh`       sddds        +dd:        /ddddh`       `dddddddds  \n");
printf("   sddddddddddd.       +d:    `s     :d+       :dddds        +dd:        hddddd-       `dddddddds  \n");
printf("   sdddddddddddy       `y     /d-    `h.      `hdddds        +dd:       `dddddd-       `dddddddds  \n");
printf("   odddddddddddd/       .    `hds     -       oddddds        +dd:       `dddddd-       `dddddddd+  \n");
printf("   /ddddddddddddh`           :ddd.           -dddddds        +dd:       `dddddd-       `dddddddd:  \n");
printf("   .dddddddddddddo          `ydddo          `ydddddds        +dd:       `dddddd-       `dddddddd`  \n");
printf("    sddddddddddddd-         :ddddh`         +ddddddds        +dd:       `dddddd-       `ddddddds   \n");
printf("    -dddddddddddddy.........yddddd+........-hdddddddy........odd/........dddddd:.......-ddddddd-   \n");
printf("     sdddddddddddddhhhhhhhhhddddddhhhhhhhhhhdddddddddhhhhhhhhhddhhhhhhhhhddddddhhhhhhhhhdddddds    \n");
printf("     .hddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh.    \n");
printf("      :dddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd:     \n");
printf("       /dddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd/      \n");
printf("        +dddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd/      \n");
printf("         /hddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh/       \n");
printf("          :hddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddy:        \n");
printf("           .sdddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddds.         \n");
printf("            `/hddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh/`          \n");
printf("              .ohddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddho.            \n");
printf("                -ohddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddho.              \n");
printf("                  -ohddddddddddddddddddddddddddddddddddddddddddddddddddddddddddh+.                \n");
printf("                    `/yhddddddddddddddddddddddddddddddddddddddddddddddddddddhy/`                  \n");
printf("                       -+yhddddddddddddddddddddddddddddddddddddddddddddddhy+-                     \n");
printf("                          ./shhddddddddddddddddddddddddddddddddddddddhhs/.                        \n");
printf("                             `-/oyhhddddddddddddddddddddddddddddhhyo/-`                           \n");
printf("                                  `-:/osyhhhhdddddddddddhhhyso/:-`                                \n");
printf("                                          `..--::::::--..` \n");

printf("\n");

break;
}
else {

    printf(" Game Over ! " );
e=0;
break;
}
if (e =!0){
grille(board);}


}
}
